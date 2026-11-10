/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034ce0; name: _INIT_723
 */


void _INIT_723(void)

{
  if ((DAT_04872158 & 1) == 0) {
    DAT_04872148 = 0;
    DAT_04872150 = 0;
    DAT_04872138 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872138;
    DAT_04872140 = &DAT_04645860;
    DAT_04872158 = 1;
  }
  return;
}


