/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


