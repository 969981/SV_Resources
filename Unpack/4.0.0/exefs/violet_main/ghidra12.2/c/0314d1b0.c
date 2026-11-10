/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d1b0; name: _INIT_1139
 */


void _INIT_1139(void)

{
  if ((DAT_048793b8 & 1) == 0) {
    DAT_048793a8 = 0;
    DAT_048793b0 = 0;
    DAT_04879398 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879398;
    DAT_048793a0 = &DAT_04679500;
    DAT_048793b8 = 1;
  }
  return;
}


