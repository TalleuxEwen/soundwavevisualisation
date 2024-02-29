//
// Created by ewen.talleux on 27/02/2024.
//

#include <iostream>

#include "ArgumentsHandling/ArgumentsHandling.hpp"
#include "AudioFile/AudioFile.hpp"

int main(int argc, char *argv[])
{
    AudioFile audioFile = AudioFile(std::make_shared<ArgumentsHandling>(argc, argv));

    audioFile.setData();
    audioFile.setChannels();
    audioFile.printChannel(0);
    return 0;
}
