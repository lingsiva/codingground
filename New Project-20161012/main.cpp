#include <iostream>

using namespace std;

class ConstMethodTest {
    
    public:
       ConstMethodTest (int x, int y)
       {
           VarX = x;
           VarY = y;
       }
        ~ConstMethodTest()
        {
            VarX=0;
            VarY=0;
        }
        
        int getY () const {return VarY;}
        int getY () {return VarY;}
        
        
    private:
        int VarX;
        int VarY;
        int *ptr;
};

int main()
{

  ConstMethodTest obj(2,6);
  cout << "yvalue " << obj.getY() << "\n" ;
   
   return 0;
}


