/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036680; name: _INIT_805
 */


void _INIT_805(void)

{
  if ((DAT_04872e28 & 1) == 0) {
    DAT_04872e18 = 0;
    DAT_04872e20 = 0;
    DAT_04872e08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872e08;
    DAT_04872e10 = &DAT_0464a9b0;
    DAT_04872e28 = 1;
  }
  return;
}


