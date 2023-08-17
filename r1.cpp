#include <iostream>
int sum_of_squares(int n){
    if (n<1){
        return 0;
    }
    else if (n==1){
        return 1;
    }

    return sum_of_squares(n-1)+n*n;
}