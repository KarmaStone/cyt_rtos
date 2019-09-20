/* list.h - a generic doubly linked list implementation
 */
#ifndef __PRIV_LIST_H
#define __PRIV_LIST_H 

typedef struct list_node {
    struct list_node *prev;
    struct list_node *next;
    void *value;
} list_node;

typedef struct list_iter {
    list_node *next;
    int direction;
} list_iter;

typedef struct list {
    list_node *head;
    list_node *tail;
    void *(*dup)(void *ptr);
    void (*free)(void *ptr);
    int (*match)(void *ptr, void *key);
    unsigned long len;
} list;

/* Functions implemented as macros */
#define list_length(l) ((l)->len)
#define list_first(l) ((l)->head)
#define list_last(l) ((l)->tail)
#define list_prev_node(n) ((n)->prev)
#define list_next_node(n) ((n)->next)
#define list_node_value(n) ((n)->value)

#define list_set_dup_method(l,m) ((l)->dup = (m))
#define list_set_free_method(l,m) ((l)->free = (m))
#define list_set_match_method(l,m) ((l)->match = (m))

#define list_get_dup_method(l) ((l)->dup)
#define list_get_free_method(l) ((l)->free)
#define list_get_match_method(l) ((l)->match)

/* Prototypes */
list *list_create(void);
void list_release(list *list);
list *list_add_node_head(list *list, void *value);
list *list_add_node_tail(list *list, void *value);
list *list_insert_node(list *list, list_node *old_node, void *value, int after);
void list_del_node(list *list, list_node *node);
list_iter *list_get_iterator(list *list, int direction);
list_node *list_next(list_iter *iter);
void list_release_iterator(list_iter *iter);
list *list_dup(list *orig);
list_node *list_search_key(list *list, void *key);
list_node *list_index(list *list, long index);
void list_rewind(list *list, list_iter *li);
void list_rewind_tail(list *list, list_iter *li);
void list_rotate(list *list);

/* directions for iterators */
#define START_FROM_HEAD 0
#define START_FROM_TAIL 1

#endif /* LIST_H */



