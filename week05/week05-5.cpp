bool isPalindrome(struct ListNode* head) {
    int a[100001];
    int N=0;
    while(true){
        if(head==NULL) break;
        a[N++] = head->val;
        head = head->next;
    }
    for(int i=0;i<N/2;i++){
        if(a[i]!=a[N-i-1]){
            return false;
        }
    }
    return true;
}
