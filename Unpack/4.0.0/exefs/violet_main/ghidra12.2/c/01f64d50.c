/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f64d50; name: FUN_01f64d50
 */


ulong FUN_01f64d50(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 3;
}


