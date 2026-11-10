/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015faaf4; name: FUN_015faaf4
 */


void FUN_015faaf4(long *param_1,undefined8 param_2,undefined8 param_3)

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
  bVar1 = FUN_015fab70(param_2,param_3,lVar2,param_1[1],param_1[4],param_1[5]);
  FUN_00c5db00(param_2,0);
  *(byte *)param_1[3] = bVar1 & 1;
  return;
}


