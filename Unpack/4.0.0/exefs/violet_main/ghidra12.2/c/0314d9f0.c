/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d9f0; name: _INIT_1165
 */


void _INIT_1165(void)

{
  if ((DAT_048797c8 & 1) == 0) {
    DAT_048797b8 = 0;
    DAT_048797c0 = 0;
    DAT_048797a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048797a8;
    DAT_048797b0 = &DAT_0467ae30;
    DAT_048797c8 = 1;
  }
  return;
}


