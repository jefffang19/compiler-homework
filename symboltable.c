#include <stdio.h>
#include <string.h>
#define IDLISTSIZE 100
#define IDLEN 100
#define STACKSIZE 50

struct st_func{
	int size;
	char scope_name[IDLEN];
	char idlist[IDLISTSIZE][IDLEN];
};
typedef struct st_func ST;

struct mystack{
	int size;
	ST list[STACKSIZE];
}table;
typedef struct mystack STACK;

void into_scope(char str[]){
	table.size++;
	table.list[table.size-1].size=0;
	strcpy(table.list[table.size-1].scope_name,str);
}

void add_id(char str[]){
	table.list[table.size-1].size++;
	strcpy(table.list[table.size-1].idlist[table.list[table.size-1].size-1],str);
}

void out_scope(){
	table.list[table.size-1].size = 0;
	table.size--;
}

void print_current(){
	int cur_size = table.list[table.size-1].size, i;
	printf("scope: %s\nid size: %d\n",table.list[table.size-1].scope_name,cur_size);
	for(i=0;i<cur_size;++i){
		printf("%s\n",table.list[table.size-1].idlist[i]);
	}
	printf("\n");
}

int check_sameid(char str[]){
	int cur_size = table.list[table.size-1].size, i;
	for(i=0;i<cur_size;++i){
		if(strcmp(table.list[table.size-1].idlist[i],str)==0) return 1;
	}
	return 0;
}
		
int main(){
	table.size = 0;
	into_scope("main");
	add_id("hihi");
	print_current();
	printf("%d\n",check_sameid("a"));
	into_scope("hello");
	add_id("a");
	add_id("b");
	add_id("hihi");
	print_current();
	printf("%d\n",check_sameid("a"));
	out_scope();
	into_scope("test");
	add_id("a");
	print_current();
	return 0;
}
	
