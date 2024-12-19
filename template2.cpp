#include <iostream>
using namespace std;
template <class t>
void print(t arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4};
    print(arr,4);
    return 0;
}
