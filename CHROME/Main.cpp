#include <iostream>
using namespace std;

class Main
{
public:
   void func(string x, string y);
   void AC(int r)
   {
      float Pi = 22/7;
      double A = Pi*r*r;
      cout << A << endl;
   }
};

void Main::func(string x, string y)
{
   cout << x + y << endl;
}

int main()
{
   Main Obj;
   Obj.func("Hello ", "World");
   Obj.AC(2);
   return 0;
}

