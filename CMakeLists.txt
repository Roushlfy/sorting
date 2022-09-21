cmake_minimum_required(VERSION 3.0.0)
project(sorting VERSION 0.1.0)

include_directories(include)

# add main binary files
add_executable(sorting
    main.cpp 
    src/merge.cpp
    src/bubble.cpp
    src/selection.cpp
    src/print.cpp
    src/insertion.cpp
    src/pigeonhole.cpp
    )


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


# add testing binary files
add_executable(cpptest
    test/test.cpp
    src/pigeonhole.cpp
    src/insertion.cpp
    src/print.cpp
    )

# enable ctest
include(CTest)
# enable testing functionality
enable_testing()
# define tests
add_test(NAME sorting_test COMMAND $<TARGET_FILE:cpptest> )