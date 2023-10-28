#include "prf.h"
#include <ctime>

int main(){
    std::srand(std::time(nullptr));

    PRF * prf = new PRF(123123); 

    for (int i = 0; i < 1000; i++)
    {
        std::cout << prf->work(std::rand()) << std::endl;
    }
    
    return 0;
}