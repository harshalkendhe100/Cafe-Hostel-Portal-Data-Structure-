
#include <stdio.h>
int main()
{
    int option, case1, case2, case3, case4, case5;
    
    printf("      --------WELCOME TO Cafe -------\n");

    printf("\n 1. Manager \n 2. Customer  \n 3. Cooking Staff \n 4. FAQ's \n 5. Contact Support\n");
    printf("\nEnter Your Choice Below: ");
    scanf("%d", &option);
    
    

    switch (option) 
    {
        case 1:
        
            printf("\nManager\n");
            {
        char userid[]="Harshal",password[]="Harshal@123",p[15],u[15];
            int n=1,a,b;
            printf("\nEnter USER ID and PASSWORD");
            printf("\nYou have only three chances to enter");
           
            while(n<=3)
            {
               
                printf("\nUSER ID: ");
                scanf("%s",u);
                printf("\nPASSWORD: ");
                scanf("%s",p);
                a=strcmp(u,userid);
                b=strcmp(p,password);
                if(a==0&&b==0)
                {
                    printf("\nYou have logged in successfully.");
                    break;
                }
                else
                {
                    printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
                }
               
                n++;
            }
            if(n==4)
                printf("\nYou can't log in.");
            }  
            printf("\n1. Management \n 2.Staff Queries \n 3. Salary\n");
            printf("\nEnter Your Choice Below: ");
            scanf("%d", &case1);
            
            if (case1==1)
            {
                printf("\nYour have selected Management of Cafe");
            } 
            else if (case1==2) 
            {
                printf("\nYou have selected Staff Queries");
            } 
            else if (case1==3) 
            {
                printf("\nYou have selected Staff Salary");
            } 
            else 
            {
                printf("\nEnetr a valid choice");
            }
        
            break;
            
        case 2:
            printf("\nCustomer:");
             {
            char userid[]="Harshal",password[]="Harshal@123",p[15],u[15];
            int n=1,a,b;
            printf("\nEnter USER ID and PASSWORD");
            printf("\nYou have only three chances to enter");
           
            while(n<=3)
            {
               
                printf("\nUSER ID: ");
                scanf("%s",u);
                printf("\nPASSWORD: ");
                scanf("%s",p);
                a=strcmp(u,userid);
                b=strcmp(p,password);
                if(a==0&&b==0)
                {
                    printf("\nYou have logged in successfully.");
                    break;
                }
                else
                {
                    printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
                }
               
                n++;
            }
            if(n==4)
                printf("\nYou can't log in.");
            }
            printf("\n1. North Indian \n2. South Indian \n3. Fast Food \n4. Continental \n5. Dessert");
            printf("\nEnter Food Choices Given Below: ");
            scanf("%d", &case2);
            
            if (case2==1) 
            {
                printf("\nYou have selected North Indian Food");
            } 
            else if (case2==2) 
            {
                printf("\nYou have selected South Indian Food");
            } 
            else if (case2==3) 
            {
                printf("\nYou have selected Fast Food");
            }
            else if (case2==4) 
            {
                printf("\nYou have selected Continental");
            }
            else if (case2==5) 
            {
                printf("\nYou have selected Dessert");
            } 
              
            else 
            {
                printf("\nEnter a valid choice");
            }
           

            break;
        
        case 3:
            printf("\nCooking Status");
             {
            char userid[]="Harshal",password[]="Harshal@123",p[15],u[15];
            int n=1,a,b;
            printf("\nEnter USER ID and PASSWORD");
            printf("\nYou have only three chances to enter");
           
            while(n<=3)
            {
               
                printf("\nUSER ID: ");
                scanf("%s",u);
                printf("\nPASSWORD: ");
                scanf("%s",p);
                a=strcmp(u,userid);
                b=strcmp(p,password);
                if(a==0&&b==0)
                {
                    printf("\nYou have logged in successfully.");
                    break;
                }
                else
                {
                    printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
                }
               
                n++;
            }
            if(n==4)
                printf("\nYou can't log in.");
            }
            printf("\n1. Order status \n2. Cancelation Status\n");
            printf("\nEnter Your Choice Below: ");
            scanf("%d", &case3);
            
            if (case3==1) 
            {
                printf("\nYour Food Has Ordered");
            } 
            else if (case3==2) 
            {
                printf("\nYou have selected Cancelation Status");
            } 
            else 
            {
                printf("\nEnetr a valid choice");
            }
            
            break;
            
        case 4:
            printf("\nFAQ's");
            printf("\n1. Ask questions\n");
            printf("\nEnter Your Question Below: ");
            scanf("%d", &case4);
            printf("\nThank You, Your question has been submitted !");


            break;
            
        case 5:
            printf("\nContact Support");
            printf("\n1. Customer care \n2. Chat online\n");
            printf("\nEnter Your Choice Below: ");
            scanf("%d", &case5);
            
            if (case5==1) 
            {
                printf("Your have selected Customer care service");
            } 
            else if (case5==2) 
            {
                printf("\nYou have selected Online chat service");
            } 
            else 
            {
                printf("\nEnter a valid choice");
            }
            break;
    }
    return 0;
}
