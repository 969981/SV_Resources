/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c967c; name: FUN_015c967c
 */


bool FUN_015c967c(long param_1)

{
  if (((*(long *)(param_1 + 0x18) == 0) || (*(short *)(*(long *)(param_1 + 0x18) + 0x1a) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    return false;
  }
  return *(short *)(*(long *)(param_1 + 0x28) + 0x1a) != 0;
}


