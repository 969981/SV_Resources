/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314dd60; name: _INIT_1176
 */


void _INIT_1176(void)

{
  if ((DAT_04879980 & 1) == 0) {
    DAT_04879970 = 0;
    DAT_04879978 = 0;
    DAT_04879960 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879960;
    DAT_04879968 = &DAT_0467b968;
    DAT_04879980 = 1;
  }
  return;
}


