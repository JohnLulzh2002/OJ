#include<cstdio>
#include<vector>
using namespace std;
struct crd{
	crd():x(0),y(0),z(0){};
	crd(int _x,int _y,int _z) :x(_x),y(_y),z(_z){};
	int x,y,z;
};
typedef int mat[3][3];
crd mul(mat m,crd c){
	crd ans;
	ans.x=m[0][0]*c.x+m[0][1]*c.y+m[0][2]*c.z;
	ans.y=m[1][0]*c.x+m[1][1]*c.y+m[1][2]*c.z;
	ans.z=m[2][0]*c.x+m[2][1]*c.y+m[2][2]*c.z;
	return ans;
}
vector<crd> ps[13];
int main(){
	ps[0].push_back(crd(0,0,0));
	ps[0].push_back(crd(1,0,0));
	ps[0].push_back(crd(0,1,0));
	ps[0].push_back(crd(1,1,0));
	ps[0].push_back(crd(0,1,1));
	ps[0].push_back(crd(0,1,2));
	ps[0].push_back(crd(0,1,3));
	ps[1].push_back(crd(0,0,0));
	ps[1].push_back(crd(0,1,0));
	ps[1].push_back(crd(1,1,0));
	ps[1].push_back(crd(0,1,1));
	ps[1].push_back(crd(0,1,2));
	ps[2].push_back(crd(2,0,0));
	ps[2].push_back(crd(0,1,0));
	ps[2].push_back(crd(1,1,0));
	ps[2].push_back(crd(2,1,0));
	ps[2].push_back(crd(0,1,1));
	ps[3].push_back(crd(0,0,0));
	ps[3].push_back(crd(0,1,0));
	ps[3].push_back(crd(1,0,0));
	ps[3].push_back(crd(1,1,0));
	ps[3].push_back(crd(2,1,0));
	ps[3].push_back(crd(0,1,1));
	ps[3].push_back(crd(1,1,1));
	ps[4].push_back(crd(0,0,0));
	ps[4].push_back(crd(1,0,0));
	ps[4].push_back(crd(1,1,0));
	ps[4].push_back(crd(2,1,0));
	ps[4].push_back(crd(1,1,1));
	ps[4].push_back(crd(1,1,2));
	ps[5].push_back(crd(0,0,0));
	ps[5].push_back(crd(0,1,0));
	ps[5].push_back(crd(1,1,0));
	ps[5].push_back(crd(1,1,1));
	ps[6].push_back(crd(0,0,0));
	ps[6].push_back(crd(1,0,0));
	ps[6].push_back(crd(0,0,1));
	ps[7].push_back(crd(0,0,0));
	ps[7].push_back(crd(0,0,1));
	ps[8].push_back(crd(0,0,0));
	ps[8].push_back(crd(0,0,1));
	ps[8].push_back(crd(0,1,0));
	ps[8].push_back(crd(0,1,1));
	ps[8].push_back(crd(1,0,0));
	ps[8].push_back(crd(1,0,1));
	ps[8].push_back(crd(1,1,0));
	ps[8].push_back(crd(1,1,1));
	ps[9].push_back(crd(0,0,0));
	ps[9].push_back(crd(0,0,1));
	ps[9].push_back(crd(0,1,0));
	ps[9].push_back(crd(0,1,1));
	ps[9].push_back(crd(1,0,0));
	ps[9].push_back(crd(1,1,0));
	ps[9].push_back(crd(1,1,1));
	ps[10].push_back(crd(0,0,0));
	ps[10].push_back(crd(0,0,1));
	ps[10].push_back(crd(0,1,0));
	ps[10].push_back(crd(0,1,1));
	ps[10].push_back(crd(1,0,0));
	ps[10].push_back(crd(1,0,1));
	return 0;
}