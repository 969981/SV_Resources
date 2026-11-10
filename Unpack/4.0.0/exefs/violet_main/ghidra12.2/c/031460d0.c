/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031460d0; name: _INIT_885
 */


void _INIT_885(void)

{
  if ((DAT_04876c08 & 1) == 0) {
    DAT_04876bf8 = 0;
    DAT_04876c00 = 0;
    DAT_04876be8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876be8;
    DAT_04876bf0 = &DAT_0466a308;
    DAT_04876c08 = 1;
  }
  return;
}


