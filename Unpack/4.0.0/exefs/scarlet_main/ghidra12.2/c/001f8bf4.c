/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f8bf4; name: FUN_001f8bf4
 */


int FUN_001f8bf4(long param_1,long param_2)

{
  param_2 = *(long *)(param_1 + 0x48) + param_2;
  *(long *)(param_1 + 0x48) = param_2;
  if ((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) {
    return -(uint)(*(long *)(param_1 + 0x40) != -1 && *(long *)(param_1 + 0x40) < param_2);
  }
  return -1;
}


