int lenList(Node *head){
    Node *ptr = head;
    int len = 0;
    while(ptr != NULL){
        ptr = ptr->next;
        len++;
    }
    return len;
}
int intersectPoint(Node* head1, Node* head2)
{
    if(head1 == NULL || head2 == NULL)
        return -1;
    int len1 = lenList(head1);
    int len2 = lenList(head2);
    // cout<<len1<<" "<<len2<<endl;
    Node *ll, *ptr;
    if(len1 >= len2){
        ll = head1;
        ptr = head2;
    }
    else{
        ll = head2;
        ptr = head1;
    }
    int diff = abs(len1 - len2);
    int i = 1;
    while(i <= diff){
        ll = ll->next;
        i++;
    }
    while(ptr != NULL && ll != NULL){
        if(ptr == ll)
            return ptr->data;
        ptr = ptr->next;
        ll = ll->next;
    }
    return -1;
}
