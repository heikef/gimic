#ifndef GIMIC_INTERFACE_H
#define GIMIC_INTERFACE_H

class GimicInterface {
    public:
        GimicInterface(const char *mol, const char *xdens);
        virtual ~GimicInterface();
        void set_uhf(int uhf);
        void set_magnet(double b[3]);
        void set_spin(char *s);
        void set_screening(double thrs);
        void calc_jtensor(double r[3], double jt[9]);
        void calc_jvector(double r[3], double jv[3]);
        void calc_divj(double r[3], double dj);
        void calc_edens(double r[3], double ed);
};
#endif