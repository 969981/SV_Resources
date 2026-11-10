/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de9648; name: FUN_01de9648
 */


void FUN_01de9648(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  
  if (*(char *)param_1[2] == '\0') {
    param_3 = *(undefined8 *)(*param_1 + 0x118);
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1 + 0xa0;
  }
  bVar1 = FUN_01de96c0(param_2,param_3,lVar2,param_1[1],param_1[4],param_1[5]);
  FUN_00c5db00(param_2,0);
  *(byte *)param_1[3] = bVar1 & 1;
  return;
}


