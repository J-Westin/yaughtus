#ifndef YGHT_ACTIVATION_H
#define YGHT_ACTIVATION_H

#include <functional>

namespace yght {

    float relu_leak(float x, float a) {
        return x >= 0.0 ? x : a*x;
    }

    float relu_100(float x) {
        return relu_leak(x, 1.0/100.0);
    }

    float relu(float x) {
        return relu_leak(x, 0.0);
    }

    float clamp(float x, float y_min, float y_max) {
        if (x < y_min) {
            return y_min;
        } else if (x > y_max) {
            return y_max;
        } else {
            return x;
        }
    }

    float clamp_01(float x) {
        return clamp(x, 0.0, 1.0);
    }

    float clamp_abs1(float x) {
        return clamp(x, -1.0, 1.0);
    }

    std::function< float(float, float) > relu_leak_func = relu_leak;

    std::function< float(float) > relu_100_func = relu_100;

    std::function< float(float) > relu_func = relu;

    std::function< float(float) > clamp_01_func = clamp_01;

    std::function< float(float) > clamp_abs1_func = clamp_abs1;

} // namespace yght

#endif // YGHT_ACTIVATION_H
