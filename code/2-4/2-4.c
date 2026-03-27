#include <stdio.h>
#include <ctype.h>
/*{
  version: 1,
  status: 'fail',
  max_score: 1,
  tests: [
    {
      name: 'test-2-4',
      status: 'fail',
      message: 'Output does not match expected: A - alpha:[^0].* digit:0 upper:A lower:a\n' +
        'z - alpha:[^0].* digit:0 upper:Z lower:z\n' +
        '5 - alpha:0 digit:[^0].* upper:5 lower:5\n' +
        '! - alpha:0 digit:0 upper:! lower:! Got: A -alpha:1024 digit:0 upper:A lower:a\n' +
        'z -alpha:1024 digit:0 upper:Z lower:z\n' +
        '5 -alpha:0 digit:2048 upper:5 lower:5\n' +
        '! -alpha:0 digit:0 upper:! lower:!\n' +
        '  -alpha:0 digit:0 upper:  lower:',
      test_code: './a <stdin>',
      filename: '',
      line_no: 0,
      execution_time: '0.002s',
      score: 0
    }
  ]
}*/
int main(){
  char chars[] ={'A', 'z' ,'5', '!', ' '};
  int n = sizeof(chars)/sizeof(chars[0]);
  for(int i=0; i<n; i++){
    char ch = chars[i];
    printf("%c - alpha:%d digit:%d upper:%c lower:%c\n",ch,isalpha(ch),isdigit(ch),toupper(ch),tolower(ch));
  }
  return 0;
}
