/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194fcd0; name: FUN_0194fcd0
 */


void FUN_0194fcd0(long *param_1,undefined8 *param_2)

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
    FUN_0194fa80(plVar1,param_2[1] + -0x18,lVar5 + -0x18);
    lVar4 = param_2[1];
    lVar2 = lVar4 + -0x18;
    param_2[1] = lVar2;
    if (lVar5 + -0x18 != lVar3) {
      FUN_0194fa80(plVar1,lVar4 + -0x30,lVar5 + -0x30);
      lVar4 = param_2[1];
      lVar2 = lVar4 + -0x18;
      param_2[1] = lVar2;
      if (lVar5 + -0x30 != lVar3) {
        do {
          FUN_0194fa80(plVar1,lVar4 + -0x30,lVar5 + -0x48);
          lVar4 = param_2[1];
          lVar5 = lVar5 + -0x18;
          lVar2 = lVar4 + -0x18;
          param_2[1] = lVar2;
        } while (lVar3 + 0x30 != lVar5);
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


