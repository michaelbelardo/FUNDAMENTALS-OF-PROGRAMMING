#include <stdio.h>
#include <ctype.h>

int main() {
    char again;
    
    do {
        float veg_qty = 0, fruit_qty = 0, fruit_price = 0;
        int milk_qty = 0, soap_qty = 0, shampoo_qty = 0;
        float total = 0;
        float payment, change;
        int choice;
        
        printf("\n==================================================\n");
        printf("         WHAT DO YOU WANT TO PURCHASE?\n");
        printf("==================================================\n");
        printf("1. Vegetable (P54.5/kg)\n");
        printf("2. Fruits (P120-150/kg)\n");
        printf("3. Milk (P90/pack)\n");
        printf("4. Soap (P29.45/bar)\n");
        printf("5. Shampoo and Conditioner (P140/bottle)\n");
        printf("==================================================\n");
        
        // Input quantities
        printf("\nVegetable (P54.5/kg) = ");
        scanf("%f", &veg_qty);
        
        printf("Fruits (P120-150/kg) = ");
        scanf("%f", &fruit_qty);
        if (fruit_qty > 0) {
            printf("  Enter price per kg (120-150): P");
            scanf("%f", &fruit_price);
            if (fruit_price < 120 || fruit_price > 150) {
                printf("  Invalid price! Setting to P135\n");
                fruit_price = 135;
            }
        }
        
        printf("Milk (P90/pack) = ");
        scanf("%d", &milk_qty);
        
        printf("Soap (P29.45/bar) = ");
        scanf("%d", &soap_qty);
        
        printf("Shampoo and Conditioner (P140/bottle) = ");
        scanf("%d", &shampoo_qty);
        
        // Calculate total
        total = (veg_qty * 54.5) + (fruit_qty * fruit_price) + 
                (milk_qty * 90) + (soap_qty * 29.45) + (shampoo_qty * 140);
        
        printf("\n==================================================\n");
        printf("Total purchase: P%.2f\n", total);
        printf("==================================================\n");
        
        // Payment
        printf("\nEnter payment amount: P");
        scanf("%f", &payment);
        
        change = payment - total;
        printf("Your change: P%.2f\n", change);
        
        // Ask to continue
        printf("\n==================================================\n");
        printf("Do you want to purchase again (Y/N)? ");
        scanf(" %c", &again);
        again = toupper(again);
        
    } while (again == 'Y');
    
    printf("\nThank you for shopping! Goodbye!\n");
    
    return 0;
}