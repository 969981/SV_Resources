/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9888; name: FUN_021e9888
 */


ulong * FUN_021e9888(ulong *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    lVar1 = *param_1 + 0x18;
    if (*param_1 < 0x11) {
      lVar1 = 0x28;
    }
    param_1 = (ulong *)((long)param_1 + lVar1);
  }
  return param_1;
}


