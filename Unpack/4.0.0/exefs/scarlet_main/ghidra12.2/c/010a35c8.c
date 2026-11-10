/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a35c8; name: FUN_010a35c8
 */


void FUN_010a35c8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x34) == 2) {
    uVar2 = (uint)*(byte *)(*(long *)(param_1 + 0x38) + 0x8d);
    if ((uVar2 - 5 < 2) || (uVar2 - 1 < 3)) {
      uVar1 = FUN_010a363c(param_1);
      if ((uVar1 & 1) == 0) {
        FUN_010a4bb4(param_1);
        return;
      }
      FUN_010a3edc(param_1);
      return;
    }
  }
  return;
}


