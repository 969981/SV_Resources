/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031483c0; name: _INIT_954
 */


void _INIT_954(void)

{
  if ((DAT_048776d0 & 1) == 0) {
    DAT_048776c0 = 0;
    DAT_048776c8 = 0;
    DAT_048776b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048776b0;
    DAT_048776b8 = &DAT_0466e120;
    DAT_048776d0 = 1;
  }
  return;
}


