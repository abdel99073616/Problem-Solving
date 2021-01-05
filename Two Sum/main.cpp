#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {2,7,11,15};
    int target = 9;
    int j=0;
    int arr2[5] = {0};
    for(int i=0;i<5;i++){
        if(arr[i] <= target){
            arr2[j] = arr[i];
            j++;
        }
    }

    for(int i=0 ; i<5 ; i++)
    {
        if(arr2[i] + arr2[i+1] == target)
        {
            cout<< i << i+1 ;
        }
    }
    return 0;
}
