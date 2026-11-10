/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02994480; name: FUN_02994480
 */


undefined8 FUN_02994480(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 2) {
    FUN_02995cc0(param_1);
    uVar2 = FUN_02995f18(param_1);
    if (uVar2 <= *(uint *)(param_1 + 0x74)) {
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_02995af0(param_1);
    }
    else {
      if (iVar1 != 0) {
        return 1;
      }
      FUN_0299552c(param_1);
      FUN_029956fc(param_1);
      FUN_02995920(param_1);
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  return 0;
}


