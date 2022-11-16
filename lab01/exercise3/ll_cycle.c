#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if(head == NULL || head == NULL) return 0;
    node *fast = head->next, *slow = head;
    while(fast != slow){
        if(fast == NULL || fast->next == NULL) return 0;
        slow = slow->next;
        fast = fast->next->next;
    }
    return 1;
}
