#include <iostream>
#include "guest_msg/guest_api.h"
#include "user_msg/user_msg_api.h"


int main() {
    guest_send_msg();
    user_send_msg();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

