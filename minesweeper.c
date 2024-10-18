#include <stdio.h>

int main() {

    int size_row;
    int size_col;
    int landmineCount;
    int landminePOSArr[999][2];
    char gameTable[999][999];

    printf("Enter row: ");
    scanf(" %d", &size_row);
    printf("Enter col: ");
    scanf(" %d", &size_col);

    // Create the base for the game
    /*
        >> Example <<
    Enter row: 3
    Enter col: 3
    >> The base table should be like this
    {
        {'0','0','0'},
        {'0','0','0'},
        {'0','0','0'}
    }
    */
    for (int i = 0; i < size_row; i++) {
        for (int j = 0; j < size_col; j++) {
            gameTable[i][j] = '0';
        }
    }

    printf("How many landmine you wanna place?: ");
    scanf(" %d", &landmineCount);

    // Place landmine
    /*
        >> Example <<
    Enter pos_x = 0
    Enter pos_y = 0
    >> The table should update into something like this
    {
        {'*','0','0'},
        {'0','0','0'},
        {'0','0','0'}
    }
    */

    for (int i = 0; i < landmineCount; i++) {
        printf("Enter pos_x (%d): ", i+1);
        scanf(" %d", &landminePOSArr[i][0]);
        printf("Enter pos_y (%d): ", i+1);
        scanf(" %d", &landminePOSArr[i][1]);

        gameTable[landminePOSArr[i][0]][landminePOSArr[i][1]] = '*';

    }

    // Update the number of landmine inside the table
    /*
        >> Example <<
    {
        {'*','1','0'},
        {'1','1','0'},
        {'0','0','0'}
    }
    */

    for (int i = 0; i < landmineCount; i++) {
        int start_pos_x = landminePOSArr[i][0] - 1;
        
        for (int j = start_pos_x; j < start_pos_x + 3; j++) {
            if (j < 0) continue;
        
            if (j > size_row - 1) break;

            int start_pos_y = landminePOSArr[i][1] - 1;

            for (int k = start_pos_y; k < start_pos_y + 3; k++) {
                if (k < 0) continue;
                
                if (k > size_col - 1) break;

                if (gameTable[j][k] == '*') continue;

                gameTable[j][k] = (char) (((int) gameTable[j][k]) + 1);
            }
        }

    }
    
    for (int i = 0; i < size_row; i++) {
        for (int j = 0; j < size_col; j++) {
            printf("%c", gameTable[i][j]);
        }
        printf("\n");
    }

    return 0;
}