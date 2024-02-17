bool checkMember(int n){
  int num0=0,num1=1,num2;
  bool choice;
  for(int i = 0; i < n; i++)
  {
    num2=num0+num1;
    num0=num1;
    num1=num2;
    if(num2 == n)
    {
      choice = true;
      break;
    }
    else{
      choice = false;
    }
  }
  return choice;
}
