cmake_minimum_required(VERSION 3.27)
project(stuff)

set(CMAKE_CXX_STANDARD 20)

add_executable(stuff main.cpp
        vec3.h
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h
        rt.h
        interval.h
        camera.h)
