#include "math.h"

extern "C" {

void * math_create() {
    return new Math();
}

int math_add(void* handle, int a, int b) {
    return static_cast<Math*>(handle)->add(a,b);
}

int math_mult(void* handle, int a, int b) {
    return static_cast<Math*>(handle)->mult(a, b);
}

int math_get_random(void* handle) {
    return static_cast<Math*>(handle)->getRandom();
}

void math_destroy(void* handle) {
    delete static_cast<Math*>(handle);
}

}
