/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eae4c; name: FUN_007eae4c
 */


long FUN_007eae4c(long param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  uVar4 = (uint)uVar2;
  if (*(int *)(param_1 + 0x14) == uVar1 - uVar3 * uVar4) {
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar1 / uVar4;
  }
  return *(long *)(param_1 + 8) + (ulong)(uVar1 - uVar3 * uVar4) * 0x650;
}


