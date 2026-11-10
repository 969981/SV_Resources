/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02099054; name: FUN_02099054
 */


void FUN_02099054(long param_1)

{
  if (*(long *)(param_1 + 0x328) != *(long *)(param_1 + 0x330)) {
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + -8;
  }
  return;
}


