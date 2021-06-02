class Solution
{
public:
  //Function to remove a loop in the linked list.
  void removeLoop(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
        break;
    }
    // cout<<slow->data<<" "<<fast->data;
    if (slow != fast)
      return;
    slow = head;
    if (slow == fast)
    {
      while (fast->next != slow)
      {
        fast = fast->next;
      }
    }
    else
    {
      while (slow->next != fast->next)
      {
        slow = slow->next;
        fast = fast->next;
      }
    }
    fast->next = NULL;
  }
};
