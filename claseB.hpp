#ifndef CLASE_B
#define CLASE_B

// #include <cstdio>

class claseB
{
public:
    /**
     * @brief constructor
     */
    claseB();

    /**
     * @brief destructor
     */
    ~claseB();

    /**
     * @brief overloaded public function with int parameter
     */
    void suma(double n, double m);

    /**
     * @brief overloaded public function with float parameter
     */
    void hola(float f);

    void encenderled(void);

private:
    /**
     * @brief private function
     */
    void greet(void);
};

/** @} */
#endif /* CPP_CLASS_H */
