/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0c8c; name: FUN_021f0c8c
 */


ulong FUN_021f0c8c(int param_1)

{
  if ((param_1 + 4U & 0xff) < 6) {
    return 0x10404040003 >> (((ulong)(param_1 + 4U) & 7) << 3);
  }
  return 2;
}


