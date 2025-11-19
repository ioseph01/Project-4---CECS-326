/*
 * Priority scheduling
 */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

#include "task.h"
#include "list.h"
#include "cpu.h"

/*
 * Your code and design here:
 */

 

 struct node *head = NULL;
 struct node *tail = NULL;

// add a task to the list 
void add(char *name, int priority, int burst) {

    struct task *newTask = malloc(sizeof(struct task));
    newTask->name = name;
    newTask->burst = burst;
    // to whoever is going to work on this later, we can either sort it or insert it in order


}

// invoke the scheduler
void schedule() {
    for (struct node *toRun = head; toRun; toRun = toRun->next) {
        run(toRun->task, toRun->task->burst);
        delete(&head, toRun->task);
    }
}
