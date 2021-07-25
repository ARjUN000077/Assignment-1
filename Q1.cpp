#include<bits/stdc++.h> 
#include<conio.h> 
#include<string.h>
#include<stdio.h>
using namespace std;
struct lib_books{ 
        char title[20]; 
        //string title;
        char author[20]; 
        //string author;
        int copies; 
        float price; 
        lib_books *next;
}; 

int comparator (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){ 
	int n=100;
    struct lib_books book[n] ; 
    //string book_name,author_name;
    char book_name[20],author_name[20];
    float prices;
    int copy,choice,i=0;
    //clrscr(); 
    while(1){
    cout<<"\nPress\n1:Entering details of books \n2:Display book list \n3:Search book by its name\n4:Search book by its author\n5:Sort list of books by name\n6:Exit\n";
    cout<<"\nEnter Choice\n";
	cin>>choice;
    switch(choice){
       	case 1:{
	   		cout<<"Enter name of a book: ";
       		cin>>book_name;
       		cout<<"\nEnter name of an author: ";
       		cin>>author_name;
       		cout<<"\nEnter the price of book: ";
       		cin>>prices;
       		cout<<"\nEnter number of copies: ";
       		cin>>copy;
       		//book[i].title=book;
       		strcpy(book[i].title, book_name); 
       		//book[i].author= author;
       		strcpy(book[i].author, author_name); 
       		book[i].copies = copy; 
       		book[i].price = prices; 
       		i++;}
       		break;
       	case 2:{
	   		cout<<"\nFull list of books:\n";
	   		for(auto j=0;j<i;j++){
	   			cout<<"\n Book: "<<j+1<<book[j].title<<"\n"; 
			}}
       		break;	
       	case 3:{
       		cout<<"\nWrite a name of book you want to search:\n";
       		string search_book;
       		cin>>search_book;
       		int count=0;
       		for(auto j=0;j<i;j++){
	   			if(book[j].title == search_book){
	   				cout<<"No of copies of book:"<<book[j].copies<<"\n\n";
	   				break;
				}
				count++;
			}
			if(count>=i){
				cout<<"\nBook not found!!!\n";
			}}
			break;
			
		case 4:{
			cout<<"\nWrite a name of author you want to search:\n";
       		string search_author;
       		cin>>search_author;
       		//int count=0;
       		for(auto j=0;j<i;j++){
	   			if(book[j].author == search_author){
	   				cout<<"Name of book:"<<book[j].title<<"\n";
	   				cout<<"No of copies of book:"<<book[j].copies<<"\n";
				}
				//count++;
			}}
			break;
       		
       	case 5:{
       		qsort(book,n,sizeof(struct lib_books), comparator);
			cout<<"\n\nBooks Records sorted by Name:\n:\n";
       		
       		for(int j=0;j<i;j++){
       			printf("Name = %s",book[j].title);
			}
			break;}
		
		case 6:{
			break;
			
		}
       		
       	
       		/*cout<<"\n Title of the Book is "<<book1.title; 
       		cout<<"\n Author of the Book is "<<book1.author; 
       		cout<<"\n Pages of the Book are "<<book1.pages; 
       		cout<<"\n Price of the Book is "<<book1.price;*/
       		getch(); 
    }
	}
 } 
