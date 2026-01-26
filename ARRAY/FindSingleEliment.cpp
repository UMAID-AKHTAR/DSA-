#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 4, 4, 6, 6, 8, 8, 10, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {

       mid = low + (high - low) / 2;
       if(mid==0 && arr[mid]!=arr[1]) cout << "Element found at index: " <<mid<<" "<<arr[mid];

       if(mid==n-1 && arr[n-1]!=arr[n-2]) cout << "Element found at index: " <<mid<<" "<<arr[mid];

       if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) cout << "Element found at index: " <<mid<<" "<<arr[mid];
        
       if (arr[mid-1] == arr[mid]) {
            high=mid;
        }
        else {
           low=mid;
        }
    }
        cout << "Element found at index: " <<mid<<" "<<arr[mid];
        cout << "Element not found";

    return 0;
}
