#include <stdio.h>

void print_menu(); // function(or ab sara menu isme add kr denge ...soo our main fun will more small)

int main()
{
    int choice;
    double first, second, result;

    while(1) {
        print_menu();
        scanf("%d", &choice);
if( choice == 7){
    break;
}
        printf("\n Please enter the first number: ");
        scanf("%lf", &first); //double = lf, float = f

        printf("Now, enter the second number: ");
        scanf("%lf", &second);
    };
    return 0;
}

void print_menu() {

    printf("\n Welcome to simple Calculator!");
    printf("\n Choose one of the following options: ");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");

    printf("\n Now enter your choice:");
}