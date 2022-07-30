#include<stdio.h>
int totalcost[100];
void employee();
void customer();
float bill(int );
void login();
void previousrec();
int k,o,n,i,f;
int count=0,i=0;
struct canteen
{
	int id;
	char item[50];
	int price;
	int nop;
}s;
main()
{
	printf("\n\n\t=========================================================\n");
    printf("\t      -WELCOME TO  CANTEEN MANAGEMENT SYSTEM-\n");
    printf("\t==========================================================");
	int w,pwd,i,d,l;
	printf("\n\n\t1.EMPLOYEE\n\n\t2.CUSTOMER");
	printf("\n\n\tSELECT YOUR CHOICE : ");
	scanf("%d",&w);
	if(w==1)
	{
		employee();
	}
	else
	{
		customer();
	}
}
void employee()
{
	int l;
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	FILE *fp4;
	int z,n,r;
	login();
	do
	{
	printf("\n\n\t=========================================================\n");
    printf("\t   -ADDING ITEMS TO THE STOCK AND VEIWING PREVIOUS BILLS-\n");
    printf("\t==============================================================");
	printf("\n\n\t1.TO ENTER NEW ITEMS IN THE STOCK\n\n\t2.VIEW PREVIOUS BILLS");
	scanf("%d",&l);
	switch(l)
	{
		printf("\n\n\t====================================\n");
   		printf("\t   -ADDING ITEMS TO THE STOCK-\n");
    	printf("\t====================================");
    	do
	  {
		case 1:
		printf("\n\n\t1.ENTER TIFFINS\n\n\t2.ENTER MEALS\n\n\t3.ENTER SNACKS\n\n\t4.ENTER DRINKS");
		scanf("%d",&z);
		switch(z)
		{
			case 1:
			fp1=fopen("C:/Users/DRUVA KUMAR/Desktop/dntiffins.txt","a");
			do{
			printf("\n\n\tENTER ITEM NUMBER : ");
			fscanf(stdin,"%d",&s.id);
			fprintf(fp1,"\n%d",s.id);
			printf("\n\tENTER ITEM NAME : ");
			fscanf(stdin,"%s",s.item);
			fprintf(fp1," %s",s.item);
			printf("\n\tENTER ITEM PRICE : ");
			fscanf(stdin,"%d",&s.price);
			fprintf(fp1," %d",s.price);
			printf("\n\tENTER NUMBER OF PLATES : ");
			fscanf(stdin,"%d",&s.nop);
			fprintf(fp1," %d",s.nop);
			printf("\n\tenter 22 to enter new tiffin item : ");
			scanf("%d",&k);
			}
			while(k==22);
			fclose(fp1);
			break;
			case 2:	
			fp2=fopen("C:/Users/DRUVA KUMAR/Desktop/dnmeals.txt","a");
			do{
			printf("\n\n\tENTER ITEM NUMBER : ");
			fscanf(stdin,"%d",&s.id);
			fprintf(fp2,"\n%d",s.id);
			printf("\n\tENTER ITEM NAME : ");
			fscanf(stdin,"%s",s.item);
			fprintf(fp2," %s",s.item);
			printf("\n\tENTER ITEM PRICE : ");
			fscanf(stdin,"%d",&s.price);
			fprintf(fp2," %d",s.price);
			printf("\n\tENTER NUMBER OF PLATES :");
			fscanf(stdin,"%d",&s.nop);
			fprintf(fp2," %d",s.nop);
			printf("\n\tenter 22 to enter new meals item : ");
			scanf("%d",&k);
			}
			while(k==22);
			fclose(fp2);
			break;
			case 3:
			fp3=fopen("C:/Users/DRUVA KUMAR/Desktop/dnsnacks.txt","a");
			do{
			printf("\n\n\tENTER ITEM NUMBER : ");
			fscanf(stdin,"%d",&s.id);
			fprintf(fp3,"\n%d",s.id);
			printf("\n\tENTER ITEM NAME : ");
			fscanf(stdin,"%s",s.item);
			fprintf(fp3," %s",s.item);
			printf("\n\tENTER ITEM PRICE : ");
			fscanf(stdin,"%d",&s.price);
			fprintf(fp3," %d",s.price);
			printf("\n\tENTER NUMBER OF PLATES : ");
			fscanf(stdin,"%d",&s.nop);
			fprintf(fp3," %d",s.nop);
			printf("\n\tenter 22 to enter new snack item : ");
			scanf("%d",&k);
			}
			while(k==22);
			fclose(fp3);
			break;
			case 4:
			fp4=fopen("C:/Users/DRUVA KUMAR/Desktop/dndrinks.txt","a");
			do{
			printf("\n\n\tENTER ITEM NUMBER : ");
			fscanf(stdin,"%d",&s.id);
			fprintf(fp4,"\n%d",s.id);
			printf("\n\tENTER ITEM NAME : ");
			fscanf(stdin,"%s",s.item);
			fprintf(fp4," %s",s.item);
			printf("\n\tENTER ITEM PRICE :");
			fscanf(stdin,"%d",&s.price);
			fprintf(fp4," %d",s.price);
			printf("\n\tENTER NUMBER OF DRINKS :");
			fscanf(stdin,"%d",&s.nop);
			fprintf(fp4," %d",s.nop);
			printf("\n\tenter 22 to enter new tiffin item : ");
			scanf("%d",&k);
			}
			while(k==22);
			fclose(fp4);
			break;
		}
		
			printf("\n\n\tENTER 1 TO ENTER NEW ITEM : ");
			scanf("%d",&r);
	  }
		while(r==1);
		break;
	case 2:
		previousrec();
		break;
	}
	printf("\n\n\tENTER 1 TO GO TO EMPLOYES MENU : ");
	scanf("%d",&r);
	}
	while(r==1);
}
void customer()
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	FILE *fp4;
	FILE *fp5;
	int z,n,r,d;
	printf("\t---------------  SELECT YOUR MAIN MENU TYPE  ------------------");
	printf("\n\n\t1.TIFFINS\n\n\t2.MEALS\n\n\t3.SNACKS\n\n\t4.DRINKS");
	printf("\n\n\tSELECT YOUR MENU TYPE : ");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
			fp1=fopen("C:/Users/DRUVA KUMAR/Desktop/dntiffins.txt","r");
			printf("\n\n\t====================================\n");
    		printf("\t             -TIFFIN MENU-\n");
    		printf("\t====================================");
			printf("\nITEM NO.\tITEM NAME\tITEMPRICE \tNO.OFPLATES");
			while(fscanf(fp1,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
			{
				fprintf(stdout,"\n%d\t        %s\t\t\t%d\t\t%d",s.id,s.item,s.price,s.nop);
			
			}
				printf("\nENTER ITEMNUMBER");
				scanf("%d",&n);
				fp1=fopen("C:/Users/DRUVA KUMAR/Desktop/dntiffins.txt","r");
				while(fscanf(fp1,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
				{
					if(n==s.id)
					{
						printf("\n\n\tyou have selected");
						fprintf(stdout," %s",s.item);
						printf("\n\n\tenter number of plates : ");
						scanf("%d",&d);
						fp5=fopen("C:/Users/DRUVA KUMAR/Desktop/dnrecords.txt","a");
						fprintf(fp5,"\n%d %s %d %d",s.id,s.item,s.price,d);
						fclose(fp5);
						totalcost[i++]=d*s.price;
						count++;
						bill(count);
						break;
					}
				}
			fclose(fp1);
			break;
		case 2:
			fp2=fopen("C:/Users/DRUVA KUMAR/Desktop/dnmeals.txt","r");
			printf("\n\n\t====================================\n");
    		printf("\t             -MEALS MENU-\n");
    		printf("\t====================================");
			printf("\nITEM NO.\tITEM NAME\tITEMPRICE \tNO.OFPLATES");
			while(fscanf(fp2,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
			{
				fprintf(stdout,"\n%d\t        %s\t\t\t%d\t\t%d",s.id,s.item,s.price,s.nop);
			}
				printf("\n\n\tENTER ITEMNUMBER : ");
				scanf("%d",&n);
			fp2=fopen("C:/Users/DRUVA KUMAR/Desktop/dnmeals.txt","r");
					while(fscanf(fp2,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
					{
						if(n==s.id)
						{
							printf("\n\n\tyou have selected");
							fprintf(stdout," %s",s.item);
							printf("\n\n\tenter number of plates : ");
							scanf("%d",&d);
							fp5=fopen("C:/Users/DRUVA KUMAR/Desktop/dnrecords.txt","a");
							fprintf(fp5,"\n%d %s %d %d",s.id,s.item,s.price,d);
							fclose(fp5);
							totalcost[i++]=d*s.price;
							count++;
							bill(count);
							break;
						}
					}	
			fclose(fp2);
			break;
		case 3:
			fp3=fopen("C:/Users/DRUVA KUMAR/Desktop/dnsnacks.txt","r");
			printf("\n\n\t====================================\n");
    		printf("\t             -SNACKS MENU-\n");
    		printf("\t====================================");
			printf("\nITEM NO.\tITEM NAME\tITEMPRICE \tNO.OFPLATES");
			while(fscanf(fp3,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
			{
				fprintf(stdout,"\n%d\t        %s\t\t\t%d\t\t%d",s.id,s.item,s.price,s.nop);
			
			}
			printf("\n\n\tENTER ITEMNUMBER : ");
				scanf("%d",&n);
			fp3=fopen("C:/Users/DRUVA KUMAR/Desktop/dnsnacks.txt","r");
				while(fscanf(fp3,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
				{
					if(n==s.id)
					{
						printf("\n\n\tyou have selected");
						fprintf(stdout," %s",s.item);
						printf("\n\n\tenter number of plates : ");
						scanf("%d",&d);
						fp5=fopen("C:/Users/DRUVA KUMAR/Desktop/dnrecords.txt","a");
						fprintf(fp5,"\n%d %s %d %d",s.id,s.item,s.price,d);
						fclose(fp5);
						totalcost[i++]=d*s.price;
						count++;
						bill(count);
						break;
					}
				}
			fclose(fp3);
			break;
			case 4:
				fp4=fopen("C:/Users/DRUVA KUMAR/Desktop/dndrinks.txt","r");
				printf("\n\n\t====================================\n");
    			printf("\t             -DRINKS MENU-\n");
    			printf("\t====================================");
				printf("\nITEM NO.\tITEM NAME\tITEMPRICE \tNO.OFPLATES");
				while(fscanf(fp4,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
				{
					fprintf(stdout,"\n%d\t        %s\t\t\t%d\t\t%d",s.id,s.item,s.price,s.nop);
				
				}
				printf("\n\n\tENTER ITEMNUMBER : ");
				scanf("%d",&n);
				fp4=fopen("C:/Users/DRUVA KUMAR/Desktop/dndrinks.txt","r");
				while(fscanf(fp4,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
				{
					if(n==s.id)
					{
						printf("\n\n\tyou have selected");
						fprintf(stdout," %s",s.item);
						printf("\n\n\tenter number of Drinks : ");
						scanf("%d",&d);
						fp5=fopen("C:/Users/DRUVA KUMAR/Desktop/dnrecords.txt","a");
						fprintf(fp5,"\n%d %s %d %d",s.id,s.item,s.price,d);
						fclose(fp5);
						totalcost[i++]=d*s.price;
						count++;
						bill(count);
						break;
					}
				}
				fclose(fp4);
				break;
	}
}
float bill(int count)
{
	int i,z=0,k;
	float totalbill,gst;
	printf("\n\n\tENTER 1 TO ORDER MORE : ");
	scanf("%d",&k);
	if(k==1)
	{
		customer();
	}
	else
	{
		printf("\n\n\t=========================================================\n");
    printf("\t      -TOTAL BILL-\n");
    printf("\t==========================================================");
		for(i=0;i<count;i++)
        {
        
    	printf("\n\n Bill amount for (order%d)           = %d",i+1,totalcost[i]);
    	totalbill+=totalcost[i];
		}
	printf("\n\n Bill amount for all ordered food items      =%f",totalbill);
	printf("\n\n GST [14 percent]                            =%f",gst=totalbill*0.14);
	printf("\n\n Total bill[including GST]                   =%f",totalbill=totalbill+gst);
	printf("\n\n\t=========================================================\n");
    printf("\t      -THANK YOU VISIT AGAIN-\n");
    printf("\t==========================================================");
	}
}
void login()
{
	int a,i;
    char uname[10],pword[10]; 
    char user[100]="druva";
    char pass[10]="dn";
    printf("\n\n\t====================LOGIN FORM====================\n");
    A:
    printf("\n\t\t\tENTER USERNAME:-");
    scanf("%s",uname);
    a=strcmp(uname,user);
    if(a==0)
    {
    	B:
    	printf("\n\t\t\tENTER PASSWORD:-");
    	scanf("%s",&pword);
	}
	else
	{
		printf("\n\t\t\tINVALID USERNAME");
		printf("\n\n\t\t\tRE-ENTER AGAIN\n");
		goto A;
	}
	i=strcmp(pass,pword);
	if(i==0)
	{
		printf("  \n\n\n    WELCOME TO CANTEEN MANAGEMENT SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n\t\tPRESS ENTER TO CONTINUE");
		getch();
	}
	else
	{
		printf("\n\t\t\tWRONG PASSWORD..........");
		printf("\n\n\t\t\tRE-ENTER PASSWORD\n");
		goto B;
	}
    
}
void previousrec()
{
	FILE *fp5;
	fp5=fopen("C:/Users/DRUVA KUMAR/Desktop/dnrecords.txt","r");
			printf("--------------------------------PREVIOUSBILLS-------------------------------------");
			printf("\nITEM NO.\tITEM NAME\tITEMPRICE\tNUMBER OF PLATES");
			while(fscanf(fp5,"\n%d	%s	%d %d",&s.id,s.item,&s.price,&s.nop)!=EOF)
			{
				fprintf(stdout,"\n%d\t        %s\t\t\t%d\t\t%d",s.id,s.item,s.price,s.nop);
			
			}
}

