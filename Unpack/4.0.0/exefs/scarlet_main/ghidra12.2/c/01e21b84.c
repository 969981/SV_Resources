/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e21b84; name: FUN_01e21b84
 */


undefined8 FUN_01e21b84(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x48) == 0) {
    return 0;
  }
  *(byte *)(*(long *)(param_1 + 0x48) + 0xbb) = param_2 & 1;
  return 1;
}


