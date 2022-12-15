#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct OnlineMeanVar{
    double meanA;
    double vari;
    double countof;
    double M2;
};

// struct OnlineMeanVar* Update(double newvalue, struct OnlineMeanVar current) {
//     struct OnlineMeanVar *temp = malloc(sizeof(struct OnlineMeanVar));
//     temp->countof = current.meanA + 1;
//     double delta = newvalue - current.meanA;
//     temp->meanA = current.meanA + (delta / current.countof);
//     double delta2 = newvalue - temp->meanA;
//     temp->M2 = current.M2 + (delta * delta2);
//     return temp;
    
// }
// struct OnlineMeanVar Update(double newvalue, struct OnlineMeanVar current) {
//     current.countof = current.meanA + 1;
//     double delta = newvalue - current.meanA;
//     current.meanA = current.meanA + (delta / current.countof);
//     double delta2 = newvalue - current.meanA;
//     current.M2 = current.M2 + (delta * delta2);
//     return current;
    
// }

struct OnlineMeanVar* Update(double newvalue, struct OnlineMeanVar current) {
    struct OnlineMeanVar *temp = malloc(sizeof(struct OnlineMeanVar));
    current.countof += 1;
    double delta = newvalue - current.meanA;
    current.meanA += (delta / current.countof);
    double delta2 = newvalue - current.meanA;
    current.M2 += (delta * delta2);
    temp->meanA = current.meanA;
    temp->vari = current.vari;
    temp->countof = current.countof;
    temp->M2 = current.M2;
    return temp;
    
}

void Update2(struct OnlineMeanVar current) {
    current.meanA = 2.2;
}
    

void hello_world() {
    printf("hello world\n");
}

int add2(int x) {
    return x + 2;
}

double multiplicativescience() {
    double x;
    while (x < 10000000) {
        x = x + 5;
        x = x * 1000;
        x = x * 3;
    }
    return x;
}
    