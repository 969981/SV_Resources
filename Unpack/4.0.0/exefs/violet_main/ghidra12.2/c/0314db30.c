/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314db30; name: _INIT_1169
 */


void _INIT_1169(void)

{
  if ((DAT_04879868 & 1) == 0) {
    DAT_04879858 = 0;
    DAT_04879860 = 0;
    DAT_04879848 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879848;
    DAT_04879850 = &DAT_0467b278;
    DAT_04879868 = 1;
  }
  return;
}


