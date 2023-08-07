cmake_minimum_required(VERSION 3.21)
project(cpp_test)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES "")

set(CMAKE_BUILD_TYPE Release)

add_subdirectory(user_msg)
add_subdirectory(guest_msg)

set(SOURCE_FILES ${SOURCE_FILES} ${SOURCE})
add_executable(cpp_test main.cpp ${SOURCE_FILES})


#静态文件链接
target_link_libraries(cpp_test libA libB)

# 开启 asm 进行野指针检测 输出所有的警告
target_compile_options(cpp_test PRIVATE -fsanitize=address -Wall -Wextra)
target_link_options(cpp_test PRIVATE -fsanitize=address)