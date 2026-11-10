/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6adb0; name: FUN_01f6adb0
 */


bool FUN_01f6adb0(long param_1,short param_2)

{
  if (((*(long *)(param_1 + 0x60) == 0) || (*(short *)(*(long *)(param_1 + 0x60) + 0x1a) == 0)) ||
     (*(char *)(param_1 + 0x88) == '\0')) {
    return false;
  }
  return *(short *)(param_1 + 0x8a) == param_2;
}


