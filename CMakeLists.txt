# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 3.3)
project(envire_maps VERSION 0.1 DESCRIPTION "Envire plugin for maps")
find_package(Rock)

# Default to C++14 (PCL requirement)
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# class_loader (and rock.core package_set patch) setting boost targets as libs
# so we need search for them here
find_package(Boost COMPONENTS system thread)

set(ROCK_TEST_ENABLED ON)

find_package(PluginManager)
find_package(EnvireGIS)
rock_init()
envire_gis_plugin_layout() #it extends rock_standard_layout
