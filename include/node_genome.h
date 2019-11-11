#ifndef YGHT_NODE_GENOME_H
#define YGHT_NODE_GENOME_H

#include <vector>

#include "types.h"

namespace yght {

    class NodeGenome {
    private:
        std::vector<uint> input_ids, hidden_ids, output_ids;

    public:
        NodeGenome() {}

        ~NodeGenome() {}

        void add_input(const uint id) { input_ids.push_back(id); }

    };

} // namespace yght

#endif // YGHT_NODE_GENOME_H
