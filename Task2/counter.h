#pragma once

class Counter {
private:
    int value;

public:
    Counter();
    Counter(int initialValue);
    void increment();
    void decrement();
    int getValue() const;
};
