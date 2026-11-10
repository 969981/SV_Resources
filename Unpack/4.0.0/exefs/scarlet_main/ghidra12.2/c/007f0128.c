/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f0128; name: FUN_007f0128
 */


uint FUN_007f0128(undefined8 param_1,long param_2,uint param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    return 1;
  }
  return *(uint *)(param_2 + ((ulong)(param_3 >> 3) & 0x1c) + 0x14) >> (ulong)(param_3 & 0x1f) & 1;
}


