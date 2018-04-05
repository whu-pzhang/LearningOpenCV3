
# compile
add_executable(example2_01 example2_01.cpp)
add_executable(example2_02 example2_02.cpp)
add_executable(example2_03 example2_03.cpp)
add_executable(example2_04 example2_04.cpp)

# link
target_link_libraries(example2_01 ${OpenCV_LIBS})
target_link_libraries(example2_02 ${OpenCV_LIBS})
target_link_libraries(example2_03 ${OpenCV_LIBS})
target_link_libraries(example2_04 ${OpenCV_LIBS})
