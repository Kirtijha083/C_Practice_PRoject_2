#include <stdio.h>
#include <math.h> //power fun inside this fun

double division(double, double); // function for divide...created for handle error...//in this function...input 2 double argument and also return double value
double modulus(int, int);           // ye dono fun isly ki yadi denomenator me zero aaye to..handle error.....bcz modulo integer hi leta and return krta hai

void print_menu(); // function(or ab sara menu isme add kr denge ...soo our main fun will more small)

int main()
{
    int choice;
    double first, second, result;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7){
            break;
        }

        if (choice < 1 || choice > 7){
            fprintf(stderr, "Invalid menu choice!");
            continue;
        }

        printf("\n Please enter the first number: ");
        scanf("%lf", &first); // double = lf, float = f

        printf("Now, enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:
            result = first + second; // add
            break;

        case 2:
            result = first - second; // subtract
            break;

        case 3:
            result = first * second; // multiply
            break;

        case 4:
            result = division(first, second); // call division function with first and second as argument
            break;

        case 5:
            // result = (int)first % (int)second; // modulus.........ignore decimal number....convert it in integer then find modulo
            result = modulus(first, second);
            break;

        case 6:
            result = pow(first, second); // power
            break;
        }

        if (!isnan(result)){
            printf("\n Result of operation is: %.2f", result); // result tbhi nhi show hoga jb nan value hoga to
        }
    };
    return 0;
}

double division(double a, double b){
    if (b == 0){
        fprintf(stderr, "Invalid Argument for Division!"); // error me fprintf ka use krte h or standard err print krte h
        return NAN;        // not a number
    }
    else{
        return a / b;
    }
}

double modulus(int a, int b){
    if (b == 0){
        fprintf(stderr, "Invalid Argument for Modulus!");
        return NAN;
    }
    else{
        return a % b;
    }
}

void print_menu() {

    printf("\n\n------------------------------------");
    printf("\nWelcome to simple Calculator!\n");
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