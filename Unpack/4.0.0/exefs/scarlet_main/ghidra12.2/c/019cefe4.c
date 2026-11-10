/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cefe4; name: FUN_019cefe4
 */


void FUN_019cefe4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar3) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_019ceeec(plVar1,param_2[1] + -0xa8,lVar5 + -0xa8);
    lVar4 = param_2[1];
    lVar2 = lVar4 + -0xa8;
    param_2[1] = lVar2;
    if (lVar5 + -0xa8 != lVar3) {
      FUN_019ceeec(plVar1,lVar4 + -0x150,lVar5 + -0x150);
      lVar4 = param_2[1];
      lVar2 = lVar4 + -0xa8;
      param_2[1] = lVar2;
      if (lVar5 + -0x150 != lVar3) {
        do {
          FUN_019ceeec(plVar1,lVar4 + -0x150,lVar5 + -0x1f8);
          lVar4 = param_2[1];
          lVar5 = lVar5 + -0xa8;
          lVar2 = lVar4 + -0xa8;
          param_2[1] = lVar2;
        } while (lVar3 + 0x150 != lVar5);
      }
    }
    lVar3 = *param_1;
  }
  *param_1 = lVar2;
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


