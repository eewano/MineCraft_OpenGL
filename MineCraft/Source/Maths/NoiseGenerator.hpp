#ifndef NoiseGenerator_hpp
#define NoiseGenerator_hpp

struct NoiseParameters {
    int octaves;
    int amplitude;
    int smoothness;
    int heightOffset;

    double roughness;
};

class NoiseGenerator {
public:
    NoiseGenerator(int seed);

    double getHeight(int x, int z, int chunkX, int chunkZ) const noexcept;

    void setParametars(const NoiseParameters &params) noexcept;

private:
    double getNoise(int n) const noexcept;

    double getNoise(double x, double z) const noexcept;

    double lerp(double a, double b, double z) const noexcept;

    double noise(double x, double z) const noexcept;

    NoiseParameters m_noiseParameters;

    int m_seed;
};

#endif /* NoiseGenerator_hpp */
