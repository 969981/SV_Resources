/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216b7b8; name: FUN_0216b7b8
 */


void FUN_0216b7b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = *(long *)(param_1 + 8);
    lVar1 = param_2 + (param_3 - param_2);
    if (lVar1 != lVar2) {
      lVar1 = param_3 - param_2 >> 6;
      do {
        FUN_0216b844(param_2,param_2 + lVar1 * 0x40);
        param_2 = param_2 + 0x40;
      } while (lVar2 + lVar1 * -0x40 != param_2);
      lVar1 = *(long *)(param_1 + 8);
    }
    while (lVar1 != param_2) {
      lVar1 = lVar1 + -0x40;
      FUN_00fa65c0(lVar1);
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}


