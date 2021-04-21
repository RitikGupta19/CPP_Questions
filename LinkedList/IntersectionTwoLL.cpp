Node *createNode(int data)
{
  Node *temp = new Node(sizeof(Node));
  temp->data = data;
  temp->next = NULL;
  return temp;
}

Node *findIntersection(Node *head1, Node *head2)
{
  if (head1 == NULL || head2 == NULL)
    return NULL;
  Node *ptr = head1, *qtr = head2, *h3, *rtr;
  h3 = createNode(-1);
  rtr = h3;
  while (ptr != NULL && qtr != NULL)
  {
    if (ptr->data == qtr->data)
    {
      if (rtr->data != ptr->data)
      {
        rtr->next = createNode(ptr->data);
        rtr = rtr->next;
        ptr = ptr->next;
        qtr = qtr->next;
      }
      else
      {
        ptr = ptr->next;
        qtr = qtr->next;
      }
    }
    else if (ptr->data > qtr->data)
    {
      qtr = qtr->next;
    }
    else if (ptr->data < qtr->data)
    {
      ptr = ptr->next;
    }
  }
  return h3->next;
}
