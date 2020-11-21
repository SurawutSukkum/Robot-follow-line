void backward()
{
  digitalWrite(MOTOR_L_A,LOW);
  digitalWrite(MOTOR_L_B,HIGH);
  digitalWrite(MOTOR_R_A,HIGH);
  digitalWrite(MOTOR_R_B,LOW);
}

