// Structs001.h
#pragma once

// Taken from stack over flow.
// https://stackoverflow.com/questions/1005476/how-to-detect-whether-there-is-a-specific-member-variable-in-class

#include <type_traits>

#define DEFINE_MEMBER_CHECKER(member) \
    template<typename T, typename V = int> \
    struct has_ ## member : std::false_type { }; \
    template<typename T> \
    struct has_ ## member<T, \
        decltype((void)T:: ## member  \
            , 0) \
        > : std::true_type {};

#define HAS_MEMBER(C, member) \
    has_ ## member<C>::value

struct StructNoTracks {
    int number;
    char aString[123];
    float aFloat;
};

struct StructWithXTracks {
    int number;
    char aString[123];
    float aFloat;
    int aTrackX;
};

struct StructWithYTracks {
    int number;
    char aString[123];
    float aFloat;
    int aTrackY;
};

struct StructWithXAndYTracks {
    int number;
    char aString[123];
    float aFloat;
    int aTrackX;
    int aTrackY;
};

DEFINE_MEMBER_CHECKER(aTrackX)
DEFINE_MEMBER_CHECKER(aTrackY)
