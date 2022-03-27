#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void display_records();
void reset_records();
void help();
void edit_records(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char candidate[20];
     mainhomescreen:
     system("cls");
     printf("\n\t\t\t\t\tCOVID QUIZ MASTER \n");
     printf("\n\t\t\t\t\t_________________________________________________________________");
     printf("\n\t\t\t\t\tTEST YOUR KNOWLEDGE ON COVID-19 AND WIN CASH VOUCHERS!!! ");
     printf("\n\t\t\t\t\t__________________________________________________________________");
     printf("\n\t\t\t\t\t__________________________________________________________________");
     printf("\n\t\t\t\t\t > Press S -> START THE GAME ");
     printf("\n\t\t\t\t\t > Press V -> VIEW THE SCORES  ");
     printf("\n\t\t\t\t\t > Press R -> RESET SCORES ");
     printf("\n\t\t\t\t\t > press H -> HELP           ");
     printf("\n\t\t\t\t\t > press Q -> QUIT             ");
     printf("\n\t\t\t\t\t__________________________________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	display_records();
	goto mainhomescreen;
	}
    else if (choice=='H')
	{
	help();getch();
	goto mainhomescreen;
	}
	else if (choice=='R')
	{reset_records();
	getch();
	goto mainhomescreen;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tRegister your name:");
     gets(candidate);

    system("cls");
    printf("\n\t\t\t ------------------  Welcome %s to COVID QUIZ MASTER --------------------------",candidate);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded Rs.10000!");
    printf("\n    By this way you can win cash Vouchers !!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhomescreen;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
    r1=i;
    switch(r1)
		{
		case 1:
		printf("\n\nQ.How is COVID-19 passed on?");
		printf("\n\nA.Through droplets from mouth and nose\t\tB.By drinking unclean water\n\nC.By exercising\t\t\t\t\tD.All of the above");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Through droplets from mouth and nose");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nQ.Common symptoms of Covid-19");
		printf("\n\nA.A new and continuous cough\t\tB.Fever\n\nC.Tiredness\t\t\t\tD.All of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.All of the above");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nQ.Can you always tell if someone has COVID-19?");
		printf("\n\nA.No, not everyone has symptoms\t\t\t\tB.Yes, Person with COVID-19 coughs a lot\n\nC.Yes, Person with COVID-19 sneeze a lot\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.No,not everyone has symptoms");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nQ.Can washing your hands protect you from COVID-19?");
		printf("\n\nA.Yes using strong bleach\tB.Yes normal soap and water\n\nC.Yes with just water\t\tD.None of the above");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Yes normal soap and water or hand sanitizer is enough");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nQ.How many countries, areas or territories are suffering from novel coronavirus outbreak in the World?");
        printf("\n\nA.More than 50\t\tB.More than 100\n\nC.More than 150\t\tD.More than 200");
        if (toupper(getch())=='D')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is D.More than 200");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nQ.In a study, which cells are found in COVID-19 patients 'bode well' for long term immunity?");
		printf("\n\nA.P-Cell\t\tB.D-Cell\n\nC.T-Cell\t\tD.None of the above");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.T-Cell");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto starttest;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhomescreen;
	}
     starttest:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",candidate);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n\nQ1.Name the vaccine that is jointly developed by the German company BioNTech and US pharma giant Pfizer for COVID-19?");
		printf("\n\nA.BNT162\t\tB.PICOVACC\n\nC.Both A and B\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.BNT162");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nQ2.Clinical trial in which blood is transfused from recovered COVID-19 patients to a coronavirus patient who is in\n   critical condition?");
		printf("\n\nA.Plasma Therapy\t\tB.Solidarity\n\nC.Remidisvir\t\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Plasma Therapy");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nQ3.The first case of novel coronavirus was identified in .....");
		printf("\n\nA.Beijing\t\tB.Shanghai\n\nC.Wuhan\t\t\tD.None of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Wuhan");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nQ4.Which of the following diseases are related to coronavirus?");
		printf("\n\nA.MERS\t\t\tB.SARS\n\nC.Both A and B\t\tD.None of the above");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.SARS");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nQ5.How long does the novel coronavirus survive outside the body?");
		printf("\n\nA.2 Weeks\t\t\tB.A Month\n\nC.Several hours to days\t\tD.None of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Several hours to days");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nQ6.What is a safe distance to stay apart from someone who is sick?");
		printf("\n\nA.1 Foot\t\t\tB.3 Feet\n\nC.Both of the above\t\tD.None of the above");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.3 Feet");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nQ7.Which is an inactivated vaccine that it is made up of killed coronaviruses, making it safe to be injected into the body?");
		printf("\n\nA.Pfizer\t\t\tB.Moderna\n\nC.Sputnik V\t\t\tD.Covaxin");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Covaxin");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nQ8.Who is at highest risk of developing severe Covid-19 disease?");
		printf("\n\nA.Children\t\t\tB.Adults\n\nC.People above 60\t\tD.None of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.People above 60");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nQ9.A Mask on your face should cover which of the following?");
		printf("\n\nA.Nose,mouth and chin\t\t\t\tB.Mouth Only is sufficient\n\nC.Mouth and Chin should be covered\t\tD.Mask is not mandatory");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nose,mouth and chin");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nQ10.The distinguishing feature of a coronavirus is its:");
		printf("\n\nA.Shape\t\t\tB.Size\n\nC.Mobility\t\tD.Deadliness");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Shape");getch();break;goto score;}}}
	score:
    system("cls");
	score=(float)countr*1000;
	if(score>0.00 && score<10000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won Rs.%.2f",score);goto go;}

	 else if(score==10000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU HAVE WON THE GAME AND CASHBACK VOICHERS TOO!!!!!!!!!");
	    printf("\n\t\t You will get Rs. %.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_records(score,candidate);
		goto mainhomescreen;}}}

void display_records()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_records()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	f=fopen("score.txt","w+");
	fclose(f);
	sc=0;
	f=fopen("score.txt","w+");
	fprintf(f,"%s",nm);
	printf("Scores have been reset, Go ahead and set a new score now!!!");
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded Rs. 10000.");
    printf("\n    By this way you can win cash prize in INR...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}
    
void edit_records(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
