/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004efbc4; name: FUN_004efbc4
 */


void FUN_004efbc4(long *param_1,long param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = param_2;
  lVar5 = param_3[5];
  lVar4 = param_3[4];
  lVar2 = param_3[1];
  lVar1 = *param_3;
  lVar3 = param_3[2];
  param_1[4] = param_3[3];
  param_1[3] = lVar3;
  param_1[6] = lVar5;
  param_1[5] = lVar4;
  param_1[2] = lVar2;
  param_1[1] = lVar1;
  if (param_4 == 0) {
    param_4 = FUN_004a4448();
    param_2 = *param_1;
  }
  param_1[7] = param_4;
  param_1[8] = param_5;
  *(int *)(param_1 + 9) = *(int *)(param_2 + 0x68) + -1;
  return;
}


