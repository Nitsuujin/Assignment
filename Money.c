#include <stdio.h>

int main() {
    int CASH = 0, X1000 = 0, Y1000 = 0, X500 = 0, Y500 = 0, X100 = 0, Y100 = 0;
    int X50 = 0, Y50 = 0, X20 = 0, Y20 = 0, X10 = 0, Y10 = 0, X5 = 0, Y5 = 0, X1 = 0;

    printf("Cash on hand: ");
    scanf("%d", &CASH);

    X1000 = CASH / 1000;
    Y1000 = X1000 * 1000;
    CASH = CASH - Y1000;

    X500 = CASH / 500;
    Y500 = X500 * 500;
    CASH = CASH - Y500;

    X100 = CASH / 100;
    Y100 = X100 * 100;
    CASH = CASH - Y100;

    X50 = CASH / 50;
    Y50 = X50 * 50;
    CASH = CASH - Y50;

    X20 = CASH / 20;
    Y20 = X20 * 20;
    CASH = CASH - Y20;

    X10 = CASH / 10;
    Y10 = X10 * 10;
    CASH = CASH - Y10;

    X5 = CASH / 5;
    Y5 = X5 * 5;
    CASH = CASH - Y5;

    X1 = CASH;

    printf("Cash on hand: %d\n", CASH);
    printf("Denominations:\n");
    printf("1000 - %d\n", X1000);
    printf("500 - %d\n", X500);
    printf("100 - %d\n", X100);
    printf("50 - %d\n", X50);
    printf("20 - %d\n", X20);
    printf("10 - %d\n", X10);
    printf("5 - %d\n", X5);
    printf("1 - %d\n", X1);

    return 0;
}
