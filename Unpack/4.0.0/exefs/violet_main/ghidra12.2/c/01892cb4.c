/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01892cb4; name: FUN_01892cb4
 */


void FUN_01892cb4(long *param_1,undefined8 param_2,undefined8 param_3)

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
  bVar1 = FUN_01892d0c(param_2,param_3,lVar2,param_1[1]);
  *(byte *)param_1[3] = bVar1 & 1;
  return;
}


