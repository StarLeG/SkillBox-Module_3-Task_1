cmake_minimum_required(VERSION 3.24.2)
project(Task_32_1)
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(src)

include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}//base//film.json     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}//src)