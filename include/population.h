#ifndef YGHT_POPULATION_H
#define YGHT_POPULATION_H

namespace yght {

    class Population {
    private:
        std::vector<Individual> individual_vector;

    public:
        Population();

        ~Population();
    };

} // namespace yght

#endif // YGHT_POPULATION_H
