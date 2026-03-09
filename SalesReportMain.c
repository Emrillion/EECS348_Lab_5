#include <stdio.h>

int main() {
    double monthlySales[] = {
        23458.01,
        40112.00,
        56011.85,
        37820.88,
        37904.67,
        60200.22,
        72400.31,
        56210.89,
        67230.84,
        68233.12,
        80950.34,
        95225.22
    };

    char *months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("Monthly Sales Report for 2024\n");
    printf("%-12sSales\n", "Month");

    for (int i = 0; i < 12; i++) {
        printf("%-12s%.2f\n", months[i], monthlySales[i]);
    }

    return 0;
}