/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147d2f0; name: FUN_0147d2f0
 */


void FUN_0147d2f0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x40387079c4f1eaea;
  pcStack_48 = "UseDamageStainData";
  local_40 = 0x12;
  local_38 = (long *)0x0;
  bVar1 = FUN_00cf7518(param_2,&local_50);
  *param_1 = bVar1 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x7f75704946fe813c;
  pcStack_48 = "DamageStainDrawBox";
  local_40 = 0x12;
  local_38 = (long *)0x0;
  FUN_00d996a8(auStack_68,param_2,&local_50);
  FUN_0147d478(param_1 + 0x10,auStack_68);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x9ac474baa1ea16d5;
  pcStack_48 = "UseWeatherStainData";
  local_40 = 0x13;
  local_38 = (long *)0x0;
  bVar1 = FUN_00cf7518(param_2,&local_50);
  param_1[0x60] = bVar1 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xfa158f19d2363a6b;
  pcStack_48 = "WeatherStainDrawBox";
  local_40 = 0x13;
  local_38 = (long *)0x0;
  FUN_00d996a8(auStack_80,param_2,&local_50);
  FUN_0147d478(param_1 + 0x70,auStack_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


