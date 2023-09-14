const int BOTAO = 1,VERMELHO = 2, AMARELO = 3, VERDE = 4, VERMELHO_PEDESTRE = 5, VERDE_PEDESTRE = 6; // DECLARA AS PORTAS NO !ARDUINO

void setup() {
  pinMode(BOTAO, INPUT); //DECLARA A ENTRADA , NO CASO VAI SER NA PORTA DO BOTÃO

  // DECLARA AS SAIDAS DE LED DO SINAL DE CARRO NAS SUAS RESPECTIVAS PORTAS
  pinMode(VERDE, OUTPUT); 
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);

  // DECLARA AS SAIDAS DE LED DO SINAL DE PEDESTRES NAS SUAS RESPECTIVAS PORTAS
  pinMode(VERDE_PEDESTRE, OUTPUT);
  pinMode(VERMELHO_PEDESTRE, OUTPUT);

  // 
  digitalWrite(VERDE, HIGH);
  digitalWrite(VERMELHO_PEDESTRE, HIGH);
  
  

}

void loop() {
  
  //VERIFICA SE O BOTÃO FOI CLICADO (NO CASO HIGH)
   if(digitalRead(BOTAO == HIGH)){ 
    verdeParaVermelho();
    delay(5000);
    vermelhoParaVerde();
   }
}

void verdeParaVermelho(){
  // APAGA
  digitalWrite(VERDE, LOW);
  
  // ACENDE AMARELO 
  digitalWrite(AMARELO, HIGH);
  delay(2000);
  //
  digitalWrite(AMARELO, LOW);

  digitalWrite(VERMELHO_PEDESTRE, LOW);

  digitalWrite(VERMELHO, HIGH);

  digitalWrite(VERDE_PEDESTRE, HIGH);
  
}


void vermelhoParaVerde(){
  digitalWrite(VERDE_PEDESTRE, LOW);

  digitalWrite(VERMELHO, LOW);

  digitalWrite(VERMELHO_PEDESTRE, HIGH);

  digitalWrite(AMARELO, HIGH);
  delay(2000);

  digitalWrite(AMARELO, LOW);

  digitalWrite(VERDE, HIGH);
  
}
