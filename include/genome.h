#ifndef YGHT_GENOME_H
#define YGHT_GENOME_H

#include <vector>

#include "types.h"
#include "gene.h"

namespace yght {

    class Genome {
    private:
        std::vector<Gene> gene_vector;
        const uint gene_count;
        bool valid;

    public:
        Genome( const std::vector<Gene>& v)
          : gene_vector(v), gene_count(v.size())
        { }

        ~Genome() { }

        Gene   get_gene(const unsigned int i) const { return gene_vector[i]; }
        Gene operator[](const unsigned int i) const { return get_gene(i); }

        uint get_size() const { return gene_count; }

        void innovation_sort() {

        }

        /**
            The genome is sorted topologically (as a directed graph).
             If the corresponding graph is acyclic, the valid flag
             is set to true, otherwise it becomes false.
        **/
        void topological_sort() {

        }
    };

    std::ostream& operator<<(std::ostream& ostr, const Genome& g) {
        ostr << "Genome< ";

        for (uint i(0); i < g.get_size(); i++) {
            ostr << g.get_gene(i);
            if (i < g.get_size() - 1) {
                ostr << ", ";
            } else {
                ostr << " >";
            }
        }

        return ostr;
    }

} // namespace yght

#endif // YGHT_GENOME_H
