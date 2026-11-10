/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033358e0; name: _INIT_2042
 */


void _INIT_2042(void)

{
  if ((DAT_0488d640 & 1) == 0) {
    DAT_0488d630 = 0;
    DAT_0488d638 = 0;
    DAT_0488d620 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488d620;
    DAT_0488d628 = &DAT_047ac7c8;
    DAT_0488d640 = 1;
  }
  return;
}


