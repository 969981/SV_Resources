/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146170; name: _INIT_887
 */


void _INIT_887(void)

{
  if ((DAT_04876c58 & 1) == 0) {
    DAT_04876c48 = 0;
    DAT_04876c50 = 0;
    DAT_04876c38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c38;
    DAT_04876c40 = &DAT_0466a4b8;
    DAT_04876c58 = 1;
  }
  return;
}


