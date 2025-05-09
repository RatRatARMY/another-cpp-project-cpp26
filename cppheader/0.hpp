#ifndef INC_0_HPP
#define INC_0_HPP
namespace something {
    void somethingforabcxyz();
    class abc {
    public:
        static void somethingabc();
        void abcsomething();
    };
}
namespace sys {
    class out {
    public:
        static void printf(const char* format,...);
    };
    template<typename T>
    void xoa_con_tro(T* con_tro) {
        delete con_tro;
    }
}
#endif //INC_0_HPP
