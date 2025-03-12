#pragma once

#include <memory>
#include <cstdint>
class UserToken
{
    public: //type definitions
    using Ptr = std::shared_ptr<UserToken>;
    
    public: //member functions
    int64_t getasint64() const { return int64_t(this); }
    bool isValid(const int64_t input) const { return input == getasint64(); }
};