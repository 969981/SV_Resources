/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e550; name: FUN_0124e550
 */


bool FUN_0124e550(long param_1,long param_2)

{
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x49b) & 1) == 0) {
    return *(int *)(*(long *)(param_2 + 0x70) + 0xcc) == 0;
  }
  return false;
}


