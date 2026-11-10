/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133be88; name: FUN_0133be88
 */


void FUN_0133be88(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar3) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    do {
      lVar2 = lVar2 + -2;
      FUN_0133bf30(param_1 + 3,lVar1 + -2,lVar2);
      lVar1 = param_2[1] + -2;
      param_2[1] = lVar1;
    } while (lVar3 != lVar2);
    lVar3 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


