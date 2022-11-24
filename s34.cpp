#include <iostream>
using namespace std;
int main()
{    
    int r,s;
    cout <<"Untuk Pernyataan s = 10 + r++;"<<endl;
    r = 10;
    s = 10 + r++;
    cout <<"r = "<<r <<endl;
    cout <<"s = "<<s <<endl;
    
    cout <<"Untuk Pernyataan s = 10 + ++r;" <<endl;
    r = 10;
    s = 10 + ++r;
    cout <<"r = "<<r <<endl;
    cout <<"s = "<<s <<endl;
    
    return 0;
}
