/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a9b0; name: _INIT_1733
 */


void _INIT_1733(void)

{
  if ((DAT_048884c0 & 1) == 0) {
    DAT_048884b0 = 0;
    DAT_048884b8 = 0;
    DAT_048884a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048884a0;
    DAT_048884a8 = &DAT_046ba8c0;
    DAT_048884c0 = 1;
  }
  return;
}


