/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178870; name: _INIT_1376
 */


void _INIT_1376(void)

{
  if ((DAT_0487c588 & 1) == 0) {
    DAT_0487c578 = 0;
    DAT_0487c580 = 0;
    DAT_0487c568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c568;
    DAT_0487c570 = &DAT_04690250;
    DAT_0487c588 = 1;
  }
  return;
}


