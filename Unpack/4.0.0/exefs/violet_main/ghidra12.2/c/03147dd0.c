/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147dd0; name: _INIT_941
 */


void _INIT_941(void)

{
  if ((DAT_048774c8 & 1) == 0) {
    DAT_048774b8 = 0;
    DAT_048774c0 = 0;
    DAT_048774a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048774a8;
    DAT_048774b0 = &DAT_0466d678;
    DAT_048774c8 = 1;
  }
  return;
}


