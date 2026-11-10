/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031463f0; name: _INIT_895
 */


void _INIT_895(void)

{
  if ((DAT_04876d98 & 1) == 0) {
    DAT_04876d88 = 0;
    DAT_04876d90 = 0;
    DAT_04876d78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876d78;
    DAT_04876d80 = &DAT_0466abd0;
    DAT_04876d98 = 1;
  }
  return;
}


