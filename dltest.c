#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *handle;
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    double (*divide)(int, int);
    char *error;

    
    handle = dlopen("./libtest.so.1", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }

    
    add = dlsym(handle, "add");
    subtract = dlsym(handle, "subtract");
    multiply = dlsym(handle, "multiply");
    divide = dlsym(handle, "divide");

    
    if ((error = dlerror()) != NULL) {
        fprintf(stderr, "%s\n", error);
        return 1;
    }

    
    int num1 = 50;
    int num2 = 10;
    printf("num : %d, %d\n", num1, num2);
    printf("덧셈: %d\n", add(num1, num2));
    printf("뺄셈: %d\n", subtract(num1, num2));
    printf("곱셈: %d\n", multiply(num1, num2));
    printf("나눗셈: %f\n", divide(num1, num2));

   
    dlclose(handle);
    return 0;
}

