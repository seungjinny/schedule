#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "schedule.h"

#define MAX_TYPE		7

//strings for printing the name of each enum element
//enum type's name
char type_string[MAX_TYPE][20] = 
{
	"drama",
	"movie",
	"advertisement",
	"entertainment",
	"meeting",
	"fitness",
	"privacy"
};

//month's name
char month_string[13][4] = 
{
	"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
};

//enum definitions
typedef enum scheduleType {
	drama=0, 		//드라마 
	movie, 			//영화 
	advertisement, 	//광고 
	entertainment, 	//예능 
	meeting,		//회의 
	fitness,		//운동 
	privacy			//개인사 
} scheduleType_e;



//structure definition for a schedule info.
typedef struct schedInfo
{
	char name[200];			//schedule name
	scheduleType_e type;	//schedule type
	int month;				//when : month
	int day;				//when : day
	char place[100];		//where
} schedInfo_t;


void sched_printTypes(void) 
{
	int i;
	
	for (i=0;i<MAX_TYPE;i++) {
		printf("- %s\n", i, type_string[i]);
	}
}

void sched_print(void* obj) 
{
	schedInfo_t* schedPtr = (schedInfo_t*)obj;
	
	if (schedPtr == NULL) {
		printf("[ERROR] failed to print the schedule Info! (object is NULL)\n");
	}
	
	printf("Schedule Name : %s (%s)\n", schedPtr->name, type_string[schedPtr->type]);
	printf("When : %s. %i\n", month_string[schedPtr->month], schedPtr->day);
	printf("Where : %s\n", schedPtr->place);
	
	return;
}





//generating a structure of scheduling information
void* sched_genSchedInfo(char* name, char* place, int type, int month, int day)
{
	schedInfo_t* schedPtr;
	
	//error handler

	//allocate memory and set the member variables
	
	
	return (void*)schedPtr;
}



//get month information from the scheduler info structure
float sched_getMonth(void* obj)
{
	
	printf("----------------------------------------\n");
	printf("1. Schedule Name : %s (%d)\n", ); // 내용, 유형  
	printf("2. When : %d. %d\n", month,  ); // 월, 일   
	printf("3. Where : %s\n", ); // 장소 
	
}


//get type information from the scheduler info structure
int sched_getType(void* obj)
{
	printf("----------------------------------------\n");
	
}



//get place string information from the scheduler info structure
char* sched_getPlace(void* obj)
{
	printf("----------------------------------------\n");

}

//convert the name of the type into the enum(integer) value
int sched_convertType(char* typeName)
{
	char *scheduleType_c[] = {drama, movie, advertisement, enertainment, meeting, fitness, privacy}; // 포인터 이용하여 문자열 구현 
	
	scheduleType_e = scheduleType_c[scheduleType_e]; // 0 = drama, 1= movie, 2= advertisement ... 
	  
	
}

