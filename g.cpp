#include<iostream>
#include<string>
using namespace std;

class CLIENT
{
     long int  kwdikospelath;
	 char[30]  onomapelath;
	 char[5]   loginname;
	 long int  password;
	 float     kostosKWh;
	 float     megistoypoloipo;
	 float     teleutaiametrhsh;
	 float     ypoloipo;
	 
   public:	
     CLIENT(void); 
     long int getkwdikospelath(void){return kwdikospelath;}	 
	 char
	 
 }	 
 
CLIENT::CLIENT(void)
{ cout<<"dwse me th seira pou zhtountai kwdiko pelath,onomapelath,loginname,password,kostosKWh,megistoypoloipo";
  cin>>kwdikospelath>>onomapelath>>loginname>>password>>kostosKWh>>megistoypoloipo;
  ypoloipo=0;
  teleutaiametrhsh=0;
  }
	 
void main
{ 
    CLIENT *pelates; //pointer poy deixnei ston pinaka twn antikeimenwn
    int a; // shmaia gia server h pelath
	int counter=0; //metrhths gia to posa antikeimena exoume
	while(1){
	    cout<<"an eisai diaxeiristis dwse thn timh 1,an eisai pelaths dwse opoiadhpote allh timh";
	    cin>>a 	
		if(a==1)
		  {if(server(counter,pelates)==1){exit};
		   
		   }
		else
		  {pelaths(counter,pelates);
		   }	
	} 
}	 


void pelaths(int counter,CLIENT *pelates)
{     int i;
      int c=0;
      cout<<"dwse mou to login name kai to password sou";
	  cin>>loginnam>>passwor;
	  for(i==0,i<counter,i++) 
	   {if((pelates[i].loginname==loginnam)and(pelates[i].password==passwor))
	      { c=i;
		    break;   //exodos apo to for
		   }
		}
       
       if((i==counter)and(c==0))
	       {
	            cout<<"den vrethike pelaths";
		        exit;                                //εξοδος απο την συναρτηση πελατη επειδη δεν βρεθηκε ο πελατης		
            }
		
		cout<<"parakalw plhktrologeiste to poso pou tha thelate na exoflhsete kathws kai arithmo logariasmou";
		cin>>poso>>arithlogar;
		pelates[c].ypoloipo=pelates[c].ypoloipo-poso;
		cout<<poso<<"$  "<<arithlogar;
}		
		

void server(int counter,CLIENT *pelates)
{     int exit=0;
      int i==3;
      int leitourgia;
	  while(i==3)
     {
	  cout<<"gia neo pelath pathste 1";
	  cout<<"gia diagrafi pelath pathste 2";
	  cout<<"gia diagrafi aytwn poy xrvstane polla pathste 3";
	  cout<<"gia ektypvsh olwn twn pelatvn pathste 4";
	  cout<<"gia exodo apo to programma pathste 5";
	  cout<<"gia exodo apo to menu pathste 6";
	  cin>>leitourgia;
	 
	 if(leitourgia==1)
	 {
	 neos_pelaths();
	 }
	 elseif(leitourgia==2){diagrafi_pelath();}
	 elseif(leitourgia==3)
	 {diagrafi_ofeiletwn();
	  i++}
	 elseif(leitourgia==4)
	 {
	   ektypwsh_pelatwn();
	   i++;
	 }
	 elseif(leitourgia==5){
	 i++;
	 exit=1;
	 return exit;}
	 
	 } 
	  
}	  
	  
	  
	  
	  
	  
	  
	  




  	
	     
