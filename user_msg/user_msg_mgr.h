#pragma once

#include <string>
#include <iostream>

using namespace std;

struct TestStructParam {
    std::string user_id;
    std::string peer_id;
    uint64_t msg_id{0};
    uint32_t count{0};
    uint64_t msg_size{0};
    bool is_forward{true};

    TestStructParam() {
        cout << "roam_msg_mgr.h construct execute this " << static_cast<void *>(this) << endl;
        cout << "roam_msg_mgr.h construct user_id execute this " << static_cast<void *>(&user_id) << endl;
        cout << "roam_msg_mgr.h construct peer_id execute this " << static_cast<void *>(&peer_id) << endl;
        cout << "roam_msg_mgr.h construct msg_id execute this " << static_cast<void *>(&msg_id) << endl;
        cout << "roam_msg_mgr.h construct count execute this " << static_cast<void *>(&count) << endl;
        cout << "roam_msg_mgr.h construct msg_size execute this " << static_cast<void *>(&msg_size) << endl;
    }
};
