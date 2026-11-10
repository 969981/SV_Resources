/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078cdcc; name: FUN_0078cdcc
 */


undefined4 FUN_0078cdcc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_03cbf600 + (long)(int)uVar1 * 4);
  }
  return 0;
}


