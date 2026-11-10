/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ea30; name: _INIT_1217
 */


void _INIT_1217(void)

{
  if ((DAT_04879fe8 & 1) == 0) {
    DAT_04879fd8 = 0;
    DAT_04879fe0 = 0;
    DAT_04879fc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879fc8;
    DAT_04879fd0 = &DAT_0467e2f0;
    DAT_04879fe8 = 1;
  }
  return;
}


