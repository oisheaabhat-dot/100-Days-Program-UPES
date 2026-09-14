#include <stdio.h>

int main() 
{
    float cp, sp, amount;

    // Input Cost Price and Selling Price from user
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sp);

    // Check for Profit, Loss, or Breakeven
    if (sp > cp) 
    {
        amount = sp - cp;
        float profit_percent = (amount / cp) * 100;
        printf("\n📈 Profit incurred: %.2f\n", amount);
        printf("Percentage: %.2f%%\n", profit_percent);
    } 
    else if (cp > sp) 
    {
        amount = cp - sp;
        float loss_percent = (amount / cp) * 100;
        printf("\n📉 Loss incurred: %.2f\n", amount);
        printf("Percentage: %.2f%%\n", loss_percent);
    } 
    else 
    {
        printf("\n⚖️ No Profit, No Loss (Breakeven).\n");
    }

    return 0;
}
