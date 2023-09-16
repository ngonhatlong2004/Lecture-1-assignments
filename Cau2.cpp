#include <bits/stdc++.h>
using namespace std;
struct dulieu {
	int hang;
	int cot;
};
struct bondiem
{
   dulieu p1, p2, p3, p4;
};
void input(bondiem& t)
{
    cin >> t.p1.hang >> t.p1.cot;
    cin >> t.p2.hang >>t.p2.cot;
    cin >> t.p3.hang >> t.p3.cot;
    cin >> t.p4.hang >> t.p4.cot;
}
int main(){
	bondiem(t);
	input(t);
	int a=t.p2.hang-t.p1.hang;
	int a1=t.p4.hang-t.p3.hang;
	int b=t.p2.cot-t.p1.cot;
	int b1=t.p4.cot-t.p3.cot;	
	if((a==a1)&(b==b1)){
			printf("NO");
		}
		else printf("MANY");
	
	
	return 0;
}
