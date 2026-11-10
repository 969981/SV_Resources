/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031770d0; name: _INIT_1332
 */


void _INIT_1332(void)

{
  if ((DAT_0487bea8 & 1) == 0) {
    DAT_0487be98 = 0;
    DAT_0487bea0 = 0;
    DAT_0487be88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487be88;
    DAT_0487be90 = &DAT_0468d4d8;
    DAT_0487bea8 = 1;
  }
  return;
}


