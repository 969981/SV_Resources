/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274086c; name: FUN_0274086c
 */


void FUN_0274086c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  lVar2 = lVar3 - *param_1;
  uVar1 = lVar2 >> 3;
  if (uVar1 < 4) {
    FUN_02740e28(param_1,4 - uVar1);
    return;
  }
  if (lVar2 != 0x20) {
    lVar2 = *param_1 + 0x20;
    while (lVar2 != lVar3) {
      lVar3 = lVar3 + -8;
      FUN_00f1900c(lVar3);
    }
    param_1[1] = lVar2;
  }
  return;
}


