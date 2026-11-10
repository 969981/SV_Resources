/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030365e0; name: _INIT_803
 */


void _INIT_803(void)

{
  if ((DAT_04872dd8 & 1) == 0) {
    DAT_04872dc8 = 0;
    DAT_04872dd0 = 0;
    DAT_04872db8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872db8;
    DAT_04872dc0 = &DAT_0464a758;
    DAT_04872dd8 = 1;
  }
  return;
}


