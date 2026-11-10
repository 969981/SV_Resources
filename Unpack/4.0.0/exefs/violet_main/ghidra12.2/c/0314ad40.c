/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ad40; name: _INIT_1069
 */


void _INIT_1069(void)

{
  if ((DAT_048788c8 & 1) == 0) {
    DAT_048788b8 = 0;
    DAT_048788c0 = 0;
    DAT_048788a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048788a8;
    DAT_048788b0 = &DAT_04675470;
    DAT_048788c8 = 1;
  }
  return;
}


