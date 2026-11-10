/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149970; name: _INIT_1018
 */


void _INIT_1018(void)

{
  if ((DAT_048780d0 & 1) == 0) {
    DAT_048780c0 = 0;
    DAT_048780c8 = 0;
    DAT_048780b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048780b0;
    DAT_048780b8 = &DAT_046724d0;
    DAT_048780d0 = 1;
  }
  return;
}


