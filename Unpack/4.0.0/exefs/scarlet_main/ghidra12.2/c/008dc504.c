/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc504; name: FUN_008dc504
 */


long FUN_008dc504(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x14);
  bVar5 = param_1 != 0;
  uVar2 = (uint)(bVar5 && *(int *)(lVar1 + 0x3c) != 0);
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = 2;
  }
  uVar4 = (ulong)uVar2;
  if (*(int *)(lVar1 + 0x40) != 0 && param_1 != 0) {
    uVar4 = uVar3;
  }
  return (long)*(int *)(lVar1 + 8) *
         (uVar4 + (bVar5 && *(int *)(lVar1 + 0x44) != 0) +
          (ulong)(bVar5 && *(int *)(lVar1 + 0x48) != 0) +
         (ulong)(bVar5 && *(int *)(lVar1 + 0x4c) != 0)) * 0x10 + (long)*(int *)(lVar1 + 0x38) * 4;
}


