/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


class rectangle{
    private:
        int w,h;
    public:    
        void input(int wid,int hei){
            w=wid;
            h=hei;
        }
        int area(){
            return w * h;
        }

};

int main()
{
    rectangle r1,r2;
    r1.input(10,9);
    r2.input(8,6);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;

    return 0;
}