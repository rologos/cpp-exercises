#include <cstdio>

void read_from(const char* letters, size_t n_chars){
  for (int i = 0; i < n_chars - 1; i++) {
    printf("letter in position %d is %c\n",i,letters[i]);
  }
}

void write_to(char* letters, int i, char c, size_t n_chars) {
  if (i > n_chars - 1) return ;
  letters[i] = c;
  return;
}

int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = upper; // Equivalent: &upper[0]

  lower[3] = 'd'; // lower now contains a b c d e \0
  upper_ptr[3] = 'D'; // upper now contains A B C D E \0

  char letter_d = lower[3]; // letter_d equals 'd'
  char letter_D = upper_ptr[3]; // letter_D equals 'D'

  printf("lower: %s\nupper: %s\n", lower, upper);
  read_from(upper, sizeof(upper)/sizeof(char));
  write_to(upper,0,'Z', sizeof(upper)/sizeof(char));
  printf("lower: %s\nupper: %s\n", lower, upper);
}
