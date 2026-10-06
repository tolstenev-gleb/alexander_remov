#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number: ");
    int r = scanf("%d", &number);
    if (r < 1) {
        printf("Error input\n");
		    return 1;
    }

    if (number > 0) {
        printf("The number is positive\n");
    } else if (number < 0) {
        printf("The number is negative\n");
    } else if (number == 0) {
        printf("The number is zero\n");
    }

    printf("Exit programm...\n");
    return 0;
}





// #include <stdio.h>

// int main() {
//     int number;
    
//     printf("Enter the number: ");
//     scanf("%d", &number);

//     if (number>0)
//     {
//         printf("The number is positive\n");
//     }
//     else if (number<0)
//     {
//         printf("The number is negative\n");
//     }
//     else if (number ==0)
//     {
//         printf("The number is zero\n");
//     }

//     printf("Exit programm...\n");
//     return 0;
// }