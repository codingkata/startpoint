add_library(example "")

target_sources(
    example
    PRIVATE
        example.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example.h
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

add_executable(rover "")
target_sources(
        rover
        PRIVATE
        marsrover.cpp
        CMarsHandle.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
target_include_directories(
        rover
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/CMarsHandle.h
)

