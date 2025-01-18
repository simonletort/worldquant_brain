/*
HYPOTHESIS: If the stock price of a company has increased over the last 2 days, it may decrease in the future (time series delta of closing price today and closing price 2 days ago).

IMPLEMENTATION: If company A's stock price had increased twice as much as the stock price of another company B, the prices of both stocks may decrease in the future.  In this reversion example, stock A may not fall double stock B, though it may fall more than stock B (rank operator).

HINT TO IMPROVE THE ALPHA: Can different neutralizations and decay settings improve this signal? Under what neutralization would a reversion idea work best?
*/

-rank(close - ts_weighted_delay(close, k=0.5))
