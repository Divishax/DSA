#include <linked_list.h>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*prev=dummy,*forw=dummy;
        
        while(n--){
            forw=forw->next;
        }
        while(forw->next){
            forw=forw->next;
            prev=prev->next;
        }
        
        prev->next=prev->next->next;
        return dummy->next;
    }
};