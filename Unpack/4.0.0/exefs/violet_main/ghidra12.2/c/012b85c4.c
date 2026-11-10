/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b85c4; name: FUN_012b85c4
 */


void FUN_012b85c4(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x4a8be92dfd89b82;
  pcStack_28 = "pe_AmbientWindComponent";
  local_20 = 0x17;
  local_18 = (long *)0x0;
  FUN_012b8730(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0xaf7ebdaa5bb14014;
  pcStack_28 = "pe_ReceiveWindSpringBoneComponent";
  local_20 = 0x21;
  local_18 = (long *)0x0;
  FUN_012b8a3c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x26d1441cdf8cda4;
  pcStack_28 = "pe_WeatherEffect";
  local_20 = 0x10;
  local_18 = (long *)0x0;
  FUN_012b8b3c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x9196a7430cd9b104;
  pcStack_28 = "pe_LightForWeather";
  local_20 = 0x12;
  local_18 = (long *)0x0;
  FUN_012b8c3c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x4d43f609734d38b1;
  pcStack_28 = "pe_WeatherEventTrigger";
  local_20 = 0x16;
  local_18 = (long *)0x0;
  FUN_012b8d3c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


