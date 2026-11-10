/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6a670; name: FUN_01f6a670
 */


void FUN_01f6a670(long param_1)

{
  if (((*(char *)(param_1 + 0x70) != '\0') && (*(char *)(param_1 + 0x8c) != '\0')) &&
     (*(char *)(param_1 + 0x90) != '\0')) {
    if ((*(short *)(param_1 + 0x8e) == *(short *)(param_1 + 0x92)) &&
       ((*(char *)(param_1 + 0x88) == '\0' ||
        (*(short *)(param_1 + 0x8e) != *(short *)(param_1 + 0x8a))))) {
      FUN_01f6b9c0();
      return;
    }
  }
  return;
}


