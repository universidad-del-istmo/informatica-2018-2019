class Pixel{
    public:
    Pixel(double _x, double _y): x(_x), y(_y) {}

    double x;
    double y;

    Pixel operator+(const Pixel& otro) const;

    Pixel operator-(const Pixel& otro) const;

    Pixel operator*(const double otro) const;
};