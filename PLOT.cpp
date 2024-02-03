#include <iostream>

void plotLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = static_cast<float>(dx) / static_cast<float>(steps);
    float yIncrement = static_cast<float>(dy) / static_cast<float>(steps);

    float x = x1, y = y1;

    std::cout << "Plotting line from (" << x1 << "," << y1 << ") to (" << x2 << "," << y2 << "):" << std::endl;

    for (int i = 0; i <= steps; ++i) {
        std::cout << "(" << static_cast<int>(x + 0.5) << "," << static_cast<int>(y + 0.5) << ")" << std::endl;

        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    // Example: Plotting a line from (1, 1) to (8, 5)
    plotLine(1, 1, 8, 5);

    return 0;
}
