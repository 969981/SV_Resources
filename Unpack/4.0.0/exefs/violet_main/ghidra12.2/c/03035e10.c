/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035e10; name: _INIT_778
 */


void _INIT_778(void)

{
  if ((DAT_048729f0 & 1) == 0) {
    DAT_048729e0 = 0;
    DAT_048729e8 = 0;
    DAT_048729d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048729d0;
    DAT_048729d8 = &DAT_04649058;
    DAT_048729f0 = 1;
  }
  return;
}


