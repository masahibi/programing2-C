#include <iostream>
#include <iomanip>  // .90 表記が表示できなかったため
using namespace std;

class Prefecture{
public:
    string name;
    int population;
    double area;

    Prefecture(string nm, int pp, double ar){
        name = nm;
        population = pp;
        area = ar;
    }

    string getName(){
        return name;
    }
    int getPopulation(){
        return population;
    }
    double getArea(){
        return area;
    }
    double getPopulationDensity(){
        return population / area;
    }
    void addPopulation(int num){
        population += num;
    }
    void print(){
        // fixed と setprecision で小数点以下の桁数指定
        cout << "[" << getName() << "]" << endl
             << "面積：" << fixed << setprecision(2) << getArea() << " km2" << endl
             << "人口：" << getPopulation() << " 人" << endl
             << "人口密度：" << getPopulationDensity() << " 人/km2" << endl;
    }
};

int main(){
    Prefecture tokyo("東京", 13506607, 2190.90);
    Prefecture kanagawa("神奈川", 9116252, 2415.81);

    tokyo.print();
    kanagawa.print();
    kanagawa.addPopulation(10000);
    kanagawa.print();
}