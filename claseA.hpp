#ifndef CLASE_A
#define CLASE_A

// #include <cstdio>

class claseA
{
public:
    /**
     * @brief constructor
     */
    claseA();

    /**
     * @brief destructor
     */
    ~claseA();

    /**
     * @brief public function
     */
    void say_hello(void);

    /**
     * @brief overloaded public function with int parameter
     */
    void say_hello(int n);

    /**
     * @brief overloaded public function with float parameter
     */
    void say_hello(float m);
private:
    /**
     * @brief private function
     */
    void greet(void);
};

/** @} */
#endif /* CPP_CLASS_H */
