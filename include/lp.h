#pragma once
#include "common.h"
#include "vk.h"

class Lp
{
public:
    Lp();
    void getServer();
    void loop();

private:
    unsigned int group_id;
    std::string server;
    std::string ts;
    std::string key;
    Net net;
    Vk vk;
};
