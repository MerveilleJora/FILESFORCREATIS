void CarteSD(){
  if (file.size() > 1800){
    NumFile += 1;
    DateTime now = rtc.now();
    FileName = String(now.day()) + String(now.month()) + "_" + String(NumFile) + ".txt";
  }
}
