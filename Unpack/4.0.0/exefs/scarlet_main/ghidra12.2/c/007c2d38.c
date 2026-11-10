/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c2d38; name: FUN_007c2d38
 */


void FUN_007c2d38(long param_1,long param_2)

{
  long lVar1;
  
  FUN_007c9e3c(PTR_DAT_047d1068);
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_007c9e3c(lVar1);
  }
  FUN_007bfd40(param_1 + 0x48,*(int *)(param_1 + 0x5c) + param_2);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (lVar1 != 0) {
    FUN_007c9e44(lVar1);
  }
  FUN_007c9e44(PTR_DAT_047d1068);
  return;
}


