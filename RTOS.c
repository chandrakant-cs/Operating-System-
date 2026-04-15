#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float C[10], T[10], U = 0, bound;

    printf("Enter number of tasks: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("Enter C%d : ", i+1);
        scanf("%f", &C[i]);
        printf("Enter T%d: ", i+1);

        scanf("%f", &T[i]);
        U += C[i] / T[i];
    }

    // Utilization
    printf("\nCPU Utilization = %.4f\n", U);

    // Bound
    bound = n * (pow(2, 1.0/n) - 1);
    printf("RMS Bound = %.4f\n", bound);

    // Check
    if(U <= bound)
        printf("Schedulable using RMS\n");
    else
        printf("Not guaranteed schedulable\n");

    return 0;
}
