cmake_minimum_required(VERSION 3.8.0)
project(cimgui_helper)

find_library(cimgui cimgui)

add_library(cimgui_helper SHARED helper.c helper.h)

target_include_directories(cimgui_helper PRIVATE include)
target_link_libraries(cimgui_helper PUBLIC cimgui)

install(TARGETS cimgui_helper
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static
        INCLUDES DESTINATION include)

install(FILES helper.h DESTINATION include)
