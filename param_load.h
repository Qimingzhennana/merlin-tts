#ifndef _PARAM_
#define _PARAM_
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string.h>
using namespace std;

//int matrix_mulity();
//int infer(float *input);
//normalization();
const int LAYERS = 6;
const int HIDDEN_SIZE = 1024;
const int DUR_INP_SIZE = 467;
const int DUR_OUT_SIZE = 1;
const int ACO_INP_SIZE = 471;
const int ACO_OUT_SIZE = 199;

const vector<float> DUR_LAST_LAYER_BIAS(1, 0.23915452);
const vector<float> DUR_NORM_STD(1, 8.90215);
const vector<float> DUR_NORM_MEAN(1, 21.825129);
//template <class Type>
//Type stringToNum(const string& str);

vector<float> split_line(const string&, const string&);

vector<vector<float>> load_param(string, int, int, int, int);
vector<vector<vector<float>>> load_weight(string, int, int);

const float DUR_TARGET_MAX_VALUE = 0.99;
const float DUR_TARGET_MIN_VALUE = 0.01;
const vector<float> ACO_NORM_MEAN = {5.7819867,1.9637276,0.060256626,0.7528132,-0.26837045,0.21778512,-0.1687559,0.082551524,-0.23924094,0.13852338,-0.30489787,0.19177234,-0.12894924,0.19502829,-0.07855233,0.06327994,-0.014048712,-0.06827506,0.06852853,-0.032701895,-0.0223763,0.060867418,-0.052165534,0.05260202,-0.025940066,0.025442174,-0.025640992,0.014461158,0.0027255048,-0.021186152,0.024693782,-0.026725074,0.019090934,-0.013470417,0.006644929,-0.0020663568,-0.0054045618,0.008963276,-0.012933086,0.010961579,-0.010198325,0.006168932,-0.0057565547,0.004476324,-0.0051475903,0.006545311,-0.0089964755,0.01077154,-0.011088618,0.009653679,-0.006446311,0.0018560715,0.003479034,-0.0077932305,0.009961677,-0.008889573,0.0055784215,-0.0014227456,-0.0021560008,0.0050803106,0.0058309566,0.0022794874,0.0002819974,0.00049304287,-0.00022370466,0.00030117395,-0.0001521223,-0.00016291934,-0.0002708479,-8.752075e-05,-0.00046673848,-3.8301183e-05,-0.00028002233,0.00016275726,-0.00014480406,-9.042534e-06,-0.0001240347,-8.1857324e-05,9.338067e-05,-0.00018502843,5.888859e-05,-3.2652904e-05,3.596915e-05,7.5483105e-05,-6.448308e-06,7.111894e-05,-5.5923083e-05,8.256627e-05,-1.3725894e-06,-1.4239306e-05,5.9091122e-05,-4.2054435e-05,6.588644e-05,-2.226882e-05,2.9928082e-05,2.093406e-05,-3.3855817e-05,4.994209e-05,-1.7073515e-05,6.337519e-07,2.0155325e-05,-1.7242948e-05,1.2049096e-05,2.1119251e-06,-5.534589e-06,1.1983996e-05,-1.4837854e-05,1.7885157e-05,-1.4658938e-05,7.704844e-06,6.289239e-07,-6.6345406e-06,9.8256005e-06,-1.0773967e-05,1.2267829e-05,-1.44415135e-05,1.7517475e-05,-1.8452247e-05,1.5893038e-05,-8.097686e-06,-0.00048728942,-5.9710947e-05,2.732557e-05,-2.3640529e-05,6.241531e-05,-6.250631e-06,9.745131e-06,-3.1951217e-06,7.2089592e-06,-2.4884706e-05,1.6556449e-05,-4.332588e-05,1.5059394e-05,-2.151981e-05,9.057462e-06,-9.809739e-06,-5.449833e-06,4.5410115e-06,-8.122107e-06,1.9906263e-06,-1.9729775e-06,-2.8312509e-06,9.650304e-06,6.9706056e-07,6.4630412e-06,-2.1165354e-06,3.4387754e-06,-5.384457e-07,7.8152647e-07,1.0600907e-06,-4.8625348e-06,6.03149e-06,-2.8626507e-06,2.3713249e-06,-7.290678e-07,5.9430867e-08,1.772514e-06,-2.2600198e-06,2.4690169e-06,-2.4257904e-06,5.567576e-07,-3.011491e-07,1.5319234e-06,-1.4136306e-06,2.7064283e-07,2.260478e-06,-1.8514896e-06,3.1015308e-08,-1.7566315e-07,2.4161986e-07,6.0442846e-07,-8.86743e-07,3.7720926e-07,1.1367329e-06,-1.7644143e-06,1.0762874e-06,-3.4458284e-07,-1.2808749e-07,3.5007326e-07,-5.3372304e-07,0.7156768,5.476337,-0.00076700695,-2.998186e-06,-8.437848,-4.473775,-4.7253623,-3.5210469,-3.2705672,-0.003983506,-0.0028539908,-0.0029057337,-0.002776823,-0.002615289,0.000649808,0.00036427355,0.00031134934,0.00027884668,0.00023079067};

const vector<float> ACO_NORM_STD = {1.6905621,1.0711565,0.6478821,0.5802764,0.4154632,0.322899,0.25311825,0.24986394,0.25581574,0.20322491,0.200344,0.20165646,0.17544505,0.18012366,0.15056318,0.14420596,0.14416392,0.15300483,0.13699897,0.12230659,0.1169792,0.116493404,0.10950909,0.101265356,0.09907697,0.09399387,0.090315625,0.08870297,0.08495459,0.08084372,0.07790143,0.07484408,0.0720211,0.06884635,0.06711613,0.06489729,0.064060874,0.0635758,0.061022114,0.058230523,0.057018984,0.057546463,0.056566775,0.054407846,0.052089997,0.050760586,0.050629694,0.05124541,0.051054917,0.049734138,0.047913793,0.046981964,0.046762016,0.046408083,0.04597431,0.04549364,0.045091182,0.044412926,0.043598883,0.04284234,0.29751876,0.2168674,0.14682865,0.10884814,0.09578824,0.080805264,0.07522995,0.0728054,0.06981425,0.06829714,0.06504851,0.06535093,0.059976615,0.061248958,0.05539798,0.053649537,0.052599274,0.052920338,0.05057495,0.047922157,0.045344487,0.04406605,0.04316107,0.04165016,0.040509064,0.038947556,0.037700567,0.036694266,0.035588246,0.03463744,0.03378792,0.032913357,0.032069705,0.031187467,0.03046891,0.029675651,0.029067768,0.028528761,0.02786686,0.027199628,0.0267345,0.026372824,0.025949804,0.025449356,0.024856864,0.02438001,0.024006838,0.023782734,0.023504646,0.023153853,0.022754798,0.022397205,0.022107067,0.021852337,0.021620551,0.021367371,0.021097671,0.020831041,0.020560188,0.020285401,0.338649,0.23816319,0.21644835,0.1693308,0.15634437,0.14562765,0.14190538,0.13958234,0.13568771,0.13488485,0.1315415,0.12924922,0.12421813,0.12054822,0.11545196,0.11212083,0.109540135,0.108388916,0.105067216,0.10191368,0.09797914,0.09508063,0.092961915,0.090581134,0.08809024,0.08539022,0.08287591,0.080830865,0.07865348,0.07676008,0.07513097,0.07334829,0.071805224,0.070129536,0.06865364,0.06723887,0.06594645,0.064735204,0.063439734,0.062176313,0.061207727,0.06024711,0.05925759,0.058249578,0.057232015,0.056338027,0.055500895,0.054857407,0.054182824,0.05347162,0.05274339,0.052081767,0.051446754,0.050825596,0.050267592,0.04968303,0.049121007,0.048573114,0.048022464,0.0474658,0.45109147,0.2681247,0.029182836,0.051377203,7.4364085,4.2273254,4.510312,3.241511,2.9501874,1.9609866,1.5554103,1.6856467,1.417317,1.3512702,4.4968696,4.285996,4.6997695,4.1294703,3.9803855};

const vector<float> DUR_MAX_VECTOR = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,9.0,9.0,34.0,34.0,34.0,34.0,33.0,33.0,1.0,1.0,1.0,-1.0,9.0,9.0,9.0,34.0,-1.0,-1.0,34.0,-1.0,-1.0,1.0,-1.0,-1.0,34.0,24.0,1.0,1.0};

const vector<float> DUR_MIN_VECTOR = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0};

const vector<float> ACO_MAX_VECTOR = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,9.0,9.0,34.0,34.0,34.0,34.0,33.0,33.0,1.0,1.0,1.0,-1.0,9.0,9.0,9.0,34.0,-1.0,-1.0,34.0,-1.0,-1.0,1.0,-1.0,-1.0,34.0,24.0,1.0,1.0,0.99733615,0.99733615,0.9971798,137.0};

const vector<float> ACO_MIN_VECTOR = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,0.04544578,0.45900714,0.044049866,5.0};

const vector<float> ACO_LAST_LAYER_BIAS = {-0.16264513,-0.6336839,-0.07631152,-0.17677023,-0.034006767,0.033952605,-0.18420444,0.13481076,-0.017996335,-0.1333516,0.23786616,0.10900935,0.1253982,-0.15736212,0.09095535,0.13922209,-0.0033934633,0.057546582,-0.15607423,0.1517348,-0.008001082,0.08326375,0.00991242,0.09800571,-0.051413517,0.009072266,0.13020355,-0.1802187,0.098318964,-0.06549361,-0.06868045,0.03770323,-0.003470748,-0.065396555,0.07685163,-0.07738939,0.039631363,-0.06937002,-0.002596782,0.014724618,-0.075342335,0.055601835,-0.08073918,0.05294119,-0.022403918,-0.023067247,0.053491704,-0.0801368,0.08427002,-0.07230264,0.030121733,0.02084677,-0.058395986,0.05215177,-0.013555488,-0.025657266,0.050180987,-0.060195155,0.06146887,-0.047070723,-0.0070156893,-0.110992745,-0.095657006,-0.0072113667,-0.10382804,-0.025065323,0.01081899,0.023533203,0.09054156,0.05252606,0.037612956,0.023945104,0.003762661,0.022686997,-0.024365528,0.028190747,0.013508449,-0.021822328,0.038986802,-0.0751127,0.0016119194,0.0049562017,0.0025996699,0.0063865487,0.016599981,0.032886706,0.054345578,-0.012858673,0.008997742,0.010216478,-0.0402773,0.041745145,-0.069721736,-0.0043367213,0.03243513,-0.060496118,0.041592803,-0.022800209,-0.015023299,0.017753359,-0.0109896725,-0.007453155,0.0032685888,0.0051670233,-0.01873283,0.02396646,-0.026020579,0.024017248,-0.026703697,0.026441045,-0.02288258,0.011557707,0.009095268,-0.033004634,0.042816587,-0.029833956,0.012667148,-0.0018000165,-0.005708808,0.01831724,-0.109514534,0.095600665,0.08381335,0.032424085,0.10474433,0.054832652,-0.023032434,-0.052256837,-0.028019067,-0.0437462,0.0010150708,-0.054262493,-0.036611993,0.0006180064,-0.028641604,0.0037122408,-0.018499298,-0.0064575607,0.033952523,-0.013588022,0.040571008,-0.0012214718,0.007992964,0.009872224,0.0015782283,0.009000471,0.010062724,0.023524271,-0.023008913,0.03358933,-0.0033704657,0.0018608798,0.0063524116,-0.008075193,-0.0010605986,-0.0023770607,0.0032975578,-0.019237278,0.0121220155,-0.0102890385,0.0003302966,-0.0013805495,-0.0023660448,-0.0035180512,0.0020804554,0.004715634,-0.010644523,0.0052855336,-0.0012510071,0.00094467984,-0.005465076,0.009737257,-0.010291799,0.007458932,-0.001771918,-0.004999384,0.010860944,-0.013918074,0.011787517,-0.006281527,-0.5830419,0.04853182,-0.0057735355,0.03171849,0.24020292,0.20164524,0.17199726,0.23345883,0.25604624,-0.21176824,-0.12042802,-0.08793272,-0.052966002,-0.041651614,0.025107194,0.013839468,0.018371742,0.006141533,0.0037490467};
const float CC_FEATURES[600] = {0.00088149,0.00092379,0.00096797,0.00101411,0.00106228,0.00111256,0.00116504,0.0012198,0.00127694,0.00133654,0.00139871,0.00146354,0.00153113,0.0016016,0.00167504,0.00175158,0.00183133,0.00191441,0.00200094,0.00209106,0.0021849,0.00228258,0.00238426,0.00249008,0.00260019,0.00271474,0.0028339,0.00295782,0.00308667,0.00322064,0.00335989,0.00350461,0.00365499,0.00381123,0.00397353,0.00414208,0.00431711,0.00449883,0.00468746,0.00488324,0.0050864,0.00529718,0.00551582,0.0057426,0.00597776,0.00622157,0.00647431,0.00673627,0.00700772,0.00728897,0.00758032,0.00788208,0.00819456,0.0085181,0.00885303,0.00919968,0.00955841,0.00992957,0.01031352,0.01071064,0.01112131,0.01154591,0.01198485,0.01243852,0.01290734,0.01339174,0.01389213,0.01440896,0.01494268,0.01549374,0.0160626,0.01664974,0.01725563,0.01788077,0.01852565,0.01919078,0.01987668,0.02058386,0.02131286,0.02206422,0.02283849,0.02363622,0.02445798,0.02530434,0.02617589,0.02707321,0.02799691,0.02894758,0.02992584,0.03093231,0.03196761,0.03303239,0.03412729,0.03525295,0.03641003,0.03759919,0.0388211,0.04007644,0.04136589,0.04269014,0.04404987,0.04544578,0.04687858,0.04834897,0.04985767,0.05140538,0.05299283,0.05462074,0.05628983,0.05800084,0.05975448,0.06155149,0.06339261,0.06527856,0.06721008,0.06918791,0.07121277,0.0732854,0.07540654,0.0775769,0.07979723,0.08206823,0.08439063,0.08676515,0.0891925,0.09167338,0.0942085,0.09679855,0.09944421,0.10214617,0.1049051,0.10772165,0.11059649,0.11353024,0.11652356,0.11957704,0.1226913,0.12586694,0.12910454,0.13240465,0.13576783,0.13919461,0.14268552,0.14624105,0.14986168,0.15354788,0.15730008,0.16111872,0.16500418,0.16895686,0.1729771,0.17706525,0.18122159,0.18544643,0.18974002,0.19410258,0.19853431,0.2030354,0.20760599,0.21224619,0.21695609,0.22173574,0.22658516,0.23150434,0.23649325,0.24155179,0.24667985,0.2518773,0.25714393,0.26247954,0.26788385,0.27335658,0.27889739,0.2845059,0.2901817,0.29592434,0.30173331,0.30760809,0.31354808,0.31955268,0.32562122,0.33175299,0.33794725,0.34420319,0.35051998,0.35689675,0.36333255,0.36982643,0.37637736,0.38298429,0.38964611,0.39636166,0.40312975,0.40994913,0.41681852,0.42373659,0.43070195,0.43771317,0.4447688,0.45186731,0.45900715,0.46618672,0.47340436,0.48065839,0.48794707,0.49526862,0.50262123,0.51000303,0.51741213,0.52484657,0.53230438,0.53978353,0.54728196,0.55479757,0.56232823,0.56987176,0.57742595,0.58498856,0.59255732,0.60012991,0.607704,0.61527722,0.62284715,0.63041139,0.63796747,0.6455129,0.65304519,0.66056181,0.6680602,0.6755378,0.68299201,0.69042023,0.69781983,0.70518818,0.71252261,0.71982047,0.72707908,0.73429576,0.74146782,0.74859257,0.7556673,0.76268931,0.7696559,0.77656438,0.78341204,0.79019619,0.79691415,0.80356323,0.81014077,0.81664412,0.82307063,0.82941767,0.83568263,0.84186292,0.84795597,0.85395924,0.85987019,0.86568633,0.87140519,0.87702432,0.88254132,0.88795381,0.89325944,0.89845591,0.90354095,0.90851233,0.91336786,0.91810539,0.92272283,0.92721812,0.93158925,0.93583426,0.93995125,0.94393835,0.94779377,0.95151575,0.9551026,0.95855269,0.96186443,0.96503631,0.96806688,0.97095473,0.97369854,0.97629703,0.978749,0.98105332,0.98320891,0.98521477,0.98706996,0.98877363,0.99032496,0.99172325,0.99296782,0.99405811,0.99499359,0.99577384,0.99639847,0.9968672,0.99717981,0.99733616,0.99733616,0.99717981,0.9968672,0.99639847,0.99577384,0.99499359,0.99405811,0.99296782,0.99172325,0.99032496,0.98877363,0.98706996,0.98521477,0.98320891,0.98105332,0.978749,0.97629703,0.97369854,0.97095473,0.96806688,0.96503631,0.96186443,0.95855269,0.9551026,0.95151575,0.94779377,0.94393835,0.93995125,0.93583426,0.93158925,0.92721812,0.92272283,0.91810539,0.91336786,0.90851233,0.90354095,0.89845591,0.89325944,0.88795381,0.88254132,0.87702432,0.87140519,0.86568633,0.85987019,0.85395924,0.84795597,0.84186292,0.83568263,0.82941767,0.82307063,0.81664412,0.81014077,0.80356323,0.79691415,0.79019619,0.78341204,0.77656438,0.7696559,0.76268931,0.7556673,0.74859257,0.74146782,0.73429576,0.72707908,0.71982047,0.71252261,0.70518818,0.69781983,0.69042023,0.68299201,0.6755378,0.6680602,0.66056181,0.65304519,0.6455129,0.63796747,0.63041139,0.62284715,0.61527722,0.607704,0.60012991,0.59255732,0.58498856,0.57742595,0.56987176,0.56232823,0.55479757,0.54728196,0.53978353,0.53230438,0.52484657,0.51741213,0.51000303,0.50262123,0.49526862,0.48794707,0.48065839,0.47340436,0.46618672,0.45900715,0.45186731,0.4447688,0.43771317,0.43070195,0.42373659,0.41681852,0.40994913,0.40312975,0.39636166,0.38964611,0.38298429,0.37637736,0.36982643,0.36333255,0.35689675,0.35051998,0.34420319,0.33794725,0.33175299,0.32562122,0.31955268,0.31354808,0.30760809,0.30173331,0.29592434,0.2901817,0.2845059,0.27889739,0.27335658,0.26788385,0.26247954,0.25714393,0.2518773,0.24667985,0.24155179,0.23649325,0.23150434,0.22658516,0.22173574,0.21695609,0.21224619,0.20760599,0.2030354,0.19853431,0.19410258,0.18974002,0.18544643,0.18122159,0.17706525,0.1729771,0.16895686,0.16500418,0.16111872,0.15730008,0.15354788,0.14986168,0.14624105,0.14268552,0.13919461,0.13576783,0.13240465,0.12910454,0.12586694,0.1226913,0.11957704,0.11652356,0.11353024,0.11059649,0.10772165,0.1049051,0.10214617,0.09944421,0.09679855,0.0942085,0.09167338,0.0891925,0.08676515,0.08439063,0.08206823,0.07979723,0.0775769,0.07540654,0.0732854,0.07121277,0.06918791,0.06721008,0.06527856,0.06339261,0.06155149,0.05975448,0.05800084,0.05628983,0.05462074,0.05299283,0.05140538,0.04985767,0.04834897,0.04687858,0.04544578,0.04404987,0.04269014,0.04136589,0.04007644,0.0388211,0.03759919,0.03641003,0.03525295,0.03412729,0.03303239,0.03196761,0.03093231,0.02992584,0.02894758,0.02799691,0.02707321,0.02617589,0.02530434,0.02445798,0.02363622,0.02283849,0.02206422,0.02131286,0.02058386,0.01987668,0.01919078,0.01852565,0.01788077,0.01725563,0.01664974,0.0160626,0.01549374,0.01494268,0.01440896,0.01389213,0.01339174,0.01290734,0.01243852,0.01198485,0.01154591,0.01112131,0.01071064,0.01031352,0.00992957,0.00955841,0.00919968,0.00885303,0.0085181,0.00819456,0.00788208,0.00758032,0.00728897,0.00700772,0.00673627,0.00647431,0.00622157,0.00597776,0.0057426,0.00551582,0.00529718,0.0050864,0.00488324,0.00468746,0.00449883,0.00431711,0.00414208,0.00397353,0.00381123,0.00365499,0.00350461,0.00335989,0.00322064,0.00308667,0.00295782,0.0028339,0.00271474,0.00260019,0.00249008,0.00238426,0.00228258,0.0021849,0.00209106,0.00200094,0.00191441,0.00183133,0.00175158,0.00167504,0.0016016,0.00153113,0.00146354,0.00139871,0.00133654,0.00127694,0.0012198,0.00116504,0.00111256,0.00106228,0.00101411,0.00096797,0.00092379,0.00088149};

//systhsis parameters
const int VAR_INDEX[6] = {0, 181, 184, 180, 184, 199};
const string ACO_VARS[3] = {"mgc", "lf0", "bap"};
const int OUT_DIMENSION[3] = {60, 1, 5};

const vector<float> MGC = {2.8580003,1.1473763,0.41975123,0.33672073,0.17260967,0.104263775,0.06406885,0.062431987,0.0654417,0.041300364,0.040137716,0.04066533,0.030780965,0.032444533,0.02266927,0.020795358,0.020783236,0.023410477,0.018768717,0.014958902,0.013684132,0.013570713,0.01199224,0.010254673,0.009816246,0.008834848,0.008156912,0.007868216,0.0072172824,0.0065357066,0.006068633,0.0056016357,0.0051870383,0.00473982,0.0045045745,0.0042116586,0.0041037956,0.0040418818,0.0037236984,0.003390794,0.0032511645,0.0033115954,0.0031998,0.0029602137,0.0027133678,0.002576637,0.002563366,0.002626092,0.0026066045,0.0024734845,0.0022957316,0.002207305,0.002186686,0.0021537102,0.0021136373,0.0020696712,0.0020332148,0.001972508,0.0019008626,0.0018354661,0.08851741,0.04703147,0.021558654,0.011847918,0.009175387,0.006529491,0.0056595453,0.0053006257,0.0048740297,0.0046644993,0.0042313086,0.0042707436,0.0035971943,0.0037514349,0.0030689363,0.002878273,0.0027666837,0.0028005622,0.0025578258,0.0022965332,0.0020561225,0.0019418166,0.0018628781,0.0017347359,0.0016409842,0.0015169121,0.0014213328,0.0013464692,0.0012665233,0.0011997522,0.0011416236,0.001083289,0.001028466,0.0009726581,0.0009283544,0.0008806443,0.00084493513,0.0008138902,0.0007765619,0.0007398198,0.00071473344,0.00069552584,0.0006733923,0.0006476697,0.00061786367,0.00059438485,0.00057632825,0.00056561845,0.0005524684,0.0005361009,0.00051778083,0.0005016348,0.0004887224,0.00047752462,0.00046744823,0.00045656454,0.00044511174,0.00043393226,0.00042272135,0.00041149752,0.11468315,0.056721706,0.046849888,0.028672922,0.024443561,0.02120741,0.020137137,0.01948323,0.018411154,0.018193923,0.017303167,0.01670536,0.015430143,0.014531873,0.013329156,0.012571081,0.011999041,0.011748157,0.01103912,0.010386399,0.009599913,0.009040326,0.008641917,0.008204942,0.0077598905,0.0072914893,0.006868416,0.006533629,0.0061863693,0.0058921105,0.005644663,0.005379972,0.0051559904,0.004918152,0.0047133225,0.0045210654,0.0043489346,0.0041906466,0.0040245997,0.003865894,0.0037463857,0.003629714,0.003511462,0.0033930133,0.0032755036,0.0031739734,0.0030803494,0.0030093351,0.0029357783,0.0028592143,0.0027818652,0.0027125105,0.0026467685,0.002583241,0.0025268309,0.0024684034,0.0024128733,0.0023593474,0.002306157,0.0022530023};
//const vector<float> VUV = {0.2034835};
const vector<float> LF0 = {0.07189085,0.0008516379,0.002639617};
const vector<float> BAP = {55.30017,17.870281,20.342915,10.507394,8.703606,3.8454685,2.419301,2.8414047,2.0087876,1.8259312,20.221836,18.36976,22.087833,17.052525,15.843469};
const float LOG_20 =2.9957322735;
const float INF_FLOAT = -1.0e+10;

#endif
