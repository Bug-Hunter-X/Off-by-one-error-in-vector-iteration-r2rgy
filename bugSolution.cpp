std::vector<int> myVector(10);
for (int i = 0; i < 10; ++i) { // Corrected: Accessing within vector bounds
  myVector[i] = i * 2; 
}

int main() {
  return 0;
}