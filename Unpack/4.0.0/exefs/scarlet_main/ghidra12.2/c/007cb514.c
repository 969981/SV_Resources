/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cb514; name: FUN_007cb514
 */


void FUN_007cb514(int *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_007cbb40();
  if (*param_1 != 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0xa0);
  uVar5 = (ulong)uVar1;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar5 * 0x150,uVar2);
  if ((lVar3 != 0) && (uVar1 != 0)) {
    lVar4 = lVar3;
    do {
      FUN_007cb974(lVar4);
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 0x150;
    } while (uVar5 != 0);
  }
  *(long *)(param_2 + 0xb0) = lVar3;
  return;
}


