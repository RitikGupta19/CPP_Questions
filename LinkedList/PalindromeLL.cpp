Node *reverse(Node *prev, Node *head)
{
  Node *curr = head;
  while (curr != NULL)
  {
    Node *nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;
  }
  return prev;
}

bool isPalindrome(Node *head)
{
  if (head == NULL)
    return false;
  if (head->next == NULL)
    return true;
  if (head->data != head->next->data && head->next->next == NULL)
    return false;
  Node *slow = head, *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  Node *rev = reverse(slow, slow->next);
  Node *ptr = head;
  while (ptr != slow)
  {
    if (ptr->data != rev->data)
      return false;
    ptr = ptr->next;
    rev = rev->next;
  }
  return true;
}
