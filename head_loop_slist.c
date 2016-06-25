/** =====================================================================================
 *
 *       Filename:  head_loop_slist.c
 *
 *    Description:  有头循环单链表
 *
 *        Version:  1.0
 *        Created:  25/06/2016 06:20:41
 *       Revision:  none
 *       Compiler:  gcc
<<<<<<< HEAD
 *         Author:  Azalea, 
=======
 *         Author:  Azalea,
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
 *   Organization:   =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int elem_t;

struct node_info {
<<<<<<< HEAD
	elem_t data;
	struct node_info *next;
=======
    elem_t data;
    struct node_info *next;
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
};

int slist_add_tail(struct node_info *phead, elem_t data)
{
<<<<<<< HEAD
	assert(phead != NULL);
	struct node_info *pnode = (struct node_info *)malloc(sizeof(*pnode));
	if(pnode == NULL){
		fprintf(stderr,"Error:Out of memory\n");
		return -1;
	}
	pnode->data = data;

	struct node_info *tail;//go to the tail node
	for(tail = phead->next; tail->next != phead; tail = tail->next){
		;
	}
	pnode->next = tail->next;
	tail->next = pnode;
	return 0;
=======
    assert(phead != NULL);
    struct node_info *pnode = (struct node_info *)malloc(sizeof(*pnode));
    if(pnode == NULL){
        fprintf(stderr,"Error:Out of memory\n");
        return -1;
    }
    pnode->data = data;
    
    struct node_info *tail;//go to the tail node
    for(tail = phead->next; tail->next != phead; tail = tail->next){
        ;
    }
    pnode->next = tail->next;
    tail->next = pnode;
    return 0;
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
}

void slist_for_each(const struct node_info *phead)
{
<<<<<<< HEAD
	const struct node_info *cur =NULL;
	for (cur = phead->next;cur != phead;cur = cur->next) {
		printf("%d  ",cur->data);
	}
	printf("\n");
=======
    const struct node_info *cur =NULL;
    for (cur = phead->next;cur != phead;cur = cur->next) {
        printf("%d  ",cur->data);
    }
    printf("\n");
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
}

int slist_del(struct node_info *phead, elem_t key_data)
{
<<<<<<< HEAD
	struct node_info *cur = NULL;
	struct node_info *Prev = phead;
	struct node_info *Next = NULL;
	for (cur = phead->next; cur != phead; cur = Next) {
		Next = cur->next;
		if (cur->data == key_data) {
			Prev->next = Next;
			cur->next = NULL;
			free(cur);
			return 0;
		}
		Prev = cur;
	}
	return -1;
=======
    struct node_info *cur = NULL;
    struct node_info *Prev = phead;
    struct node_info *Next = NULL;
    for (cur = phead->next; cur != phead; cur = Next) {
        Next = cur->next;
        if (cur->data == key_data) {
            Prev->next = Next;
            cur->next = NULL;
            free(cur);
            return 0;
        }
        Prev = cur;
    }
    return -1;
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
}

struct node_info *slist_find(const struct node_info *phead, elem_t key_data)
{
<<<<<<< HEAD
	struct node_info *cur = NULL;
	for (cur = phead->next; cur != phead; cur = cur->next){
		if (cur->data == key_data) {
			return cur;
		}
	}
	return NULL;
}
int main(void)
{
	int s[] = {1, 3, 5, 7, 9, 11};
	struct node_info head = {0, &head};
	int i;
	for (i =0; i < (sizeof s / sizeof s[0]); ++i) {
		slist_add_tail(&head,s[i]);
	}
	slist_for_each(&head);
	slist_del(&head,5);
	slist_for_each(&head);
	struct node_info *val = slist_find(&head,5);
	if (val == NULL) {
		fprintf(stderr,"record not found. \n");
	} else {
		printf("found %d\n", val->data);
	}
	return 0;
}
=======
    struct node_info *cur = NULL;
    for (cur = phead->next; cur != phead; cur = cur->next){
        if (cur->data == key_data) {
            return cur;
        }
    }
    return NULL;
}
int main(void)
{
    int s[] = {1, 3, 5, 7, 9, 11};
    struct node_info head = {0, &head};
    int i;
    for (i =0; i < (sizeof s / sizeof s[0]); ++i) {
        slist_add_tail(&head,s[i]);
    }
    slist_for_each(&head);
    slist_del(&head,5);
    slist_for_each(&head);
    struct node_info *val = slist_find(&head,5);
    if (val == NULL) {
        fprintf(stderr,"record not found. \n");
    } else {
        printf("found %d\n", val->data);
    }
    return 0;
}
>>>>>>> a7238dfe77407c0e334b9dd178689867aed2febf
