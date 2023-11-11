void setup() {
  // put your setup code here, to run once:
  int i,l=7;
  long int t,in=1800000;//in is for increment per unit in milisecond
  pinMode(3, INPUT); //time decrement button
  pinMode(4, INPUT); //time increment button
  pinMode(5, INPUT); //start button
  pinMode(2, OUTPUT);//for main relay
  //0.5 hour is default time
  pinMode(6, OUTPUT); // 0.5 hour led indicator
  pinMode(7, OUTPUT); // 1 hour led indicator
  pinMode(8, OUTPUT); // 1.5 hour led indicator
  pinMode(9, OUTPUT); // 2 hour led indicator
  pinMode(10, OUTPUT); // 2.5 hour led indicator
  pinMode(11, OUTPUT); // 3 hour led indicator
  t=1*in;
  digitalWrite(6,HIGH);// Set the default LED to 0.5 hours
  //button input stage
  while(1)
  {
    //time decrement button
    if(digitalRead(3)==HIGH)
    {
      if(l==7 )
      {
        // Do nothing, already at the minimum setting
      }
      else
      {
        t=t-in;
        l--;
        digitalWrite(l,LOW);
        
      }
    }
    delay(50);

    //time increment button
    if(digitalRead(4)==HIGH)
    {
      if(l==12)
      {
        // Do nothing, already at the maximum setting
      }
      else
      {
        t=t+in;
        digitalWrite(l,HIGH);
        l++;
      }
    }
    delay(50);

    //start button
    if(digitalRead(5)==HIGH)
    {
      break;
    }
    delay(50);
  }

  //error time handleing
  if(t>(in*6))
    t=in*6;
  else if(t<in)
    t=in;

  if(l>11)
    l=12;
  else if(l<6)
    l=6;
  //turn on relay
  digitalWrite(2,HIGH);
  //led indicator of time
  while(t!=0)
  {
    digitalWrite(l,LOW);
    delay(in);
    l--;
    t=t-in;
  }
  digitalWrite(l,LOW);
  //turn off relay
  digitalWrite(2,LOW);
  digitalWrite(2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
