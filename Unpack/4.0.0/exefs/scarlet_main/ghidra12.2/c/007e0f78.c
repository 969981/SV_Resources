/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e0f78; name: FUN_007e0f78
 */


uint FUN_007e0f78(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)uVar1;
    do {
      FUN_00796828(param_2,lVar2);
      param_2 = param_2 + 0x20;
      lVar2 = lVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}


