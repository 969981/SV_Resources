/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031478a0; name: _INIT_936
 */


void _INIT_936(void)

{
  if ((DAT_04877400 & 1) == 0) {
    DAT_048773f0 = 0;
    DAT_048773f8 = 0;
    DAT_048773e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048773e0;
    DAT_048773e8 = &DAT_0466d1d0;
    DAT_04877400 = 1;
  }
  return;
}


