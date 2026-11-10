/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01305610; name: FUN_01305610
 */


void FUN_01305610(long *param_1,undefined8 *param_2)

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
    FUN_013082c4(param_1 + 3,param_2[1] + -0x130,lVar4 + -0x130);
    lVar3 = param_2[1];
    lVar1 = lVar3 + -0x130;
    param_2[1] = lVar1;
    if (lVar4 + -0x130 != lVar2) {
      do {
        FUN_013082c4(param_1 + 3,lVar3 + -0x260,lVar4 + -0x260);
        lVar3 = param_2[1];
        lVar4 = lVar4 + -0x130;
        lVar1 = lVar3 + -0x130;
        param_2[1] = lVar1;
      } while (lVar2 + 0x130 != lVar4);
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


