
# compile
add_executable(example2_01 example2_01.cpp)
add_executable(example2_02 example2_02.cpp)
add_executable(example2_03 example2_03.cpp)
add_executable(example2_04 example2_04.cpp)
add_executable(example2_05 example2_05.cpp)
add_executable(example2_06 example2_06.cpp)
add_executable(example2_07 example2_07.cpp)
add_executable(example2_08 example2_08.cpp)
add_executable(example2_09 example2_09.cpp)
add_executable(example2_10 example2_10.cpp)
add_executable(example2_11 example2_11.cpp)

# link
target_link_libraries(example2_01 ${OpenCV_LIBS})
target_link_libraries(example2_02 ${OpenCV_LIBS})
target_link_libraries(example2_03 ${OpenCV_LIBS})
target_link_libraries(example2_04 ${OpenCV_LIBS})
target_link_libraries(example2_05 ${OpenCV_LIBS})
target_link_libraries(example2_06 ${OpenCV_LIBS})
target_link_libraries(example2_07 ${OpenCV_LIBS})
target_link_libraries(example2_08 ${OpenCV_LIBS})
target_link_libraries(example2_09 ${OpenCV_LIBS})
target_link_libraries(example2_10 ${OpenCV_LIBS})
target_link_libraries(example2_11 ${OpenCV_LIBS})

# Exercises
add_subdirectory(Exercises)
