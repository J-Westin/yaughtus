#include <iostream>

#include "test_parse.h"

//#include "gene.h"
//#include "genome.h"

int main() {

    yght::Gene g = yght::Gene(0,11,2, false, 5);
    yght::Gene h = yght::Gene(0,11,2, false, 5);

    yght::Genome gnm({g, g});

    return 0;
}
