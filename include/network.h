#ifndef YGHT_NETWORK_H
#define YGHT_NETWORK_H

#include <vector>

#include "genome.h"
#include "io_specs.h"
#include "utilities.h"

namespace yght {

    class Network {
    private:
        const IOSpecs io_specs;
        bool valid;
        std::vector<Gene> gene_vector_ordered;

    public:
        Network(const Genome& g, const IOSpecs& io_specs);
        ~Network();

        bool is_valid() { return valid; }

        std::vector<float> evaluate(std::vector<float> v_in) {}
    };

    Network::Network(const Genome& g, const IOSpecs& io_specs)
        io_specs(io_specs)
    {

    }

    Network::~Network() {}

} // namespace yght

#endif // YGHT_NETWORK_H
