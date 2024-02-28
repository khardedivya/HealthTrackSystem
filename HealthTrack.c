#include <stdio.h>

// Structure to represent vital signs
struct VitalSigns {
    float heart_rate;
    float blood_pressure;
    float temperature;
};

// Function to record vital signs
void record_vital_signs(struct VitalSigns *vital_signs) {
    printf("Enter heart rate: ");
    scanf("%f", &vital_signs->heart_rate);

    printf("Enter blood pressure: ");
    scanf("%f", &vital_signs->blood_pressure);

    printf("Enter temperature: ");
    scanf("%f", &vital_signs->temperature);
}

// Function to display vital signs
void display_vital_signs(struct VitalSigns vital_signs) {
    printf("\nVital Signs:\n");
    printf("Heart Rate: %.2f bpm\n", vital_signs.heart_rate);
    printf("Blood Pressure: %.2f mmHg\n", vital_signs.blood_pressure);
    printf("Temperature: %.2f °C\n", vital_signs.temperature);
}

int main() {
    struct VitalSigns user_vital_signs;

    // Record vital signs
    printf("=== Health Monitor ===\n");
    record_vital_signs(&user_vital_signs);

    // Display vital signs
    display_vital_signs(user_vital_signs);

    return 0;
}