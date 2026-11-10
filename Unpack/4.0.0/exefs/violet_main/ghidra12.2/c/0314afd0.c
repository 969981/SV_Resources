/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314afd0; name: _INIT_1072
 */


void _INIT_1072(void)

{
  if ((DAT_04878940 & 1) == 0) {
    DAT_04878930 = 0;
    DAT_04878938 = 0;
    DAT_04878920 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878920;
    DAT_04878928 = &DAT_04675708;
    DAT_04878940 = 1;
  }
  return;
}


