# Backtests using Worldquant BRAIN

## Worldquant BRAIN

[BRAIN](https://platform.worldquantbrain.com/) is a backtesting framework from Millenium's [Worldquant](https://www.worldquant.com/).

This plateform uses "Fast expression" as a programming language. It's very efficient to design quant trading strategies.

One of the most fascinating aspects of this platform is how easily backtests can be performed. It allows users to quickly evaluate different strategies on historical data, providing valuable insights into their robustness. This makes it simple to identify which strategies have the potential to succeed in real-world market conditions, offering a powerful environment for refining and validating trading ideas before implementation.

I'm sharing here some of the ones I've designed.

## Price reversal

### Implementation 
<img width="300" alt="image" src="https://github.com/user-attachments/assets/590e7fc3-e572-45ce-a9f8-160ef0a996b9" />

I implemented a [mean reversal strategy](/mean%20reversal%20strategy.cpp). 
This strategy is designed to detect mean reversion opportunities by comparing the current price (close) to its short-term average (ts_mean(close, 5)). The signal is calculated as the difference between the current price and the 5-day moving average, which captures the deviation from the short-term trend. The time-series rank (ts_rank(signal, 252)) ranks the signal over the past 252 days, identifying extreme deviations. A negative rank is applied to emphasize a reversion: high deviations are expected to decrease, while low deviations are expected to rise, reflecting potential trading opportunities.


### Results

<img width="581" alt="image" src="https://github.com/user-attachments/assets/12fad222-5e12-49b6-a782-8bfe3fe7b4fb" />


As in machine learning the data is splitted into two parts : a part of the data is used to train the model and the other one is used to test the model. Here we see the train part in blue and the test part in orange.

The plateform provides some metrics to evaluate the alphas. Here is the list of the results of my alpha, I need to improve my fitness because it is below 1 but all the other metrics are good.


<img width="578" alt="image" src="https://github.com/user-attachments/assets/632fd81a-c2e2-4f36-b773-1948782f36e6" />



