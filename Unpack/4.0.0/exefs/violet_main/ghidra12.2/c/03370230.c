/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03370230; name: _INIT_2055
 */


void _INIT_2055(void)

{
  if ((DAT_0488db20 & 1) == 0) {
    DAT_0488db10 = 0;
    DAT_0488db18 = 0;
    DAT_0488db00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488db00;
    DAT_0488db08 = &DAT_047ae008;
    DAT_0488db20 = 1;
  }
  return;
}


