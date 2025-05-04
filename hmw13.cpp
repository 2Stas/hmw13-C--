#include <iostream>

using namespace std;

struct Vector3D {
    float x, y, z;

    Vector3D multiply(float lol) {
        return { x * lol, y * lol, z * lol };
    }

    Vector3D add(const Vector3D& vec) {
        return { x + vec.x, y + vec.y, z + vec.z };
    }

    Vector3D subtract(const Vector3D& vec) {
        return { x - vec.x, y - vec.y, z - vec.z };
    }

    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector3D v1 = { 1.0f, 2.0f, 3.0f };
    Vector3D v2 = { 4.0f, 5.0f, 6.0f };

    Vector3D sum = v1.add(v2);
    Vector3D difference = v1.subtract(v2);
    Vector3D scaled = v1.multiply(2.0f);

    cout << "Сума векторів: ";
    sum.print();

    cout << "Різниця векторів: ";
    difference.print();

    cout << "Вектор v1, помножений на 2: ";
    scaled.print();

}
