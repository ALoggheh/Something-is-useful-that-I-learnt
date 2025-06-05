#include <bits/stdc++.h>
using namespace std;
int Array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int length = 10;

// if you want to excute a random element in the array then return to the first element
int n = 5; //choose random element from the array
int Array(vector<int> &array,int n){
    int index = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] == n) {
            index = i;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << array[(index + i) % length] << " "; //start from the index when it outside the array it will return to the first element
    }