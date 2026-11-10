/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01441180; name: FUN_01441180
 */


undefined4 FUN_01441180(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x80) - 1;
  if (uVar1 < 9) {
    return *(undefined4 *)(&DAT_03d30650 + (long)(int)uVar1 * 4);
  }
  return 0;
}


