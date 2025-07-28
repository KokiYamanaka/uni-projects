-

## DASC6510/STAT4990 Time Series and Forecasting Project : Determining the Optimal Forecasting Model for the Dow Jones Industrial Average (DJI) 
This repository contains final term project for the course DASC6510_STAT4990. 


## Abstract  
Abstract - This paper presents a comprehensive analysis of the forecasting techniques applied to
the DOW Jones Industrial Average (DJI), a leading equity index comprising 30 prominent
companies in the United States[1]. The study focuses on utilizing various methods, including
benchmark, ARIMA, neural network, EWMA, Prophet, regression, and dynamic regression, to
predict the future movements of the DJI based on a three-year daily closing price dataset. In
addition, external factors such as the company that constitutes for DJI and other big markets
indexes are used as predictors and tested on regression models. The investigation delves into the
realm of time series forecasting, evaluating and comparing these diverse techniques with
real-world data. Our primary objective is to identify the most accurate forecasting method for the
DJI. Specifically, three models—the naive model, a dynamic regression model, and an EWMA
model were selected for an in-depth comparison, aiming to determine the technique with the
lowest forecasting error in our scenario. Initially, it seemed like the Prophet model was the most
effective in predicting the fluctuations of the DJI. To conclude, we analyzed more on RMSE and
visualization for NAÏVE, Dynamic and Prophet models and decided that the NAÏVE method is
the best and most reasonable forecast method for the DJI

## Descriptions of files 

1. The `group_stat4990_project_paper_.pdf` contains the main paper. 

2. The `R` file houses all the experiments conducted for this project. 

Each different file contains tests with various models. In each file, it contains a pdf version of Rmarkdown code.  
1.  `Benchmark_neural_Kumari` : Benchmark(Naive,Drift,Mean), ARIMA, neural network
2. `Prophet_ewma` : EWMA, Prophet
3. `Dynamic_Linear_Koki` : Dynamic regression and simple linear regression
     - `visa_predictors.pdf` :  TSLM and DR ARIMA(0,1,0) on visa predictor 
     - `big_market_predictorss.pdf` : DR - ARIMA(3,1,3), DR - ARIMA(0,1,1), DR - ARIMA(0,1,3) on big market predictors 

 
  
## Requirements/installation 
1. To install and load time series packages in Rstudio 
   ```sh
   install.packages('tsibble') / library(tsibble) 
   ```
2. Some key packages includes.
   ```sh
   - quantmod : Downloading financial data from Yahoo, dplyr :  Employing the pipe operator (%>%) for seamless data manipulation,  tsibble:  Structuring and manipulating time series data efficiently.
   - ggplot2 : Employing autoplot for quick and convenient plotting, fable : Utilizing the model() function for time series modeling
   ```
   
## Authors
Alisa Dmitrieva, Koki Yamanaka, Kumari Herath
