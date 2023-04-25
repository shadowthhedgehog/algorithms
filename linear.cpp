/*
Linear search algorithm in C++
Zach Wilcox
*/

#include <iostream>
#include <array>


int linear_search(std::array<int,15> A, int x);

// main function. chooses arbitrary array and value to search for
int main(){
    std::array<int,15> arr{3,65,7,45,87,4,5,43,7,8,2,34,6,4,3};
    std::cout << "Array is " << arr.size() << " ints long \n";
    int y = 0;
    std::cout << "Enter number to search for: \n";
    std::cin >> y;
    std::cout << "Y found at: " << linear_search(arr, y) << "\n";
    return y;
}

// function to search a given array for the value x using liner search.
int linear_search(std::array<int,15> A, int x){
    for(int i = 0; i < A.size(); i++){
        if(A[i] == x){
            return i;
        }
    }
    std::cout << "Not in list" << "\n";
    exit(0);
}