
project(blink)

include(${ARDUINO_CMAKE_DIR}/teensy/paths.cmake)
include(${ARDUINO_CMAKE_DIR}/teensy/tools.cmake)
include(${ARDUINO_CMAKE_DIR}/teensy/defs.cmake)
include(${ARDUINO_CMAKE_DIR}/teensy/core.cmake)
include(${ARDUINO_CMAKE_DIR}/teensy/deploy.cmake)

set(sources ${CMAKE_CURRENT_SOURCE_DIR}/Loop.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Setup.cpp
   )
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} teensy_core)
target_compile_options(
    ${PROJECT_NAME} PRIVATE
    ${teensy_compiler_set_cpp}
)
upload_teensy(${PROJECT_NAME} ${PROJECT_NAME})
