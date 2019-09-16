class Matrix{
    private:
        float M[3][3];
    public:
        Matrix();
        ~Matrix();
        void setValues(float newM [3][3]);
        //float** M[3][3] getValues();
        void Rotate(int D);
        void Escale(int x, int y);
        void Traslation(float x, float y);
        void Multiply(float B[3][3]);
};
