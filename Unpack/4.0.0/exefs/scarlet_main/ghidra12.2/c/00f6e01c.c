/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6e01c; name: FUN_00f6e01c
 */


void FUN_00f6e01c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_00f6e144(plVar1,param_2[1] + -3,lVar4 + -3);
    lVar3 = param_2[1];
    lVar2 = lVar3 + -3;
    param_2[1] = lVar2;
    if (lVar4 + -3 != lVar5) {
      FUN_00f6e144(plVar1,lVar3 + -6,lVar4 + -6);
      lVar3 = param_2[1];
      lVar2 = lVar3 + -3;
      param_2[1] = lVar2;
      if (lVar4 + -6 != lVar5) {
        FUN_00f6e144(plVar1,lVar3 + -6,lVar4 + -9);
        lVar3 = param_2[1];
        lVar2 = lVar3 + -3;
        param_2[1] = lVar2;
        if (lVar4 + -9 != lVar5) {
          do {
            FUN_00f6e144(plVar1,lVar3 + -6,lVar4 + -0xc);
            lVar3 = param_2[1];
            lVar4 = lVar4 + -3;
            lVar2 = lVar3 + -3;
            param_2[1] = lVar2;
          } while (lVar5 + 9 != lVar4);
        }
      }
    }
    lVar5 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


