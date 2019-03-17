// Structs001.h
#pragma once

// Taken from stack over flow.
// https://stackoverflow.com/questions/1005476/how-to-detect-whether-there-is-a-specific-member-variable-in-class

#include <type_traits>

template <typename T, typename = int>
struct HasCEPX : std::false_type {};

template <typename T>
struct HasCEPX <T, decltype((void)T::aTrackX, 0)> : std::true_type {};

template <typename T, typename = int>
struct HasCEPY : std::false_type {};

template <typename T>
struct HasCEPY <T, decltype((void)T::aTrackY, 0)> : std::true_type {};

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
