#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

        Node* insert(Node *head,int data)
        {
            Node *start = head;
            Node *newNode = new Node(data);
            if (head) {
                while (start->next)
                    start++;
                start->next = newNode;
            } else {
                head = newNode;
            }
            return head;
        }

        void display(Node *head)
        {
            Node *start=head;
            while(start)
            {
                cout<<start->data<<" ";
                start=start->next;
            }
        }
};

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    mylist.display(head);

}

//void test(double out )
//{
//    static int counter = 1;
//    double res;
//    cout << "test: " ;
//    cout.width(4);
//    cout << counter << " "
//        << (((res = solution.findMedianSortedArrays(vec1, vec2)) == out)
//                ? ("\033[0;42m\033[1;37m" "PASSED" "\033[0m")
//                : "\033[0;41m\033[1;37m" "FAILED" "\033[0m") << " "
//        << "result: ";
//    cout.width(4);
//    cout << static_cast<double>(res) << " "
//        << "solution: ";
//    cout.width(4);
//    cout << out
//        << "\n";
//    ++counter;
//}

