# include <stdio.h>

typedef int i32;
typedef float f32;

/**
 * @brief Add 2 Numbers
 *
 * @param n1:int
 * @param n2:int 
 * @return:int (n1+n2)
 */
i32 addition(i32 n1, i32 n2) {
    i32 result = (n1 + n2);
    return result;
}

/**
 * @brief Subtract 2 Numbers
 *
 * @param n1:int
 * @param n2:int 
 * @return:int (n1-n2)
 */
i32 subtraction(i32 n1, i32 n2) {
    i32 result = (n1 - n2);
    return result;
}

/**
 * @brief Multiply 2 Numbers
 *
 * @param n1:int
 * @param n2:int 
 * @return:int (n1*n2)
 */
i32 multiplication(i32 n1, i32 n2) {
    i32 result = (n1 * n2);
    return result;
}

/**
 * @brief Divide 2 Numbers
 *
 * @param n1:float
 * @param n2:float
 * @return:float (n1/n2)
 */
f32 division(i32 n1, i32 n2) {
    f32 result = ((f32)n1 / (f32)n2);
    return result;
}

/**
 * @brief Divide 2 Numbers
 *
 * @param n1:int
 * @param n2:int
 * @return:int (n1%n2)
 */
i32 reminder(i32 n1, i32 n2) {
    i32 result = (n1 % n2);
    return result;
}

int main(int argc, char const* argv[]) {

    do {

    printf("\t********** Calculator **********\n");

    int input_1;
    int input_2;
    char operation;

    printf("\t********************************\n");
    printf("\tEnter the Number 1 : ");
    scanf("%d", &input_1);
    printf("\n");
    printf("\tEnter the Number 2 : ");
    scanf("%d", &input_2);
    printf("\t********************************\n");
    printf("\n");
    printf("\n");

    printf("\t********************************\n");
    printf("\tFor Addition : ' + '\n");
    printf("\tFor Subtraction : ' - '\n");
    printf("\tFor Multiplication : ' * '\n");
    printf("\tFor Division : ' / '\n");
    printf("\tFor Reminder : ' %% '\n");
    printf("\tFor All : ' a '\n");
    printf("\tFor Quit : ' q '\n");
    printf("\tEnter the Operation : ");
    scanf(" %c", &operation);
    printf("\t********************************\n");
    printf("\n");
    printf("\n");

    if (operation == 'q') 
        break;

    switch (operation) {
        case '+':
            printf("\t%d + %d = %d\n",input_1, input_2, addition(input_1, input_2));
            break;
        case '-':
            printf("\t%d - %d = %d\n",input_1, input_2, subtraction(input_1, input_2));
            break;
        case '*':
            printf("\t%d * %d = %d\n",input_1, input_2, multiplication(input_1, input_2));
            break;
        case '/':
            printf("\t%d / %d = %f\n",input_1, input_2, division(input_1, input_2));
            break;
        case '%':
            printf("\t%d %% %d = %d\n",input_1, input_2, reminder(input_1, input_2));
            break;
        case 'a':
            printf("\t%d + %d = %d\n",input_1, input_2, addition(input_1, input_2));
            printf("\t%d - %d = %d\n",input_1, input_2, subtraction(input_1, input_2));
            printf("\t%d * %d = %d\n",input_1, input_2, multiplication(input_1, input_2));
            printf("\t%d / %d = %f\n",input_1, input_2, division(input_1, input_2));
            printf("\t%d %% %d = %d\n",input_1, input_2, reminder(input_1, input_2));
            break;
    }

    printf("\n");
    printf("\t********* THANKS FOR USING!  *************\n");
    printf("\n");

} while (1);

    return 0;
}
