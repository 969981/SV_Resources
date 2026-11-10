/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d92f88; name: FUN_00d92f88
 */


byte FUN_00d92f88(undefined8 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0x13ee4f04b1568f34;
  pcStack_48 = "underground_int";
  local_40 = 0xf;
  uStack_38 = 0;
  iVar2 = FUN_00d93250(param_1,&local_50);
  local_50 = 0x7060a834bf10ce7f;
  pcStack_48 = "underground_bool";
  local_40 = 0x10;
  uStack_38 = 0;
  bVar1 = FUN_00d93028(param_1,&local_50);
  return bVar1 & iVar2 == *param_2;
}


