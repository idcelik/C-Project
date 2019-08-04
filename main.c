#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void maths();
void diamond();
void reverse();
void about();
int main()
{
    int selection;


      printf("\n________________________________________\n");
      printf("\n0. Exit.\n");
      printf("1. Solving the mathematical equation\n");
      printf("2. Drawing the diamond shape\n");
      printf("3. Printing keybord inputs in reverse\n");
      printf("4. Finding the second  smallest element\n");
      printf("5. Distinct random number  generation\n");
      printf("6. About\n");

      printf("\nEnter your selection: "); scanf("%d",&selection);


      switch(selection)

      {
           case 0 : exitt(); break;

           case 1 : maths(); break;

           case 2 : diamond() ; return main();

           case 3 :  printf("Enter the sentence: "); fflush(stdin); reverse(); return main();

           case 4 : secondsmallest(); return main();

           case 5 : randomArray(); break;

           case 6 : about() ; break;
      }


        return 0;
}


void exitt()
{
    char answer;
    char Y,N;
    printf("Y/N :?\t\a");
    scanf("%c",&answer);
answer=getchar();


    if(answer=='Y' || answer=='y')
    {
     printf("Exit.");
     return 0;
    }
    else if( answer=='N' || answer=='n')
{
    printf("");
    return main();
}

    else
    {


    printf("\nWrong answer, please again answer (only Y/N):\n");
    return exitt();
 }




    }



void maths()
{
int R,j,S,N;
float k,result;
float total=1;
float total2=0;
 printf("");
 printf("Enter the R: "); scanf("%d",&R);
 printf("Enter the S: "); scanf("%d",&S);
 printf("Enter the N: "); scanf("%d",&N);
 for(k=1; k<=R; k++)
    total *= (3*(k*k*k)+5)/(k*k);

 //printf("Your Result : %d",total);

for(j=1; j<=S; j++)
    total2 += (sqrt(3*(j*j*j)+j+2))/(2*j);

     result = N * total/total2;

      printf("Your Result: %.2f",result);
return main();
}

void diamond()
{

int i,m,n,dnumber; // dnumber : diamong number  i= first counter
printf("Please Write number for drawing the diamond shape : ");
scanf("%d",&dnumber);
for(i=1; i<=(dnumber+1)/2;)
{
for(m=1; (dnumber+1)/2-i+1>=m; m++)  // m= second counter  , n= t
printf(" ");
for(n=1; n<2*i; n++)
printf("*");
printf("\n");
i++;
}
if(2*i-1>=dnumber)
{
for(i=(dnumber+1)/2-1; i>=1; i--)
{
for(m=1; (dnumber+1)/2-i+1>=m; m++)
printf(" ");
for(n=1; n<2*i; n++)
printf("*");
printf("\n");
}
}

getch();
return main();
}



void  reverse()

{

 char sentence;


 sentence=getchar();

 if(sentence != '\n')
{
 reverse();
 printf("%c",sentence);
}


}




//4

void secondsmallest()
{

	int i, j, counter = 0, elements, size = 0;
	int array[50];

	printf("Enter the elements of the array (for exit press -1) :");


	for (i = 0; i < 50; i++)
	{
		scanf("%d", &elements);
		array[i] = elements;

		if (elements != -1)
			size++;
		else
			break;
	}


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] > array[j])
				counter++;
		}
		if (counter == 1)
		{
			printf("\nsecond=%d", array[i]);
			break;
		}
		counter = 0;
	}


getchar();

  }





//5
void randomArray()
{

	int array[20] = { 0 };
	int i, j, check;

	srand(time(NULL));


	for (i = 0;i < 20; i++)
	{
		check = rand() % 20 + 1;
		for (j = 0;j < 20; j++)
		{
			if (check == array[j])
			{
				check = rand() % 20 + 1;
				j = 0;
				continue;
			}
		}
		array[i] = check;
	}

	for (i = 0;i < 20;i++)
	{
		printf("%d ", array[i]);
	}
return main();
}

// 6
void about()
{
    printf("________________________________________\n");
    printf("\n\nName : Ibrahim Deniz\n\n");
    printf("Surname: Celik\n\n");
    printf("Department: Computer Engineer\n\n");

   return main();
}
