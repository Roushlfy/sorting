cmake_minimum_required(VERSION 3.0.0)
project(sorting VERSION 0.1.0)

include_directories(include)

# add binary files
add_executable(sorting
    main.cpp 
    src/merge.cpp
    src/bubble.cpp
    src/selection.cpp
    src/print.cpp
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# add testing binary files
add_executable(cpptest test/test.cpp)

# enable ctest
include(CTest)
# enable testing functionality
enable_testing()
# define tests
add_test(NAME sorting_test COMMAND $<TARGET_FILE:cpptest> )