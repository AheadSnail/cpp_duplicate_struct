set(BIZ_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(libBSource
        ${SOURCE}
        ${BIZ_SRC_DIR}/user_msg_mgr.cpp
        ${BIZ_SRC_DIR}/user_msg_api.h
        ${BIZ_SRC_DIR}/user_msg_mgr.h
        )
add_library(libB STATIC ${libBSource} )
# 开启 asm 进行野指针检测
target_compile_options(libB PRIVATE -fsanitize=address)
target_link_options(libB PRIVATE -fsanitize=address)