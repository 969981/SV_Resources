/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02782d78; name: FUN_02782d78
 */


undefined4 FUN_02782d78(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_02784c3c();
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x20) + 0x28);
  }
  return uVar1;
}


