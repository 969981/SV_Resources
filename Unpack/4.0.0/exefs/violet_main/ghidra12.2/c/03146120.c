/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146120; name: _INIT_886
 */


void _INIT_886(void)

{
  if ((DAT_04876c30 & 1) == 0) {
    DAT_04876c20 = 0;
    DAT_04876c28 = 0;
    DAT_04876c10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c10;
    DAT_04876c18 = &DAT_0466a3e0;
    DAT_04876c30 = 1;
  }
  return;
}


