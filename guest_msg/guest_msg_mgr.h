#pragma once

#include <string>
#include <iostream>

using namespace std;

struct TestStructParam {
    std::string user_id;
    std::string peer_id;
    uint64_t msg_id{0};
    uint32_t count{0};
    bool is_forward{true};

    TestStructParam() {
        cout << "guest_msg_mgr.h construct execute" << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(this) << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(&user_id) << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(&peer_id) << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(&msg_id) << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(&count) << endl;
        cout << "guest_msg_mgr.h construct execute this " << reinterpret_cast<uint64_t>(&is_forward) << endl;
    }
};
