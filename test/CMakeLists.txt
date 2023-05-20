add_executable(tests main_test.cpp)

# Link the Catch2 library
target_link_libraries(tests Catch2::Catch2)

