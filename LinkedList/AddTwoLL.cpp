class Solution
{
public:
  struct Node *reverse(struct Node *head)
  {
    if (head == NULL || head->next == NULL)
      return head;
    struct Node *prev = NULL;
    struct Node *curr = head;
    while (curr != NULL)
    {
      struct Node *nxt = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nxt;
    }
    return prev;
  }

  struct Node *create(int data)
  {
    struct Node *temp = new Node(data);
    temp->next = NULL;
    return temp;
  }
  //Function to add two numbers represented by linked list.
  struct Node *addTwoLists(struct Node *first, struct Node *second)
  {
    if (first == NULL)
      return second;
    if (second == NULL)
      return first;
    struct Node *h1, *h2, *h3, *ptr;
    h3 = create(-1);
    ptr = h3;
    h1 = reverse(first);
    h2 = reverse(second);
    int sum = 0, carry = 0;
    while (h1 != NULL && h2 != NULL)
    {
      sum = h1->data + h2->data + carry;
      ptr->next = create(sum % 10);
      carry = sum / 10;
      ptr = ptr->next;
      h1 = h1->next;
      h2 = h2->next;
    }
    while (h1 != NULL)
    {
      sum = h1->data + carry;
      ptr->next = create(sum % 10);
      carry = sum / 10;
      ptr = ptr->next;
      h1 = h1->next;
    }
    while (h2 != NULL)
    {
      sum = h2->data + carry;
      ptr->next = create(sum % 10);
      carry = sum / 10;
      ptr = ptr->next;
      h2 = h2->next;
    }
    if (carry)
    {
      ptr->next = create(carry);
      // ptr = ptr->next;
    }
    return reverse(h3->next);
  }
};
