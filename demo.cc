//Compile it with g++ demo.cc -o demo.exe -static

#include "MemoryFile"
#include <iostream>
int main(int argc, char* argv[]) {
    FileBuffer fb = FileBuffer::New("abc.data",15);
    std::cout << fb->Copy("MemoryBuffer");
    fb->Next(strlen("MemoryBuffer"));
    fb->V<int>() = 400;
    fb.Disopse();
    return 0;
}