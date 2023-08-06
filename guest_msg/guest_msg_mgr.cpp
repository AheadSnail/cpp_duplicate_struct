#include "guest_msg_mgr.h"

#include <memory>
#include <iostream>
#include "guest_api.h"


void guest_send_msg() {
    auto param = new TestStructParam();
    cout << "guest_msg_mgr.cpp params " <<  static_cast<void*>(param) << " sizeof: " << sizeof(TestStructParam) << endl;

    param->user_id = "user_id";
    param->peer_id = "peer_id";
    param->msg_id = 1;
    param->count = 1;
    param->is_forward = true;
    std::cout << "send_msg user_id : " << param->user_id << " peer_id: " << param->peer_id << " msg_id: " << param->msg_id
              << " count: " << param->count << " is_forward: " << param->is_forward << std::endl;

    delete param;
}