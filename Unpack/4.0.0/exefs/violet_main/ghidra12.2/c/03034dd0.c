/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034dd0; name: _INIT_726
 */


void _INIT_726(void)

{
  if ((DAT_048721d0 & 1) == 0) {
    DAT_048721c0 = 0;
    DAT_048721c8 = 0;
    DAT_048721b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048721b0;
    DAT_048721b8 = &DAT_04645b48;
    DAT_048721d0 = 1;
  }
  return;
}


