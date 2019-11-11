#ifndef YGHT_NETWORK_H
#define YGHT_NETWORK_H

#include <vector>

#include "genome.h"
#include "utilities.h"

namespace yght {

    class Network {
    private:


    public:
        Network(const Genome& g);
        ~Network();
    };

    Network::Network(const Genome& g) {

    }

    Network::~Network()

} // namespace yght

#endif // YGHT_NETWORK_H
