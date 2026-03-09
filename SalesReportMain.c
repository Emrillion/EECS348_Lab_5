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

    // Print the sales report
    printf("Monthly Sales Report for 2024\n");
    printf("%-12sSales\n", "Month");
    for (int i = 0; i < 12; i++) {
        printf("%-12s%.2f\n", months[i], monthlySales[i]);
    }

    // Calculate and print the sales summary
    double minSales = monthlySales[0];
    double maxSales = monthlySales[0];
    double avgSales = 0.0;
    int minMonth = 0;
    int maxMonth = 0;
    for (int i = 0; i < 12; i++) {
        if (monthlySales[i] < minSales) {
            minSales = monthlySales[i];
            minMonth = i;
        }
        if (monthlySales[i] > maxSales) {
            maxSales = monthlySales[i];
            maxMonth = i;
        }
        avgSales += monthlySales[i];
    }
    avgSales /= 12;
    printf("\nSales Summary Report:\n");
    printf("Minimum Sales: %.2f (%s)\n", minSales, months[minMonth]);
    printf("Maximum Sales: %.2f (%s)\n", maxSales, months[maxMonth]);
    printf("Average Sales: %.2f\n", avgSales);

    return 0;
}