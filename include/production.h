#ifndef _FACTORY_
#define _FACTORY_

/*
 * Create the conveyor belt structure.
 * @return 1 if the factory is created.
 */
int load_factory(char * belts, char * robots);

/*
 * Function executed by the threads in the conveyor belts in the first
 * level of the hierarchy.
 */
void * conveyor_belt(void * data);

/*
 * Function executed by the threads in the assembly robots in the second
 * level of the hierarchy.
 */
void * assembly_robot(void * data);

/*
 * Function to wait for the production to finish.
 */
void finish_production_factory();

#endif

