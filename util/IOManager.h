#ifndef MPC_ML_IOMANAGER_H
#define MPC_ML_IOMANAGER_H
#include <cassert>
#include "../Mat.h"
#include "../Constant.h"
extern int node_type;
class IOManager {
public:
    static Mat train_data, train_label;
    static Mat test_data, test_label;
    static void load(ifstream& in, Mat& data, Mat& label, int size);
    static void secret_share(Mat& data, Mat& label, string category);
    static void load_ss(ifstream& in, Mat& data, Mat& label, int size);
    static Mat* secret_share_ngram(int* data, int size, string prefix);
    static Mat load_secret_share_ngram(int* data, int size);
    static Mat load_secret_share_ngram(double* data, int size);
    static Mat* secret_share_vector(double* data, int size);
    static Mat* secret_share_kv_data(Mat &data, int size, string prefix, bool isFreq);
    static Mat* secret_share_mat_data(Mat &data, int size, string prefix);
    static void init();
};


#endif //MPC_ML_IOMANAGER_H
