#include <iostream>
using namespace std;

bool find_sum_pair(int arr[], int target, int size){
    for(int i= 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}
void bubble_sort (int arr[], int size){
for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool find_by_sort(int arr[], int target, int size){
    bubble_sort(arr, size);
    int left = 0; int right = size -1;
    while(left< right){
        int sum = arr[left] +  arr[right];
        if (sum == target){
            return true;
        }
        else if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 3, 5, 3, 2, 4, 5};
    int target = 4;
    int size = 7;
    
   // bool ans = find_sum_pair(arr, target, size); 
    bool ans = find_by_sort(arr, target, size);
    if(ans){
        cout<< "pair given";
    }
    else {
        cout << "not not inside array";
    }
    
    // for (int i = 0; i < n; i++) { 
    //     for (int j = i + 1; j < n; j++) { 
    //         if (arr[i] + arr[j] == target) {
    //             cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
    //             return 0;
    //         }
    //     }
    // }

    // cout << "No pair found" << endl;
    return 0;
}
