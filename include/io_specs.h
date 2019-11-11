#ifndef YGHT_IO_SPECS_H
#define YGHT_IO_SPECS_H

namespace yght {

    class IOSpecs {
    private:
        const std::vector<uint> input_ids, output_ids;

    public:
        IOSpecs(const std::vector<uint>& v_in, const std::vector<uint>& v_out)
          : input_ids(v_in), output_ids(v_out)
        { }
    };

} // namespace yght

#endif // YGHT_IO_SPECS_H
