#include <stdio.h>

int dividable_3_5(int i)
{
    int a=0;
    
    if((i % 3 == 0) || (i % 5 == 0))
    {
        a=1;
    }
    else
    {
        a=0;
    }
return a;
}

/*------------------------------------------------------------*/

#include <stdio.h>

int main()
{

    float a=0;
    scanf("%f", &a);
    float b =calculate_area(a);
    printf("Give radius: Area is %.2f", b);

 return 0;
}

/*------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{

    int counter=0;
    int max=0;
    int sum=0;

    printf("Give number:");
    scanf("%d", &max);
    
    for(counter=1; counter<=max; counter++){
        
    if((counter % 3 == 0) || (counter % 5 == 0))
    {
        sum=counter+sum;
    }
  
    }
    
    printf("sum=%d", sum);
    
return 0;
}

/*------------------------------------------------------------*/

#include <stdio.h>

#define COST 5.2
#define MONEY 7.5

int main(void)
{

float cost=COST;
float money=MONEY;
float amount=0;

amount=money/cost;

printf("Apples cost %.1f eur/kg.\nIf I have %.1f eur,\n",cost, money);
printf("then I can buy %.2f kg of apples", amount);
}

/*------------------------------------------------------------*/

#include <stdio.h>
int main(void)
{

    int i=0;
    int i2=0;
    int rows=0;
    int columns=0;

    printf("Input rows: ");
    scanf("%d", &rows);
    
    printf("Input columns:\n");
    scanf("%d", &columns);
    
    for(i=1; i<=rows; i++){
        
       for(i2=1; i2<=i; i2++){
        printf("%d",i);
        
        } 
        printf("\n");
    } 
    
return 0;
}

/*------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int day;


    printf("give day number ");
    scanf("%d", &day);


    if(day == 1){
        printf("Monday");
    }
    else if(day == 2){
        printf("Tuesday");
    }
    else if(day == 3){
        printf("Wednesday");
    }
    else if(day == 4){
        printf("Thursday");
    }
    else if(day == 5){
        printf("Friday");
    }
    else if(day == 6){
        printf("Saturday");
    }
    else if(day == 7){
        printf("Sunday");
    }
    else{
        printf("Number is not a weekday number");
    }
    return 0;
}

