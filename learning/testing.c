#include <stdio.h>
#include <stdlib.h>
// make a struct for list
typedef struct
{
    int value;
    struct LinkedList *next;

} LinkedList;
// create a function to add to the list
LinkedList *LinkedListAdd(LinkedList *list, int added)
{
    LinkedList *new = malloc(sizeof(LinkedList));
    new->value = added;
    new->next = list;
    return new;
}
//create a function to change element in the list
LinkedList *LinkedListChange(LinkedList *list, int changed, int new)
{
    LinkedList *pointer = list;
    while (pointer != NULL)
    {
        if (pointer->value == changed)
        {
            pointer->value = new;
            return list;
        }
        pointer = pointer->next;
    }
    return list;
}

// create a function to print the list
void LinkedListPrint(LinkedList *list)
{
    while (list != NULL)
    {
        printf("%d, ", list->value);
        list = list->next;
    }
    printf("");
}

int main()
{
    LinkedList *list = NULL;
    list = LinkedListAdd(list, 1);
    list = LinkedListAdd(list, 2);
    list = LinkedListAdd(list, 3);
    list = LinkedListAdd(list, 4);
    list = LinkedListAdd(list, 5);
    list = LinkedListAdd(list, 6);
    list = LinkedListAdd(list, 7);
    list = LinkedListAdd(list, 8);
    list = LinkedListAdd(list, 9);
    list = LinkedListAdd(list, 10);
    LinkedListPrint(list);

    return 0;
}