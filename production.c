#include "production.h"
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * Function executed by the threads in the conveyor belts in the first
 * level of the hierarchy.
 */
void * conveyor_belt(void * data){
	//Code here the solution
	return NULL;
}

/*
 * Function executed by the threads in the conveyor belts in the second
 * level of the hierarchy.
 */
void * assembly_robot(void * data){
	//Code here the solution
	return NULL;
}

/*
 * Create the conveyor belt structure.
 * @return 1 if the factory is created.
 */
int load_factory(char * belts, char * robots){

	//Modify this code with your solution
	//Add the required error handling routines

	int num_belts = -1;
	int num_robots = -1;

	int capacity = -1;
	int arrival_time = -1;
	int items_to_produce = -1;
	int robot1 = -1;
	int robot2 = -1;

	int process_time = -1;
	int items_to_consume = -1;
	int belt1 = -1;
	int belt2 = -1;
	
	FILE * belt_fd = fopen(belts, "r");
	FILE * robot_fd = fopen(robots, "r");

	fscanf(belt_fd, "%d", &num_belts);
	fscanf(robot_fd, "%d", &num_robots);
			
	while(fscanf(belt_fd, "%d %d %d %d %d", &capacity, &arrival_time, &items_to_produce, &robot1, &robot2) == 5){
		printf("DEBUG - Belt %d %d %d %d %d\n", capacity, arrival_time, items_to_produce, robot1, robot2);
	}
	
	while(fscanf(robot_fd, "%d %d %d %d", &process_time, &items_to_consume, &belt1, &belt2) == 4){
		printf("DEBUG - Robot %d %d %d %d\n", process_time, items_to_consume, belt1, belt2);
	}

	return 0;
}

/*
 * Function to wait for the production to finish.
 */
void finish_production_factory(){
	//Code here the solution
}

/*
 * Launch the factory and wait for it to finish the production.
 */
int main (int argc, char ** argv){
	int result = 0;
	//DO NOT MODIFY THE MAIN
	if(argc == 3){
		if(load_factory(argv[1], argv[2])){		
			finish_production_factory();
		}else{
			printf("[ERROR] Cannot load factory\n");
			result = -1;
		}
	}else{
		printf("[ERROR] Invalid syntax: ./production <belts> <robots>\n");
		result = -2;
	}
	return result;
}

