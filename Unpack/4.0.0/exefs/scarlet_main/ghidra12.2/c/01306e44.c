/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01306e44; name: FUN_01306e44
 */


void FUN_01306e44(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    FUN_013081a0(param_1 + 3,param_2[1] + -0x80,lVar4 + -0x80);
    lVar3 = param_2[1];
    lVar1 = lVar3 + -0x80;
    param_2[1] = lVar1;
    if (lVar4 + -0x80 != lVar2) {
      do {
        FUN_013081a0(param_1 + 3,lVar3 + -0x100,lVar4 + -0x100);
        lVar3 = param_2[1];
        lVar4 = lVar4 + -0x80;
        lVar1 = lVar3 + -0x80;
        param_2[1] = lVar1;
      } while (lVar2 + 0x80 != lVar4);
    }
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


