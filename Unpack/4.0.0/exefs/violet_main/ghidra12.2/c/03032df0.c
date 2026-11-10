/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032df0; name: _INIT_624
 */


void _INIT_624(void)

{
  if ((DAT_048711e0 & 1) == 0) {
    DAT_048711d0 = 0;
    DAT_048711d8 = 0;
    DAT_048711c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048711c0;
    DAT_048711c8 = &DAT_0463fa50;
    DAT_048711e0 = 1;
  }
  return;
}


