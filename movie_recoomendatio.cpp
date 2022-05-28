//movie recommendation system
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

class movies
{
	 	public :
		char name[50],hero[50],heroin[50],gen[20],vid[10];
		char lang[10],date[20];
		int rate;

		void set(char n[],char h[],char he[],char g[],char v[],char l[],char d[],int r){
			
			 strcpy(name,n);
			 strcpy(hero,h);
			 strcpy(heroin,he);
			 strcpy(gen,g);
			 strcpy(vid,v);
			 strcpy(lang,l);
			 strcpy(date,d);
			 rate=r;
		}
	
};

class display{
	
	public :
		void_dis(){
		
	cout<<"\n\t\t\t\t\t\tM O V I E  R E C O M M E N D A T I O N\n\n\n";
	cout<<"LANGUAGE\t\t\t\tGENREA\t\t\t\t CAST\t\t\t  VIDEO DEFINITION\n\n";
	cout<<"Hindi\t\t\t\t\tComedy\t\t\t\tAkshay Kumar\t\t\t HD\n";
	cout<<"English\t\t\t\t\tRomance\t\t\t\tAlia Bhatt\t\t\t 4KUHD\n";
	cout<<"Tamil\t\t\t\t\tAction\t\t\t\tSalmaan khan\n";
	cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n";}
};

main()
{
	int i;
	char search[50];
	display d;

	d.void_dis();
	
	movies m[16];
	m[0].set("Bachhan pandey","akshay kumar","kriti sanon","action","hd","hindi","2020p",8);
	m[1].set("KGF","salman","alia bhatt","action","hd","tamil","2022",9);
	m[2].set("RRR","","alia bhatt","action","4kuhd","hindi","2022",9);
	m[3].set("Puspa","allu arjun","rashmika madana","action","4kuhd","tamil","2022",10);
	m[4].set("GanguBai Kathiyawadi","shantanu maheshwari","alia bhatt","crime","hd","hindi","2022",9);
	m[5].set("Spiderman No way home","tom honnald","zendaya","action","hd","english","2022",10);
	m[6].set("Khuda Gawah","amitabh bachhan","sridevi","romance","hd","hindi","1990",8);
	m[7].set("Gadar","sunny deol","ameesha patel","action","hd","hindi","1990",10);
	m[8].set("Vastava","sanjay dutt","namrata","action","hd","hindi","1990",7);
	m[9].set("12.monkey","bruce wills","amanda schull","thriller","hd","english","1990",8);
	m[10].set("Conspirary theory","mel cuision","julia robert","thriller","hd","english","1990",7);
	m[11].set("Salute","dulquersalmaan","dianapenty","thriller","hd","tamil","2022",8);
	m[12].set("Radhe shayaaam","prabhash","pooja hegde","action","4kuhd","hindi","2022",8);
	m[13].set("Tadap","Ahaanshetty","tara sutaria","action","4kuhd","hindi","2022",9);
	m[14].set("Good news","akshay kumar","kareena kapoor","comedy","hd","hindi","2020",8);
	m[15].set("Housefull 3","akshay kumar","kriti","comedy","hd","hindi","2020",7);
	m[16].set("Andaaz","akshay kumar","twinkle","romance","hd","hindi","1990",8);
	
	
	cout<<"SOME LATEST MOVIES : \n\n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].date,"2022")==0)
		{
		cout<<m[i].name<<"\t";
    	}
   }

    cout<<"\n\n\nSOME TRANDING MOVIES : \n\n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].date,"2022")==0&&(m[i].rate==10||m[i].rate==9))
		{
		cout<<m[i].name<<"    \t";
    	}	
   }
   
   cout<<"\n\n\nSOME 90's' MOVIES : \n\n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].date,"1990")==0)
		{
		cout<<m[i].name<<"    \t";
    	}	
   }
	
	cout<<"\n\n\n\n\n\n\t\t\t\tSEARCH YOUR MOVIE HERE :  ";
	fflush(stdin);
	  cin.getline(search,50);

	
		  
	  
	if(strcmp(search,"hindi movies")==0)
	{
	     cout<<"HINDI MOVIES AVIALABLE : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].lang,"hindi")==0)
		{
		cout<<m[i].name<<" \t";
    	}
	
	}
	}
	
	
	else if(strcmp(search,"tamil movies")==0)
	{
	     cout<<"TAMIL MOVIES AVILALABE : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].lang,"tamil")==0)
		{
		cout<<m[i].name<<"\t";
    	}
	
	}
	} 


    else if(strcmp(search,"english movies")==0)
	{
	     cout<<"ENGLISH MOVIES AVIALABLE : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].lang,"english")==0)
		{
		cout<<m[i].name<<"\t";
    	}
	
	}
	}  
	
	 
	
	else if(strcmp(search,"akshay kumar")==0)
	{
	     cout<<"\n\nYOU MAY LIKE : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].hero,"akshay kumar")==0)
		{
		cout<<m[i].name<<"\t";
    	}
	
	}
	} 
	
    else if(strcmp(search,"comedy movies")==0)
	{
	     cout<<"\n\nYOU MAY LIKE  : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].gen,"comedy")==0)
		{
		cout<<"\t"<<m[i].name<<"\t";
    	}
	
	}
	} 
	
	
	else if(strcmp(search,"action movies")==0)
	{
	     cout<<"\n\nYOU MAY LIKE  : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].gen,"action")==0)
		{
		cout<<m[i].name<<"\t";
    	}
	
	}
	} 
	
	
	
	else if(strcmp(search,"hd movies")==0)
	{
	     cout<<"RECOMMENDED FOR YOU  : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].vid,"hd")==0)
		{
		cout<<m[i].name<<" \t";
    	}
	
	}
	} 
	
	
	else if(strcmp(search,"4kuhd movies")==0)
	{
	     cout<<"RECOMMENDED FOR YOU  : \n";
	for(i=0;i<16;i++)
	{
		if (strcmp(m[i].vid,"4kuhd")==0)
		{
		cout<<m[i].name<<"    \t";
    	}
	
	}
	} 











else cout<< "no movie avialable";


	return 0;
}

