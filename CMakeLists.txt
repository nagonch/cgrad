cmake_minimum_required(VERSION 3.5)

project(cgrad)

add_compile_options(-std=c++11)
add_executable(${PROJECT_NAME} "tensor.cpp")

find_package(Eigen3 REQUIRED)

link_directories(${Eigen_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME}
   ${Eigen_LIBRARIES}
   )