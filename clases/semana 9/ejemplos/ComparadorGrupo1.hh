#include <string>

enum Orden{
    MEQ,
    IG,
    MAQ
};

class Comparador{
    public:
    virtual ~Comparador() = default;
    virtual Orden comparar(const std::string& s1, const std::string& s2) const = 0;
};