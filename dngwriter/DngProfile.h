//
// Created by troop on 01.03.2018.
//

#ifndef FREEDCAM_DNGPROFILE_H
#define FREEDCAM_DNGPROFILE_H

class DngProfile
{
public:
    long whitelevel;
    float *blacklevel;
    char* bayerformat;
    int rawType;
    int rawwidht, rawheight, rowSize;
    uint32_t* activearea;

    void clear()
    {
        bayerformat;
        blacklevel;
        activearea = nullptr;
    }
};

#endif //FREEDCAM_DNGPROFILE_H
