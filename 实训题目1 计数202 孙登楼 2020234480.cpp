	

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h> 
typedef struct flightnode{ 
  char flight_num[10];  
  char start_time[10];  
  char end_time[10];      
  char start_place[20]; 
  char end_place[20];    
  int left;                         
  float price;                  
  float price_discount; 
  int isFull;                    
  struct flightnode *next; 
}flightnode;                 
typedef struct passengernode{ 
    char name[20];             
    char ID_num[20];        
    char flight_num[10];
    int order_num;             
    int ticket_num;          
    struct passengernode *next; 
}passengernode; 
typedef struct passengerList 
{ 
  	passengernode *head; 
 	 passengernode *rear; 
}passengerList; 
void init_flight(flightnode *&h)
{ 
	  h=(flightnode *)malloc(sizeof(flightnode)); 
	  if(h==NULL) exit(0); 
	  h->next=NULL;
} 
void init_passengerList(passengerList *&pList) 
{ 
	  pList=(passengerList *)malloc(sizeof(passengerList)); 
	  pList->head=(passengernode *)malloc(sizeof(passengernode)); 
	  pList->rear=pList->head; 
	  pList->rear->order_num=0; 
	  pList->head->next=NULL; 
} 
void save_passenger(passengerList *PList) 
{ 
	  FILE* fp = fopen("passenger.dat","wb"); 
	  if(fp==NULL) 
	    return; 
	  passengernode *temp=PList->head->next; 
	  while(temp!=NULL) 
	  { 
	    fwrite(temp,sizeof(passengernode),1,fp); 
	    temp = temp->next; 
	  }; 
	  fclose(fp); 
	} 
void load_passenger(passengerList *PList) 
	{ 
	  FILE* fp = fopen("passenger.dat","rb"); 
	  if(fp==NULL) 
	    return; 
	  passengernode *q; 
	  int n; 
	  while(!feof(fp)) 
	  { 
	    q=(passengernode *)malloc(sizeof(passengernode)); 
	    n =fread(q,sizeof(passengernode),1,fp); 
	    if(n!=1) 
	      break; 
	    PList->rear->next=q; 
	    PList->rear=q; 
	  } 
	  PList->rear->next=NULL; 
	  fclose(fp); 
} 
void save_flight(flightnode *h) 
{ 
	  FILE* fp = fopen("flightList.dat","wb"); 
	  if(fp==NULL) 
	    return; 
	  flightnode *temp=h->next; 
	  while(temp!=NULL) 
	  { 
	    fwrite(temp,sizeof(flightnode),1,fp); 
	    temp = temp->next; 
	  }; 
	  fclose(fp); 
} 
void load_flight(flightnode *&h) 
{ 
	  flightnode *pt=h; 
	  FILE* fp = fopen("flightList.dat","rb"); 
	  if(fp==NULL) 
	    return; 
	  flightnode *q; 
	  int n; 
	  while(!feof(fp)) 
	  { 
	    q=(flightnode *)malloc(sizeof(flightnode)); 
	    n=fread(q,sizeof(flightnode),1,fp); 
	    if(n!=1) 
	      break; 
	    pt->next=q; 
	    pt=q; 
	  } 
	  pt->next=NULL; 
	  fclose(fp); 
} 
int find_same_flight(flightnode *h,char *flight_num) 
{ 
  flightnode *t=h->next,*p=h->next; 
  int mark=0; 
  printf("%-8s%-12s%-12s%-10s%-10s%-8s%-6s%-10s%-8s\n","??????","????????","????????","????????","????????","????","????","????????","??????"); 
  while(t!=NULL && strcmp(t->flight_num,flight_num)!=0) t=t->next; 
  while(p!=NULL){ 
    if((strcmp(t->start_place,p->start_place)==0)&&(strcmp(t->end_place,p->end_place)== 0)&&(strcmp(t->flight_num,p->flight_num)!=0)) 
    { 
      printf("%-8s%-12s%-12s%-10s%-10s%-8.2f%-6.2f%-10d%-8d\n",p->flight_num, p->start_place,p->end_place,p->start_time,p->end_time,p->price,p->price_discount,p->isFull,p->left); 
      mark=1; 
    } 
    p=p->next; 
  } 
  if(mark==0) 
  { 
    printf("\t\t ????????????????????!\n"); 
    return 0; 
  } 
  return 1; 
} 
void insert_flight(flightnode *&h,char* flight_num,char* start_place,char* end_place,char* start_time,char* 
end_time,int left,float price,float price_discount,int isFull) 

{ 
  flightnode *q;
  flightnode *p=h; 
  q=(flightnode *)malloc(sizeof(flightnode)); 
  strcpy(q->flight_num,flight_num); 
  strcpy(q->start_place,start_place); 
  strcpy(q->end_place,end_place); 
  strcpy(q->start_time,start_time); 
  strcpy(q->end_time,end_time); 
  q->left=left; 
  q->price=price; 
  q->price_discount=price_discount; 
  q->isFull=isFull;    
  q->next=p->next;
  p->next=q; 
  p=p->next; 
} 
void insert_passengerList(flightnode *&h,passengerList *&PList,char *name,char *ID_num,char *flight_num,int ticket_num)  
{ 
  flightnode *p=h->next; 
  for(;p!=NULL;p=p->next) 
    if(strcmp(p->flight_num,flight_num)==0) 
    { 
      p->left=p->left-ticket_num; 
      if(p->left==0) 
        p->isFull=1; 
    } 
  passengernode *q=(passengernode *)malloc(sizeof(passengernode));//?????????????????????????????? 
  strcpy(q->name,name); 
  strcpy(q->ID_num,ID_num); 
  strcpy(q->flight_num,flight_num); 
  q->ticket_num=ticket_num; 
  q->next=NULL;  
  PList->rear->next=q; 
  q->order_num=PList->rear->order_num+1; 
  PList->rear=q; 
} 
 
void delete_flight(flightnode *&h,passengerList *&PList)  
{ 
  flightnode *p,*pr; 
  passengernode *q,*qr; 
  char flight_num[10]; 
  int mark=1; 
  qr=PList->head; 
  q=qr->next; 
  pr=h; 
  p=pr->next;
  printf("\t\t ??????????????????????:"); 
  scanf("%s",flight_num); 
  while(p!=NULL) 
  { 
    if(strcmp(flight_num,p->flight_num)==0) 
    { 
      pr->next=p->next; 
      free(p); 
      printf("\t\t ????%s ????????!\n",flight_num); 
      mark=0; 
      p=NULL; 
    } 
    if(pr->next!=NULL) 
    { 
      pr=pr->next; 
      p=pr->next; 
    } 
  } 
  if(mark==1) 
    printf("\t\t ????????,????????!\n"); 
  else 
  { 
    while(q!=NULL) 
    { 
      if(strcmp(flight_num,q->flight_num)==0) 
      { 
        qr->next=q->next; 
        free(q); 
        q=NULL; 
      } 
      if(qr->next!=NULL) 
      { 
        qr=qr->next; 
        q=qr->next; 
      } 
    } 
  } 
} 
int delete_passenger(passengerList *&PList,flightnode *&h,char *name,char *ID_num) 
 
{ 
  passengernode *p,*pr=PList->head; 
  p=pr->next; 
  while(p!=NULL) 
  { 
    if(strcmp(name,p->name)==0&&strcmp(ID_num,p->ID_num)==0) 
    { 
      for(flightnode *f=h->next;f!=NULL;f=f->next) 
        if(strcmp(p->flight_num,f->flight_num)==0) 
        { 
          f->left=f->left+p->ticket_num; 
          f->isFull=0; 
          break; 
        } 
      pr->next=p->next; 
      free(p); 
      printf("\t\t ????%s,%s ????????!\n",name,ID_num); 
      return 1; 
    } 
    pr=pr->next; 
    p=pr->next; 
  } 
  printf("\t\t ????????,????????!\n"); 
  return 0; 
} 
void add_flight(flightnode *&h) 
{ 
  flightnode *p=h; 
  char flight_num[10],start_time[10],end_time[10],start_place[20],end_place[20]; 
  int left,isFull,mark=1; 
  float price,price_discount; 
  for(;p->next!=NULL;p=p->next){}
  while(mark==1) 
  { 
    printf("\t\t ??????????????????????:"); 
    scanf("%s",flight_num); 
    printf("\t\t ????????????:"); 
    scanf("%s",start_place); 
    printf("\t\t ????????????:"); 
    scanf("%s",end_place); 
    printf("\t\t ??????????????:"); 
    scanf("%s",start_time); 
    printf("\t\t ??????????????:"); 
    scanf("%s",end_time); 
    printf("\t\t ??????????:"); 
    scanf("%f",&price); 
    printf("\t\t ??????????:"); 
    scanf("%f",&price_discount); 
    printf("\t\t ????????????????:"); 
    scanf("%d",&left); 
    printf("\t\t ??????????????(0 ???????????? 1 ??????):"); 
    scanf("%d",&isFull); 
    insert_flight(p,flight_num,start_place,end_place,start_time,end_time,left,price, price_discount,isFull); 
    printf("\t\t ????????%s ????!\n",flight_num); 
    printf("\t\t ????????????????????(1 ????????????;0 ????????????).\n"); 
    printf("\t\t ??????:"); 
    scanf("%d",&mark); 
  } 
} 
int flight_num_check(flightnode *h,char *flight_num) 
{ 
  flightnode *p=h; 
  printf("%-8s%-12s%-12s%-10s%-10s%-8s%-6s%-10s%-8s\n","??????","????????","????????","????????","????????","????","????","????????","??????"); 
  for(;p!=NULL;p=p->next) 
  { 
    if(strcmp(p->flight_num,flight_num)==0) 
    { 
      printf("%-8s%-12s%-12s%-10s%-10s%-8.2f%-6.2f%-10d%-8d\n",p->flight_num, p->start_place,p->end_place,p->start_time,p->end_time,p->price,p->price_discount,p->isFull,p->left); 
      return 1; 
    } 
  } 
  printf("\t\t ????,????????????%s ??????????!\n",flight_num); 
  return 0; 
} 
int place_check(flightnode *h,char *start_place,char *end_place) 
{ 
  flightnode *p=h; 
  int mark=0; 
  printf("%-8s%-12s%-12s%-10s%-10s%-8s%-6s%-10s%-8s\n","??????","????????","????????","????????","????????","????","????","????????","??????"); 
  for(;p!=NULL;p=p->next) 
  { 
    if(strcmp(p->start_place,start_place)==0&&strcmp(p->end_place,end_place)==0) 
    { 
      printf("%-8s%-12s%-12s%-10s%-10s%-8.2f%-6.2f%-10d%-8d\n",p->flight_num, p->start_place,p->end_place,p->start_time,p->end_time,p->price,p->price_discount,p->isFull,p->left); 
      mark=1; 
    } 
  } 
  if(mark==0) 
  { 
    printf("\t\t ????,??????%s ??%s ??????????!\n",start_place,end_place); 
    return 0; 
  } 
  return 1; 
} 
void check_all_flight(flightnode *h) 
{ 
  flightnode *p=h; 
  int m=0; 
  printf("%-8s%-12s%-12s%-10s%-10s%-8s%-6s%-10s%-8s\n","??????","????????","????????","??????","????????","????","????","????????","??????"); 
  for(;p!=NULL;p=p->next) 
  { 
    printf("%-8s%-12s%-12s%-10s%-10s%-8.2f%-6.2f%-10d%-8d\n",p->flight_num, p->start_place,p->end_place,p->start_time,p->end_time,p->price,p->price_discount,p->isFull,p->left); 
    m=1; 
  } 
  if(m==0) 
    printf("\t\t ????????????!\n"); 
} 
void flight_check(flightnode *h) 
{ 
  flightnode *p=h->next; 
  char flight_num[10],start_place[20],end_place[20]; 
  char a; 
    printf("\t\t ??????????????????:\n"); 
  printf("\t\t1 ????????????????????;\n"); 
  printf("\t\t2 ??????????????????????????;\n"); 
  printf("\t\t3 ????????????????????.\n\t\t ??????????:"); 
  a=getch(); 
  printf("%c\n",a); 
  if(a=='1') 
  { 
    printf("\t\t ????????????:"); 
    scanf("%s",flight_num); 
    flight_num_check(p,flight_num); 
  } 
  else if(a=='2') 
  { 
    printf("\t\t ??????????????:"); 
    scanf("%s",start_place); 
    printf("\t\t ??????????????:"); 
    scanf("%s",end_place); 
    place_check(p,start_place,end_place); 
  } 
  else if(a=='3') 
    check_all_flight(p); 
  else 
    return; 
} 
 
int ID_name_check(passengerList *PList,char *name,char *ID_num) 
{ 
  passengernode *p=PList->head->next; 
  int mark=0; 
  printf("%-8s%-20s%-20s%-10s%-8s%\n","??????","????","??????","??????","????????"); 
  for(;p!=NULL;p=p->next) 
  { 
    if(strcmp(p->ID_num,ID_num)==0&&strcmp(p->name,name)==0) 
    { 
      printf("%-8d%-20s%-20s%-10s%-8d%\n",p->order_num,p->name,p->ID_num, p->flight_num,p->ticket_num); 
      mark=1; 
    } 
  } 
  if(mark==0) 
  { 
    printf("\t\t ????,????%s,%s ??????????!\n",name,ID_num); 
    return 0; 
  } 
  return 1; 
} 
int order_num_check(passengerList *PList,int order_num) 
{ 
  passengernode *p=PList->head->next; 
  printf("%-8s%-20s%-20s%-10s%-8s%\n","??????","????","??????","??????","????????"); 
  for(;p!=NULL;p=p->next) 
  { 
    if(p->order_num==order_num) 
    { 
      printf("%-8d%-20s%-20s%-10s%-8d%\n",p->order_num,p->name,p->ID_num, p->flight_num,p->ticket_num); 
      return 1; 
    } 
  } 
  printf("\t\t ????,????????????%d ??????????!\n",order_num); 
  return 0; 
} 
void check_all_passenger(passengerList *PList) 
{ 
  passengernode *p=PList->head->next; 
  int m=0; 
  printf("%-8s%-20s%-20s%-10s%-8s%\n","??????","????","??????","??????","????????"); 
  for(;p!=NULL;p=p->next) 
  { 
    printf("%-8d%-20s%-20s%-10s%-8d%\n",p->order_num,p->name,p->ID_num, p->flight_num,p->ticket_num); 
    m=1; 
  } 
  if(m==0) 
    printf("\t\t ????????????!\n"); 
} 
void passenger_check(passengerList *PList) 
{ 
  char name[20],ID_num[15]; 
  int order_num; 
  char a; 
    printf("\t\t ??????????????????:\n"); 
  printf("\t\t1 ??????????????????????????????;\n"); 
  printf("\t\t2 ????????????????????;\n"); 
  printf("\t\t3 ????????????????????.\n\t\t ??????????:"); 
  a=getch(); 
  printf("%c\n",a); 
  if(a=='1') 
  { 
    printf("\t\t ??????????????:"); 
    scanf("%s",name); 
    printf("\t\t ????????????:"); 
    scanf("%s",ID_num); 
    ID_name_check(PList,name,ID_num); 
  } 
  else if(a=='2') 
  { 
    printf("\t\t ????????????:"); 
    scanf("%d",&order_num); 
    order_num_check(PList,order_num); 
  } 
  else if(a=='3') 
    check_all_passenger(PList); 
  else 
    return; 
} 
 
void modify_flight(flightnode *&h,passengerList *&PList) 
{ 
  flightnode *p=h->next; 
  char flight_num[10],start_time[10],end_time[10]; 
  char a; 
  printf("\t\t************????????????*************\n"); 
  printf("\t\t*************************************\n"); 
  printf("\t\t*                  ????????-------1                    *\n"); 
  printf("\t\t*                  ????????-------2                    *\n"); 
  printf("\t\t*                  ????????????---3                    *\n"); 
  printf("\t\t*************************************\n"); 
  printf("\t\t ??????:"); 
  a=getch(); 
  printf("%c\n",a); 
  if(a=='1') 
    add_flight(h); 
  else if(a=='2') 
    delete_flight(h,PList); 
  else if(a=='3') 
  { 
    printf("\t\t ??????????????????????????:"); 
    scanf("%s",flight_num); 
    if(flight_num_check(p,flight_num)==1) 
    { 
      printf("\t\t ??????????????????????:"); 
      scanf("%s",start_time); 
      printf("\t\t ??????????????????????:"); 
      scanf("%s",end_time); 
      for(;p!=NULL;p=p->next) 
        if(strcmp(flight_num,p->flight_num)==0) 
        { 
          strcpy(p->start_time,start_time); 
          strcpy(p->end_time,end_time); 
          printf("\t\t ????%s ????????????!\n",flight_num); 
        } 
    } 
  } 
  else 
    return; 
} 
 
int book(flightnode *&h,passengerList *&PList) 
{ 
  char name[20];              
  char ID_num[20];          
  char flight_num[10]; 
  char start_place[20];
  char end_place[20];    
  int ticket_num;           
  int k; 
  flightnode *p=h->next; 
  printf("\t\t ??????????:\n"); 
  printf("\t\t ??????????????:"); 
  scanf("%s",start_place); 
  printf("\t\t ??????????????:"); 
  scanf("%s",end_place); 
  if(place_check(h,start_place,end_place)==1) 
  { 
    printf("\t\t ??????:"); 
    scanf("%s",flight_num); 
    while(flight_num==NULL){ 
      printf("??????????????!\n"); 
      printf("\t\t ??????:"); 
      scanf("%s",flight_num); 
    } 
    while(p!=NULL){ 
      if(strcmp(p->flight_num,flight_num)==0) 
      { 
        printf("\t\t ????:"); 
        scanf("%s",name); 
        printf("\t\t ????????:"); 
        scanf("%s",ID_num); 
        printf("\t\t ????????:"); 
        scanf("%d",&ticket_num); 
        while(name==NULL){ 
          printf("????????????????!\n"); 
          printf("\t\t ????:"); 
          scanf("%s",name); 
        } 
        while(ID_num==NULL){ 
          printf("????????????????????!\n"); 
          printf("\t\t ????????:"); 
          scanf("%s",ID_num); 
        } 
        while(ticket_num==0){ 
          printf("????????????????????!\n"); 
          printf("\t\t ????????:"); 
          scanf("%d",&ticket_num); 
        } 
        if(p->left>0&&p->left>=ticket_num) 
        { 
          insert_passengerList(h,PList,name,ID_num,flight_num,ticket_num); 
          printf("\t\t ????????????%6.2f.\n",p->price*p->price_discount* ticket_num); 
          getch(); 
          printf("\t\t ??????,????????!\n"); 
          return 1; 
        } 
        else 
        { 
          printf("\t\t***??????????????????!***\n"); 
          printf("\t\t***????????????????????-----1\n\t\t***??????????-----0***\n"); 
          printf("\t\t ????????????????:"); 
          scanf("%d",&k); 
          if(k==1) 
          { 
            printf("\t\t ????????????????????:\n"); 
            if(find_same_flight(h,flight_num)==1) 
            { 
              printf("\t\t ????????????????:"); 
              scanf("%s",flight_num); 
              insert_passengerList(h,PList,name,ID_num,flight_num, ticket_num); 
              printf("\t\t ??????,????????!\n"); 
              return 1; 
            } 
          } 
        } 
      } 
      else 
        p=p->next; 
    } 
    if(p==NULL) 
      printf("\t\t ??????,??????????????????!\n"); 
  } 
  return 0; 
}void cancel(passengerList *&PList,flightnode *&h) 
{ 
  char name[20],ID_num[20]; 
  printf("\t\t ??????????????:"); 
  scanf("%s",name); 
  printf("\t\t ????????????????:"); 
  scanf("%s",ID_num); 
  delete_passenger(PList,h,name,ID_num); 
}


int main() 
{ 
  char choice; 
  int t=1; 
  flightnode *flight; 
  passengerList *PList; 
  init_flight(flight); 
    init_passengerList(PList); 
  load_flight(flight); 
  load_passenger(PList); 
  while(t==1) 
  {     
              printf("\n"); 
    printf("\t\t************????????????????**************************\n"); 
    printf("\t\t******************************************************\n"); 
    printf("\t\t*                  ????????----------1               *\n"); 
    printf("\t\t*                  ??    ??----------2               *\n"); 
    printf("\t\t*                  ??    ??----------3               *\n"); 
    printf("\t\t*                  ????????----------4               *\n"); 
    printf("\t\t*                  ????????----------5               *\n"); 
    printf("\t\t*                  ????????----------6               *\n"); 
    printf("\t\t*                  ??    ??----------0               *\n"); 
    printf("\t\t******************************************************\n"); 
    printf("\t\t ??????????:"); 
    choice=getch(); 
    printf("%c\n",choice); 
    system("cls"); 
    if(choice=='1'){ 
      add_flight(flight); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='2')
	{ 
      book(flight,PList); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='3')
	{ 
      cancel(PList,flight); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='4')
	{ 
      flight_check(flight); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='5')
	{ 
      passenger_check(PList); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='6')
	{ 
      modify_flight(flight,PList); 
      getch(); 
      system("cls"); 
    }
	else if(choice=='0')
	{ 
      printf("\t\t ????!\n"); 
      t=0; 
    } 
  } 
  save_flight(flight); 
  save_passenger(PList);
  return 0;
}