#include <iostream>  
using namespace std // error missing semicolon
class Box; // error declaring ';' in class name
{  
    private:  
        int length;  
    public:  
        Box(): length(0) { }  
        friend int printLength(Box); //friend function  
};  
int printLength(Box b)  
{  
   b.length += 10;  
    return b.length;  
)// error : using ')' instead of "}"
int main()  
{  
    Box b;  
    cout<<"Length of box: "<< printLength(b)<<endl;  
    return 0 // error : missing semicolon 
}  
} // error : extra closing parathesis
