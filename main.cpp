#include <iostream>

int main() {
    int TwoDimentionArray [10][10] ={
            {1,1,1,1,1,1,1,1,1,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,1,1,1,1,1,1,1,1,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,0,0,0,1,0,0,0,0,1},
            {1,1,1,1,1,1,1,1,1,1},
    };
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (TwoDimentionArray[i][j] == 1){
                TwoDimentionArray[i][j] = 0;
            }
            else if(TwoDimentionArray[i][j] == 0)
            {
                TwoDimentionArray[i][j] = 1;
            }
            printf("%d", TwoDimentionArray[i][j]);
        }


        printf("\n");

    }
    return 0;
}
