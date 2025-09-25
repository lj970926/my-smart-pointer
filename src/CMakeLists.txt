include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB_RECURSE SRCS *.cc)
add_library(my_smart_ptr SHARED ${SRCS})
