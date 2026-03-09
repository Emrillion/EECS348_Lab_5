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
    // Print the sales summary
    printf("\nSales Summary Report:\n");
    printf("Minimum Sales: %.2f (%s)\n", minSales, months[minMonth]);
    printf("Maximum Sales: %.2f (%s)\n", maxSales, months[maxMonth]);
    printf("Average Sales: %.2f\n", avgSales);

    // Calculate the six month moving average
    printf("\nSix Month Moving Average:\n");
    for (int i = 0; i <= 6; i++) {
        double movingAvg = 0.0;
        for (int j = i; j < i + 6; j++) {
            movingAvg += monthlySales[j];
        }
        movingAvg /= 6;
        printf("%-12s- %-12s %10.2f\n", months[i], months[i + 5], movingAvg);
    }

    // Calculate the sales report
    printf("\nSales Report (Highest to Lowest):\n");
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (monthlySales[i] < monthlySales[j]) {
                double tempSales = monthlySales[i];
                monthlySales[i] = monthlySales[j];
                monthlySales[j] = tempSales;

                char *tempMonth = months[i];
                months[i] = months[j];
                months[j] = tempMonth;
            }
        }
    }

    // Print the sorted sales report
    printf("%-12sSales\n", "Month");
    for (int i = 0; i < 12; i++) {
        printf("%-12s%.2f\n", months[i], monthlySales[i]);
    }

    return 0;
}