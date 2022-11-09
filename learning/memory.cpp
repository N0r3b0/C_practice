#include <iostream>
using namespace std;
int main()
{
    char arr[] = {'a','3','4','s'};
    //int pointer = &arr[0];
   // int pointer2 = &arr[1];
    cout << arr[0] << endl << &arr[1] << endl << &arr[2] << endl << &arr[3] << endl;
    return 0;
}