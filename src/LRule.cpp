#include "LRule.h"

LRule::LRule(string pre, string succ) {
    predecessor = pre;
    successor = succ;
}

void LRule::print() {
    cout << "\t\t\t\t" << predecessor << "->" << successor << endl;
}

bool operator == (LRule &rule1, LRule &rule2) {
    return (rule1.predecessor == rule2.predecessor && rule1.successor == rule2.successor);
}