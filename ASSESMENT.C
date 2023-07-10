#include<stdio.h>
    int main()
{
    
        printf("\n\t\t\t\t---- WELCOME TO CAFE ----\n\n");
        printf("\nMENU CARD\n");
        int choice, qty, total=0;
        printf("\n\tPRODUCT\t\t\t\tPRICE\n\n1. PIZZA\t\t\t\t200rs.\n2. BURGER\t\t\t\t180rs.\n3. DOSA\t\t\t\t\t120rs.\n4. IDLI\t\t\t\t\t40rs.\n5. VADA PAV\t\t\t\t50rs.\n\nSELECT ANY ITEM : ");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("PIZZA SELECTED, PLEASE! Enter the Quantity : ");
            scanf("%d", &qty);
            total = qty * 200;
            printf("Total Amount For Pay : %d", total);
            break;
        case 2:
            printf("BURGER SELECTED, PLEASE! Enter the Quantity : ");
            scanf("%d", &qty);
            total = qty * 180;
            printf("Total Amount For Pay : %d", total);
            break;
        case 3:
            printf("DOSA SELECTED, PLEASE! Enter the Quantity : ");
            scanf("%d", &qty);
            total = qty * 120;
            printf("Total Amount For Pay : %d", total);
            break;
        case 4:
            printf("IDLI SELECTED! Enter the Quantity : ");
            scanf("%d", &qty);
            total = qty * 40;
            printf("Total Amount For Pay : %d", total);
            break;
        case 5:
            printf("VADA PAV SELECTED, PLEASE! Enter the Quantity : ");
            scanf("%d", &qty);
            total = qty * 50;
            printf("Total Amount For Pay : %d", total);
            break;
        
        default:
            printf("PLEASE SELECT FROM AVAILABLE ITEMS.....");
            break;
        }
    }
