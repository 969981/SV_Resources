/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149dd0; name: _INIT_1032
 */


void _INIT_1032(void)

{
  if ((DAT_04878300 & 1) == 0) {
    DAT_048782f0 = 0;
    DAT_048782f8 = 0;
    DAT_048782e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048782e0;
    DAT_048782e8 = &DAT_04673318;
    DAT_04878300 = 1;
  }
  return;
}


