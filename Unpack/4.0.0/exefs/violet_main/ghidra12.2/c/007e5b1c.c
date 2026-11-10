/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5b1c; name: FUN_007e5b1c
 */


bool FUN_007e5b1c(long param_1)

{
  if (*(short *)(param_1 + 0x5e8) == -1) {
    return false;
  }
  return (uint)*(byte *)(param_1 + 0x5eb) ==
         (~(-1 << (ulong)(*(byte *)(param_1 + 0x5ea) & 0x1f)) & 0xffU);
}


