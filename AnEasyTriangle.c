#include <stdio.h>

int main(void) {
    int numberToIteration;
    char choice;
    int startAscii;
    int counter = 0;
    int justNumber = 0;

    scanf(" %d", &numberToIteration);
    scanf(" %c", &choice);

    if (choice != 'u' && choice != 'l') {
        printf("Invalid Case.");
        return 0;
    }

    switch (choice)
    {
    case 'u':
        startAscii = 'A';
        break;
    
    default:
        startAscii = 'a';
        break;
    }

    int innerTimes = (numberToIteration * 2) - 1;
    int temp = innerTimes;
    
    numberToIteration = (innerTimes / 2) + 1;

    for ( numberToIteration; numberToIteration > 0; numberToIteration-- ) {
        
        innerTimes = (temp - counter) - counter;
        int innerCounter = counter;
        int printCounter = 0;

        int startPrint = startAscii + justNumber;

        for (innerCounter; innerCounter > 0; innerCounter--) {
            printf("%c", ' ');
            printCounter++;
        }

        for (innerTimes; innerTimes > 0; innerTimes--) {
            if (startPrint > (startAscii+25)) {
                startPrint = startAscii;
            }
            printf("%c", startPrint);
            startPrint++;
        }

        if (innerTimes != 1) {
            printf("\n");
        }

        justNumber++;

        if (justNumber >= 26) {
            justNumber = 0;
        }

        counter++;

    }


    return 0;
}