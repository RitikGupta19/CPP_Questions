Node *removeDuplicates(Node *head)
{
  // your code goes here
  if (head == NULL)
    return head;
  Node *ptr = head;
  while (ptr->next != NULL)
  {
    if (ptr->data == ptr->next->data)
    {
      Node *temp = ptr->next;
      ptr->next = ptr->next->next;
      temp->next = NULL;
      delete (temp);
    }
    else
      ptr = ptr->next;
  }
  return head;
}
