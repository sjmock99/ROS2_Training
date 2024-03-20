cmake_minimum_required(VERSION 3.5)
project(my_py_pkg)
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED) 
find_package(ament_cmake_python REQUIRED) # NECESSARY FOR PYTHON!
find_package(example_interfaces)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(my_robot_interfaces REQUIRED)

# Install Python modules
ament_python_install_package(${PROJECT_NAME}) # NECESSARY FOR PYTHON!
# Install Python executables
install(PROGRAMS
  my_py_pkg/add_two_ints_client_no_oop.py
  my_py_pkg/add_two_ints_client.py
  my_py_pkg/add_two_ints_server.py
  my_py_pkg/battery_node.py
  my_py_pkg/client_server_node.py
  my_py_pkg/hw_status_publisher.py
  my_py_pkg/led_panel_node.py
  my_py_pkg/my_first_node.py
  my_py_pkg/number_counter.py
  my_py_pkg/number_publisher.py
  my_py_pkg/number_reset.py
  my_py_pkg/robot_news_station.py
  my_py_pkg/smartphone.py
  my_py_pkg/template_python_node.py
  my_py_pkg/launch_yaml_example.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()