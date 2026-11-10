/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289a60c; name: FUN_0289a60c
 */


void FUN_0289a60c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    FUN_01a40a98(param_1,param_2,param_5);
    lVar2 = param_2 + 0x20;
  }
  else {
    lVar2 = param_2;
    if (lVar1 != param_4) {
      lVar4 = lVar1;
      do {
        FUN_019b78b0(param_1,lVar2,lVar4);
        lVar4 = lVar4 + 0x20;
        lVar2 = lVar2 + 0x20;
      } while (param_4 != lVar4);
    }
    FUN_01a40a98(param_1,lVar2,param_5);
    lVar2 = lVar2 + 0x20;
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = lVar1 + lVar3 * 0x20;
    if (lVar4 != param_4) {
      do {
        FUN_019b78b0(param_1,lVar2,param_4);
        param_4 = param_4 + 0x20;
        lVar2 = lVar2 + 0x20;
      } while (lVar4 != param_4);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    if ((lVar3 != 0) && (FUN_019b7290(lVar1), lVar3 != 1)) {
      lVar3 = lVar3 + -2;
      FUN_019b7290(lVar1 + 0x20);
      if (lVar3 != 0) {
        lVar1 = lVar1 + 0x40;
        do {
          lVar3 = lVar3 + -1;
          FUN_019b7290(lVar1);
          lVar1 = lVar1 + 0x20;
        } while (lVar3 != 0);
      }
    }
    FUN_01a05320(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar2 - param_2 >> 5;
  return;
}


