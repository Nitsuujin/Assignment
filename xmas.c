#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int days;

    printf("Input no of day/s (1-12): ");
    scanf("%d", &days);

    if (days == 1) {
        printf("On the first day of Christmas my true love sent to me:\n"
               "A partridge in a pear tree.\n");
    }
    else if (days == 2) {
        printf("On the second day of Christmas my true love sent to me:\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 3) {
        printf("On the third day of Christmas my true love sent to me:\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 4) {
        printf("On the fourth day of Christmas my true love sent to me:\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 5) {
        printf("On the fifth day of Christmas my true love sent to me:\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 6) {
        printf("On the sixth day of Christmas my true love sent to me:\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 7) {
        printf("On the seventh day of Christmas my true love sent to me:\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 8) {
        printf("On the eighth day of Christmas my true love sent to me:\n"
               "Eight maids a-milking,\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 9) {
        printf("On the ninth day of Christmas my true love sent to me:\n"
               "Nine ladies dancing,\n"
               "Eight maids a-milking,\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 10) {
        printf("On the tenth day of Christmas my true love sent to me:\n"
               "Ten lords a-leaping,\n"
               "Nine ladies dancing,\n"
               "Eight maids a-milking,\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 11) {
        printf("On the eleventh day of Christmas my true love sent to me:\n"
               "Eleven pipers piping,\n"
               "Ten lords a-leaping,\n"
               "Nine ladies dancing,\n"
               "Eight maids a-milking,\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else if (days == 12) {
        printf("On the twelfth day of Christmas my true love sent to me:\n"
               "Twelve drummers drumming,\n"
               "Eleven pipers piping,\n"
               "Ten lords a-leaping,\n"
               "Nine ladies dancing,\n"
               "Eight maids a-milking,\n"
               "Seven swans a-swimming,\n"
               "Six geese a-laying,\n"
               "Five golden rings,\n"
               "Four calling birds,\n"
               "Three French hens,\n"
               "Two turtle doves,\n"
               "And a partridge in a pear tree.\n");
    }
    else {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
    }
    
    return 0;
}
