/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004043a0; name: FUN_004043a0
 */


undefined4 FUN_004043a0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040d100();
  iVar1 = FUN_0040d110();
  if (((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      return 0x2aa;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar2 = 0x2ab;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}


