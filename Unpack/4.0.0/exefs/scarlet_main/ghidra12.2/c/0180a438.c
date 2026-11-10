/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180a438; name: FUN_0180a438
 */


void FUN_0180a438(long *param_1,undefined8 param_2,undefined8 param_3)

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
  bVar1 = FUN_0180a494(param_2,param_3,lVar2,param_1[1],param_1[4]);
  *(byte *)param_1[3] = bVar1 & 1;
  return;
}


