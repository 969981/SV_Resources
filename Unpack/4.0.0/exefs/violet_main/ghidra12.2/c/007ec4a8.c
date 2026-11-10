/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec4a8; name: FUN_007ec4a8
 */


ulong FUN_007ec4a8(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 0x3a) == 0) {
    return *(ulong *)(param_1 + 0x40);
  }
  return (ulong)*(byte *)(param_1 + 0x3a);
}


