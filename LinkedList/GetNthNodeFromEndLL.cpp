int getNthFromLast(Node *head, int n)
{
  if (head == NULL)
    return -1;
  Node *ptr = head;
  int count = 0;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;
  }
  if (count < n)
  {
    return -1;
  }
  ptr = head;
  for (int i = 1; i <= count - n; i++)
  {
    ptr = ptr->next;
  }
  return ptr->data;
}
