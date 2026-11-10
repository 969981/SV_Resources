/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ab520; name: FUN_019ab520
 */


uint FUN_019ab520(undefined8 param_1,int param_2)

{
  if ((param_2 - 1U & 0xffff) < 8) {
    return 0xefU >> (ulong)(param_2 - 1U & 0x1f) & 1;
  }
  return 0;
}


