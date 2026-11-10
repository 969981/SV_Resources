/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032ad0; name: _INIT_614
 */


void _INIT_614(void)

{
  if ((DAT_04871050 & 1) == 0) {
    DAT_04871040 = 0;
    DAT_04871048 = 0;
    DAT_04871030 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871030;
    DAT_04871038 = &DAT_0463f0a0;
    DAT_04871050 = 1;
  }
  return;
}


