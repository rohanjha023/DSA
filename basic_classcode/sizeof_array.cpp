#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int b[] = {1, 2, 3, 4, 5};
    int n = sizeof(b) / sizeof(int);
    cout<<n<<endl;
    return 0;
}
