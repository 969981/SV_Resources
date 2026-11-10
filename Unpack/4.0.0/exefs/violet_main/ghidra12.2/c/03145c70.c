/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145c70; name: _INIT_871
 */


void _INIT_871(void)

{
  if ((DAT_048769d8 & 1) == 0) {
    DAT_048769c8 = 0;
    DAT_048769d0 = 0;
    DAT_048769b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048769b8;
    DAT_048769c0 = &DAT_04669618;
    DAT_048769d8 = 1;
  }
  return;
}


