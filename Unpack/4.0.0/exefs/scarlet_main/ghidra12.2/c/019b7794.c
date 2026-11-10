/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b7794; name: FUN_019b7794
 */


void FUN_019b7794(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_2;
  if (lVar2 != 0 && lVar2 != param_3) {
    lVar4 = lVar2;
    do {
      FUN_019b78b0(param_1,lVar1,lVar4);
      lVar4 = lVar4 + 0x20;
      lVar1 = lVar1 + 0x20;
    } while (param_3 != lVar4);
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = lVar2 + lVar3 * 0x20;
    if (lVar4 != param_3) {
      do {
        FUN_019b78b0(param_1,lVar1,param_3);
        param_3 = param_3 + 0x20;
        lVar1 = lVar1 + 0x20;
      } while (lVar4 != param_3);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    if ((lVar3 != 0) && (FUN_019b7290(lVar2), lVar3 != 1)) {
      lVar3 = lVar3 + -2;
      FUN_019b7290(lVar2 + 0x20);
      if (lVar3 != 0) {
        lVar2 = lVar2 + 0x40;
        do {
          lVar3 = lVar3 + -1;
          FUN_019b7290(lVar2);
          lVar2 = lVar2 + 0x20;
        } while (lVar3 != 0);
      }
    }
    FUN_01a05320(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar1 - param_2 >> 5;
  *(undefined8 *)(param_1 + 0x30) = 8;
  return;
}


