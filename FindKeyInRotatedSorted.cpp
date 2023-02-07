#include <iostream>
using namespace std;
int FindPosition(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while (s <= e)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (arr[s] <= arr[mid]){
            if (key >= arr[s] && key <= arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if (key >= arr[mid] && key <= arr[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main()
{
    int n;
    int arr[7] = {4,5,6,7,0,1,2};
    int key;
    cout << "enter the element to search in given array" << endl;
    cin >> key;
    int ans = FindPosition(arr, 7, key);
    cout << "the position of given element in this array is " << ans;
    return 0;
}
