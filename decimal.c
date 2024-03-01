#include <stdio.h>

int main() {
    int num, i, j, choice, t;
    
    do {
        // Input decimal number
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        // Input conversion choice
        printf("Choose conversion:\n");
        printf("1. Decimal to Binary\n");
        printf("2. Decimal to Octal\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Decimal to Binary
                printf("Binary equivalent: ");
                {
                    int binary[32];
                    int i = 0;

                    if (num == 0) {
                        printf("0\n");
                        break;
                    }

                    while (num > 0) {
                        binary[i] = num % 2;
                        num = num / 2;
                        i++;
                    }

                    for (j = i - 1; j >= 0; j--) {
                        printf("%d", binary[j]);
                    }
                    printf("\n");
                }
                break;

            case 2: // Decimal to Octal
                printf("Octal equivalent: ");
                {
                    int octal[32];
                    i = 0;

                    while (num != 0) {
                        octal[i] = num % 8;
                        num = num / 8;
                        i++;
                    }

                    for  (j = i - 1; j >= 0; j--) {
                        printf("%d", octal[j]);
                    }
                    printf("\n");
                }
                break;

            case 3: // Decimal to Hexadecimal
                printf("Hexadecimal equivalent: ");
                {
                    int hexadecimal[32];
                    int i = 0;

                    while (num != 0) {
                        hexadecimal[i] = num % 16;
                        num = num / 16;
                        i++;
                    }

                    for (j = i - 1; j >= 0; j--) {
                        if (hexadecimal[j] < 10)
                            printf("%d", hexadecimal[j]);
                        else
                            printf("%c", hexadecimal[j] + 55);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("Do you want to continue converting the same number? (1 for Yes, 0 for No): ");
        scanf("%d", &t);
    } while (t == 1);

    return 0;
}

