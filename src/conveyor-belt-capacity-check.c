#include <stdio.h>

int motor_capacity = 12;

int main() {
    int motor_count, total_package_weight, total_motor_capacity;

    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motor_count);

    total_motor_capacity = motor_count * motor_capacity;

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &total_package_weight);

    if (total_package_weight <= total_motor_capacity ) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
}
