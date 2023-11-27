#include <stdio.h>
#include <stdbool.h>
#define QNT 5

int main() {
    int data[] = {30, 20, 10, 40, 50};
    bool swapped = false;
    // each walk across the array
    for (int i = 0; i < QNT; i++) {
        //the walk across the array 
        for(int j = 0; j < QNT-1; j++){
            if (data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }
        swapped = false;
    }
    for (int i = 0; i < QNT; i++) {
        printf("%d\n", data[i]);
    }


    return 0;
}
