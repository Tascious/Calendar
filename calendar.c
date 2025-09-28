# include<stdio.h>

int Firstday(int year){
int day = ((year-1)*365 +(year-1)/4 -((year-1)/100 + year/400))%7;
return day;}

int main(){
int year,week,day,month,dayinmonth;
printf(" veuillez entrer l_annee: ");
scanf("%d",&year);
char *months[]={"jan","feb","mar","apr","may","jun","july","aug","sept","oct","nov","dec"};
int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
int starting_day = Firstday(year);
if ((year%4==0 && year%100!=0)|| year%400==0)
    monthdays[1]=29;
for(month = 0;month< 12;month++){
    dayinmonth = monthdays[month];
    printf("\n\n          %s        ",months[month]);
    printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n ");
    for(week=0;week<=starting_day;week++)
        printf("    ");
    for(day = 1 ; day<= dayinmonth;day++ )
    {
    printf("%5d",day);
if(++week> 6){
            printf("\n");
            week= 0;
    }  starting_day = week;
    }
}
return 0;

}
