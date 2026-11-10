/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dbdc4; name: FUN_007dbdc4
 */


undefined8 FUN_007dbdc4(long param_1)

{
  int iVar1;
  
  if (*(int *)(*(long *)PTR_DAT_047d0a08 + 0x118) == 1) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    FUN_007d976c(*(undefined8 *)(param_1 + 0x58));
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (iVar1 == 0x66) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x66;
  return 1;
}


