ListNode *deleteDuplicates(ListNode *head)
{
  if (head == NULL || head->next == NULL)
    return head;
  ListNode *prev = create(-1);
  ListNode *dummy = prev;
  ListNode *cur = head;
  prev->next = cur;
  while (cur && cur->next)
  {
    if (cur->data == cur->next->data)
    {
      while (cur->next && cur->data == cur->next->data)
      {
        ListNode *tmp = cur;
        cur = cur->next;
        free(tmp);
      }
      prev->next = cur->next;
      free(cur);
      cur = prev->next;
    }
    else
    {
      prev = cur;
      cur = cur->next;
    }
  }
  return dummy->next;
}
