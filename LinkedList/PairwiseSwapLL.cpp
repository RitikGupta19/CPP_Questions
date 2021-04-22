listnode* swapPairs(listnode* A) {
    if(A == NULL || A->next == NULL){
        return A;
    }
    listnode *prev = A, *curr = A->next->next, *next = NULL;
    A = A->next;
    A->next = prev;
    while(curr != NULL && curr->next != NULL){
        prev->next = curr->next;
        prev = curr;
        next = curr->next;
        curr = next->next;
        next->next = prev;
    }
    prev->next = curr;
    return A;
}
