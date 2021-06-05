listnode *reverse(listnode *head)
{
  listnode *prev = NULL;
  listnode *curr = head;

  while (curr)
  {
    listnode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

listnode *reverseBetween(listnode *A, int B, int C)
{
  if (B == C)
    return A;
  int i = 1;
  listnode *revs_prev, *revend, *revstart, *curr = A;
  listnode *revend_next;
  while (curr != NULL && i <= C)
  {
    if (i < B)
      revs_prev = curr;
    if (i == B)
      revstart = curr;
    if (i == C)
    {
      revend = curr;
      revend_next = curr->next;
    }
    curr = curr->next;
    i++;
  }

  revend->next = NULL;

  revend = reverse(revstart);
  if (revs_prev)
    revs_prev->next = revend;

  else
    A = revend;

  revstart->next = revend_next;
  return A;
}
