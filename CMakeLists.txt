CMAKE_MINIMUM_REQUIRED(VERSION 2.8...3.13)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)
 
ADD_EXECUTABLE(schedule
    source/sublist.cpp
    source/task.cpp
    source/main.cpp
)

ADD_EXECUTABLE(test
    tests/test.cpp
    source/sublist.cpp
    source/task.cpp   
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
