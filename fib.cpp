#include <iostream>

uint64_t inline fib2(uint64_t n){
    uint64_t r = 0;
    uint64_t a = 1;
    uint64_t b = 0;
    for(uint64_t c=0;c<n;c++){
        b = r;
        r = r + a;
        a = b;
    }
    return r;
}

uint64_t fib(uint64_t n){
    return n<=1? n:fib2(n);
}

int main()
{
    uint64_t a;
    std::cin>> a;
    std::cout<<fib(a)<<"\n";
    return 0;
}
