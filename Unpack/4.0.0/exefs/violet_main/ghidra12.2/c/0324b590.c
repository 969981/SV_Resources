/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b590; name: _INIT_1771
 */


void _INIT_1771(void)

{
  if ((DAT_04888ab0 & 1) == 0) {
    DAT_04888aa0 = 0;
    DAT_04888aa8 = 0;
    DAT_04888a90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888a90;
    DAT_04888a98 = &DAT_046bca98;
    DAT_04888ab0 = 1;
  }
  return;
}


