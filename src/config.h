#pragma once
#include <map>
#include <memory>

#include "converters/converter.h"
#include "converters/timestamp_converter.h"
#include "converters/uint_converter.h"

constexpr uint64_t tcp_frame_id = 6000;

std::map<std::string, std::shared_ptr<Converter>> converters = {
    std::make_pair("UInt16", std::make_shared<UIntConverter>(2)),
    std::make_pair("Int16", std::make_shared<UIntConverter>(2)),
    std::make_pair("UInt32", std::make_shared<UIntConverter>(4)),
    std::make_pair("Word", std::make_shared<UIntConverter>(2)),
    std::make_pair("Date and Time", std::make_shared<TimestampConverter>(12)),

};