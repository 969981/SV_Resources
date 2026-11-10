/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01497d90; name: FUN_01497d90
 */


bool FUN_01497d90(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x710) == '\0') {
    return *(short *)(param_1 + 0x8c) != 0;
  }
  return false;
}


