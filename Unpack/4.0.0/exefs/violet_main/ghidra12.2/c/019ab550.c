/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ab550; name: FUN_019ab550
 */


ulong FUN_019ab550(int param_1)

{
  if ((param_1 - 1U & 0xffff) < 8) {
    return 0x805050001040302 >> (((ulong)(param_1 - 1U) & 7) << 3);
  }
  return 0;
}


