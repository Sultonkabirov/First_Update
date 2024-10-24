#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;

   cout<<"n-";cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(i==n/2||j==n/2){
            cout<<"* ";
        }

       }
       cout<<endl;
    }
    return 0;
}
