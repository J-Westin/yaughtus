#ifndef YGHT_INDIVIDUAL_H
#define YGHT_INDIVIDUAL_H

#include "genome.h"
#include "network.h"
#include "io_specs.h"

namespace yght {

    class Individual {
    private:
        const Genome genome;
        Network network;

    public:
        Individual(const Genome& g, const IOSpecs& io_specs)
          : genome(g), network(g, io_specs)
        { }

        bool is_valid() { return network.is_valid(); }

    };

} // namespace yght

#endif // YGHT_INDIVIDUAL_H
