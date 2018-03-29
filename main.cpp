#include <iostream>

using namespace std;

class predator
{
    public:
        predator()
        {
            preint=0;
        }
    private:
        int preint;
    friend void prefriend(predator &pdo);
};
void prefriend(predator &pdo)
{
    pdo.preint=10;
    cout<<pdo.preint<<endl;
}
int main()
{
    predator tumi;
    prefriend(tumi);
    return 0;
}
