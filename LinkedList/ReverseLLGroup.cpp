class Solution
{
public:
  struct node *reverse(struct node *head, int k)
  {
    // Complete this method
    if (head == NULL || head->next == NULL || k == 1)
      return head;
    int count = 0;
    struct node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL && count < k)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      count++;
    }
    if (next != NULL)
    {
      struct node *newHead = reverse(curr, k);
      head->next = newHead;
    }
    return prev;
  }
};
