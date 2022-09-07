cmake_minimum_required(VERSION 3.0)
project(example)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Instruct CMake to create code from Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

set(example_SRC
  src/main.cpp
  src/example.cpp
)

# Tell CMake to create the helloworld executable
add_executable(example ${example_SRC})

# Use the Widgets module from Qt 5.
target_link_libraries(example Qt5::Widgets)

# Install the executable
install(TARGETS example DESTINATION bin)
