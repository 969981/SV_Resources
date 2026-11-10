/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030331b0; name: _INIT_636
 */


void _INIT_636(void)

{
  if ((DAT_048713c0 & 1) == 0) {
    DAT_048713b0 = 0;
    DAT_048713b8 = 0;
    DAT_048713a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048713a0;
    DAT_048713a8 = &DAT_04640530;
    DAT_048713c0 = 1;
  }
  return;
}


