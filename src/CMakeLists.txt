add_subdirectory(common)

add_executable(rad main.c)

target_link_libraries(rad PRIVATE Common)