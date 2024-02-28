//
// Created by talleux on 2/28/24.
//

#pragma once

#include <memory>
#include "../ArgumentsHandling/ArgumentsHandling.hpp"
#include "Header.hpp"

class AudioFile
{
    public:
        explicit AudioFile(const std::shared_ptr<ArgumentsHandling>& argumentsHandling);
        ~AudioFile() = default;

        std::shared_ptr<Header> getHeader();

        std::vector<short> getData();

        void setData();

        void setChannels();

    private:
        std::shared_ptr<Header> _header;
        std::vector<short> _data;
        std::shared_ptr<ArgumentsHandling> _argumentsHandling;
        std::vector<std::vector<short>> _channels;
};
