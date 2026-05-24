include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)

FetchContent_MakeAvailable(googletest)

include_directories(${${PROJECT_NAME}_SOURCE_DIR}/include)

enable_testing()

add_executable(${PROJECT_NAME}.test
    AllTests.cpp
    tests.cpp
)

target_link_libraries(${PROJECT_NAME}.test
    ${PROJECT_NAME}
    GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(${PROJECT_NAME}.test)

