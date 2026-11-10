/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263ae0; name: _INIT_1798
 */


void _INIT_1798(void)

{
  if ((DAT_048898c8 & 1) == 0) {
    DAT_048898b8 = 0;
    DAT_048898c0 = 0;
    DAT_048898a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048898a8;
    DAT_048898b0 = &DAT_046c25f8;
    DAT_048898c8 = 1;
  }
  return;
}


