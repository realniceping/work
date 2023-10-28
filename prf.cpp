#include "prf.h"
#define K this->key
#define a(x) (x*(0x9E3779B1^K))^(x+(0x9E3779B9^K));
#define b(x) a((x^(x>>15))*(x|1));
#define c(x) b((x<<7)|(x>>25));
#define d(x) c((x*(266681^K))^(x+(2654435769^K)));
#define e(x) d((x^(0x6C8FBD4D^K))*(0x2E3B86A7^K));
#define f(x) e((x^(x>>11))|0xABCDEF^K);
#define g(x) f((x*(0xAB123456^K))^(x-(0x23456789^K))); 
uint PRF::work(uint x){return g(x)};