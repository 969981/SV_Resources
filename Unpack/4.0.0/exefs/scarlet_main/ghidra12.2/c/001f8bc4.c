/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f8bc4; name: FUN_001f8bc4
 */


undefined8 FUN_001f8bc4(long param_1)

{
  if (((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) &&
     ((*(long *)(param_1 + 0x40) == -1 || (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))))
     ) {
    return 0;
  }
  return 0xffffffff;
}


