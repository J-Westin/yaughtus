#ifndef YGHT_GENE_H
#define YGHT_GENE_H

#include <ostream>

#include "types.h"

namespace yght {

    class Gene {
    private:
        const uint innovation;
        const uint node_in;
        const uint node_out;
        const bool enabled;
        const float weight;

    public:
        Gene(
            const uint innovation,
            const uint node_in,
            const uint node_out,
            const bool enabled,
            const float weight
        )
          : innovation(innovation),
            node_in(node_in),
            node_out(node_out),
            enabled(enabled),
            weight(weight)
        { }

        Gene(const Gene& g)
          : innovation(g.get_innovation()),
            node_in(g.get_node_in()),
            node_out(g.get_node_out()),
            enabled(g.get_enabled()),
            weight(g.get_weight())
        { }

        ~Gene() {}

        uint  get_innovation() const { return innovation; }
        uint  get_node_in()    const { return node_in;    }
        uint  get_node_out()   const { return node_out;   }
        bool  get_enabled()    const { return enabled;    }
        float get_weight()     const { return weight;     }
    };

    std::ostream& operator<<(std::ostream& ostr, const Gene& g) {
        return ostr <<
            "Gene< " <<
                "innov. "    << g.get_innovation() <<
                ", in " << g.get_node_in() <<
                ", out " << g.get_node_out() <<
                ", " << (g.get_enabled() ? "enabled" : "disabled") <<
                ", weight "  << g.get_weight() <<
            " >";
    }

} // namespace yght

#endif // YGHT_GENE_H
