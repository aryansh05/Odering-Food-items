//Ordering food items and getting the total bill to be  paid
#include<stdio.h>

int main() 
{ 
  //displaying the menu and the prices of the items on demand of the user
  printf("What would you like to have from the following:\n");
  printf("B. Burger\nF. French Fries\nP. Pizza\nS. Sandwiches\n");
  
  char a;
  printf("You want: \n");
  scanf("%c",&a);
  switch(a){
    case 'B' : 
    printf("Burger = Rs 200\n");
    break;
     case 'F' : 
    printf("French Fries = Rs 50\n");
    break;
     case 'P' : 
    printf("Pizza = Rs 500\n");
    break;
     case 'S' : 
    printf("Sandwiches = Rs 150\n");
    break;
     default : 
    printf("Not Available\n");
    break;
  }
  char b;
  printf("You want: \n");
  scanf("%c",&b); 
  switch(b){
    case 'B' : 
    printf("Burger = Rs 200\n");
    break;
     case 'F' : 
    printf("French Fries = Rs 50\n");
    break;
     case 'P' : 
    printf("Pizza = Rs 500\n");
    break;
     case 'S' : 
    printf("Sandwiches = Rs 150\n");
    break;
     default : 
    printf("Not Available\n");
    break;
  }
  char c;
  printf("You want: \n");
  scanf("%c",&c);
  switch(c){
    case 'B' : 
    printf("Burger = Rs 200\n");
    break;
     case 'F' : 
    printf("French Fries = Rs 50\n");
    break;
     case 'P' : 
    printf("Pizza = Rs 500\n");
    break;
     case 'S' : 
    printf("Sandwiches = Rs 150\n");
    break;
     default : 
    printf("Not Available\n");
    break;
  }
  char d;
  printf("You want: \n");
  scanf("%c",&d);
  switch(d){
    case 'B' : 
    printf("Burger = Rs 200\n");
    break;
     case 'F' : 
    printf("French Fries = Rs 50\n");
    break;
     case 'P' : 
    printf("Pizza = Rs 500\n");
    break;
     case 'S' : 
    printf("Sandwiches = Rs 150\n");
    break;
     default : 
    printf("Not Available\n");
    break;
  }
//Taking the input quantity and telling individual item charges
  int e,f,g,h,i;
  int x,y,z,w,n;
  printf("Enter  the Burger Quantity: \n");
  scanf("%d",&e);
  printf("%d * 200 = %d",e,(e*200));
  x = e*200;
  printf("\nCharges for burger: %d",x);

  printf("\nEnter  the French Fries Quantity: \n");
  scanf("%d",&f);
  printf("%d * 50 = %d",f,(f*50));
  y = f*50;
  printf("\nCharges for French fries: %d",y);

  printf("\nEnter  the Pizza Quantity: \n");
  scanf("%d",&g);
  printf("%d * 500 = %d",g,(g*500));
  z = g*500;
  printf("\nCharges for Pizza: %d",z);

  printf("\nEnter  the Sandwiches Quantity: \n");
  scanf("%d",&h);
  printf("%d * 150 = %d",h,(h*150));
  w = h*150;
  printf("\nCharges for Sandwiches: %d",w);
  //Calculating the Total charges
  n = x+y+z+w;
  printf("\n\nTotal Bill: %d",n);
  //Putting Dicount
  printf("\n\nGiving 5 percent dicount on offers\n");
  float discount,Bill;
  discount = n*0.05;
  printf("\nDicounted Money: %f",discount);
  //Getting the Discounted money
  Bill = n-discount;
  printf("\nTotal Dicounted Bill to be paid: %f",Bill);
  //Saying Thank you to user
  printf("\n\nTHANK YOU EATING");

  return 0;
}