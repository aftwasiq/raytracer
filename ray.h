#ifndef STUFF_RAY_H
#define STUFF_RAY_H

#include "vec3.h"
#include <iostream>

class ray {
public:
    ray() = default;

    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    [[nodiscard]] point3 origin() const  { return orig; }
    [[nodiscard]] vec3 direction() const { return dir;  }

    [[nodiscard]] point3 at(double t) const {
        return orig + t*dir;
    }

private:
    point3 orig;
    vec3 dir;
};



#endif //STUFF_RAY_H
