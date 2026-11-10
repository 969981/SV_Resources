/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149ab0; name: _INIT_1022
 */


void _INIT_1022(void)

{
  if ((DAT_04878170 & 1) == 0) {
    DAT_04878160 = 0;
    DAT_04878168 = 0;
    DAT_04878150 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878150;
    DAT_04878158 = &DAT_04672910;
    DAT_04878170 = 1;
  }
  return;
}


