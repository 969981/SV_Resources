/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


