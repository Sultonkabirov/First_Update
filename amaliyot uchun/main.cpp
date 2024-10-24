#include <iostream>
#include <cmath>

using namespace std;
double name(char a){
  if('a'<=a&&a<='z'){
    return true;
  }

return false;

}
int main()
{
 cout<<name('s')<<endl;
 cout<<name('S')<<endl;
 cout<<name('5')<<endl;
 cout<<name('D')<<endl;

    return 0;
}
