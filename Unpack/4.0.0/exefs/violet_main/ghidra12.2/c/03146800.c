/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146800; name: _INIT_903
 */


void _INIT_903(void)

{
  if ((DAT_04876ed8 & 1) == 0) {
    DAT_04876ec8 = 0;
    DAT_04876ed0 = 0;
    DAT_04876eb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876eb8;
    DAT_04876ec0 = &DAT_0466b3d0;
    DAT_04876ed8 = 1;
  }
  return;
}


