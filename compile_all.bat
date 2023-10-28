g++ prf.cpp -o prf.lib -shared
g++ .\test.cpp .\prf.lib -o main.exe
main.exe