add_library(Common error.c file.c)

target_include_directories(Common PUBLIC ${CMAKE_SOURCE_DIR}/include)