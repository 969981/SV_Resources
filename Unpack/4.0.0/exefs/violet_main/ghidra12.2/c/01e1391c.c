/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1391c; name: FUN_01e1391c
 */


byte FUN_01e1391c(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0xc0d19c3696f8bb0f;
  pcStack_48 = "wild_int";
  local_40 = 8;
  uStack_38 = 0;
  iVar2 = FUN_00d93250(param_1,&local_50);
  local_50 = 0xc55ea8ec3c868172;
  pcStack_48 = "wild_bool";
  local_40 = 9;
  uStack_38 = 0;
  bVar1 = FUN_00d93028(param_1,&local_50);
  return iVar2 == param_2 & bVar1;
}


