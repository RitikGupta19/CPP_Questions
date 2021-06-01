class Solution
{
public:
  //Function to remove duplicates from unsorted linked list.
  Node *removeDuplicates(Node *head)
  {
    if (head == NULL || head->next == NULL)
      return head;
    map<int, int> m;
    Node *ptr = head, *qtr = NULL;
    while (ptr != NULL)
    {
      if (m[ptr->data] >= 1)
      {
        qtr->next = ptr->next;
        ptr->next = NULL;
        delete (ptr);
        ptr = qtr->next;
      }
      else
      {
        qtr = ptr;
        m[ptr->data]++;
        ptr = ptr->next;
      }
    }
    return head;
  }
};
