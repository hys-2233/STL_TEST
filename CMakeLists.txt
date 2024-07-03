cmake_minimum_required(VERSION 3.0.0)
project(test_stl VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(test_stl_vector_list src/vector_list.cpp)

add_executable(test_stl_map_unordered_map_time src/map_unordered_map_time.cpp)

add_executable(test_stl_set_map src/set_map.cpp)

add_executable(test_stl_set_multiset src/set_multiset.cpp)

add_executable(test_stl_map_unordered_map src/map_unordered_map.cpp)

add_executable(test_stl_map_multimap src/map_multimap.cpp)

add_executable(test_stl_iterators src/iterators.cpp)

add_executable(test_stl_algorithm src/algorithm.cpp)

add_executable(test_stl_adapters src/adapters.cpp)

add_executable(test_stl_use_adapters src/use_adapters.cpp)

add_executable(test_load_save src/load_save.cpp)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
