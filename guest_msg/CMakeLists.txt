set(BIZ_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(libASource
        ${SOURCE}
        ${BIZ_SRC_DIR}/guest_msg_mgr.cpp
        ${BIZ_SRC_DIR}/guest_msg_mgr.h
        ${BIZ_SRC_DIR}/guest_api.h
        )

add_library(libA STATIC ${libASource} )

# 开启 asm 进行野指针检测
target_compile_options(libA PRIVATE -fsanitize=address)
target_link_options(libA PRIVATE -fsanitize=address)