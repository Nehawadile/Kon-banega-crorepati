#include<stdio.h>
void main()
{
int i,a[10],n=0;
clrscr();
printf("\n............WELCOME TO THE GAME............\n..........KAUN BANEGA CROREPATHI.......... \n....it contains 10 Questions each carries 10 lakhs....");
for(i=1;i<=10;i++)
{
n=0;
switch(i)
{
case 1:
printf("\n\n1)In What Direction Muslium Pray\n  1.East \t\t\t2.South \n3.Nearby Mosque's Direction \t4.Mecca's Direction\n");
scanf("\n%d",&n);
if(n==4)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000\n Your Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 2:
printf("\n\n2)Who Is The Mother Of RAMA In Ramayana\n 1.Kousalya \t2.Kaikai \n3.Sumitra \t4.Mantra\n");
scanf("\n%d",&n);
if(n==1)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000 \nYour Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 3:
printf("\n\n3)What is The Symbol Of Nazis(Army of Great Hitler)\n 1.Cross \t2.Skull and Bones \n3.Owl \t\t4.Swastika\n");
scanf("%d",&n);
if(n==4)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000\n Your Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 4:
printf("\n\n4)Who Among These is Not An Railway Minister\n 1.Mamtha Banerjee \t2.Lal Bahadur Shastri \n3.Geetha Mukerjee \t4.George frenandis \n");
scanf("\n%d",&n);
if(n==3)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000 \nYour Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time \nYou Won Rs.%d000000",i-1);
i=11;
}
break;
case 5:
printf("\n\n5)Who Correctly Answered To Yaksha's Question\n 1.Drona \t2.Abimanyu \n3.Yudishtrita \t4.Arjuna\n");
scanf("\n%d",&n);
if(n==3)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000\n Your Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 6:
printf("\n\n6)Who Reserve Bank of INDIA\n 1.Finance Minister \t2.Commissioner \n3.Chief bank Maneger \t4.Governor\n");
scanf("\n%d",&n);
if(n==4)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000 \nYour Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 7:
printf("\n\n7)which Of These Animals Laughs\n 1.Monkey \t2.Tiger \n3.Giraffe \t4.Hyna\n");
scanf("\n%d",&n);
if(n==4)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000 \nYour Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
case 8:
printf("\n\n8)Which Of The System Of Governance In China\n 1.Communisms \t2.Communalism \n3.Monarchy \t4.Democratic\n");
scanf("\n%d",&n);
if(n==1)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000\n Your Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time \nYou Won Rs.%d000000",i-1);
i=11;
}
break;
case 9:
printf("\n\n9)How Many Rings Does Olympic Symbol Have \n1.3 \t2.2 \n3.6 \t4.5\n");
scanf("\n%d",&n);
if(n==4)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000 \nYour Next Question is",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time \nYou Won Rs.%d000000",i-1);
i=11;
}
break;
case 10:
printf("\n\n10)Who Patronised Kalidas\n 1.Akbar \t\t2.Chandra Guptha \n3.Vikrama Aditya \t4.Krishna Devaraya\n");
scanf("\n%d",&n);
if(n==3)
{
printf("\nYou Have Entered The Correct Answer\n Now You Won Rs.%d000000\n **..........CONGRATULATION..........**\n *...You Have Become Crorepathi Of The Week... *",i);
}
else
{
printf("\nYou Have Entered The Wrong Answer Better Luck Next Time\n You Won Rs.%d000000",i-1);
i=11;
}
break;
default :
break ;
}
}
getch();
}
