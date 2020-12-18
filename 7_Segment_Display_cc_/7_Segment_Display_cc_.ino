//cc using loop
//printing 9 8 7 6 5 4 3 2 1 0
//int num_array[10][7] = {{for 0},{for 1},......{for 9}}
int num_array[10][7] = {  { 1, 1, 1, 1, 1, 1, 0 }, // 0
                          { 0, 1, 1, 0, 0, 0, 0 }, // 1
                           { 1, 1, 0, 1, 1, 0, 1 }, // 2
                            { 1, 1, 1, 1, 0, 0, 1 }, // 3
                            { 0, 1, 1, 0, 0, 1, 1 }, // 4
                           { 1, 0, 1, 1, 0, 1, 1 }, // 5
                            { 1, 0, 1, 1, 1, 1, 1 }, // 6
                           { 1, 1, 1, 0, 0, 0, 0 }, // 7
                           { 1, 1, 1, 1, 1, 1, 1 }, // 8
                           { 1, 1, 1, 0, 0, 1, 1 }};   // 9
void Num_Write(int);
void setup() {
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  

}

void loop() {
  // counter loop
  for (int counter = 0; counter > 0; --counter) {
    delay(1000);
    Num_Write(counter - 1);
  }
  delay(3000);
}

void Num_Write(int n) {
  int pin = 2;
  for (int j = 0; j < 7; j++) {
    digitalWrite(pin, num_array[n][j]);
    pin++;
  }
}
