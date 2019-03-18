// MacroX.cpp
#include "pch.h"
#include <iostream>

#include "Structs001.h"

template <typename T>
void printTracks(T aTrack) {
    if constexpr (HAS_MEMBER(T, aTrackY)) {
        std::cout << aTrack.aTrackY << " a track aTrackY" << std::endl;
    }
    if constexpr (HAS_MEMBER(T, aTrackX)) {
        std::cout << aTrack.aTrackX << " a track aTrackX" << std::endl;
    }
}

int main() {
    StructWithXTracks structWithXTracks{};
    structWithXTracks.aTrackX = 1;
    printTracks(structWithXTracks);
    
    StructNoTracks structNoTracks{};
    printTracks(structNoTracks);
    
    StructWithYTracks structWithYTracks{};
    structWithYTracks.aTrackY = 2;
    printTracks(structWithYTracks);
    
    StructWithXAndYTracks structWithXAndYTracks{};
    structWithXAndYTracks.aTrackX = 3;
    structWithXAndYTracks.aTrackY = 4;
    printTracks(structWithXAndYTracks);
}
