/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157a208; name: FUN_0157a208
 */


void FUN_0157a208(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    do {
      lVar3 = lVar3 + -8;
      FUN_0157a714(param_1 + 3,lVar1 + -8,lVar3);
      lVar1 = param_2[1] + -8;
      param_2[1] = lVar1;
    } while (lVar2 != lVar3);
    lVar2 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


