#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
    float r,g,b;
    float a;
    bool isOn;
};

class Sculptor
{
protected:
    Voxel ***v;
    int nx,ny,nz;
    float r,g,b,a;

public:
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void writeOFF(char* filename);
};

#endif // SCULPTOR_H

