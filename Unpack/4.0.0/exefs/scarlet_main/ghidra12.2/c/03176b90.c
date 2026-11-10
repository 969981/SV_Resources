/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176b90; name: _INIT_1328
 */


void _INIT_1328(void)

{
  if ((DAT_0487be08 & 1) == 0) {
    DAT_0487bdf8 = 0;
    DAT_0487be00 = 0;
    DAT_0487bde8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bde8;
    DAT_0487bdf0 = &DAT_0468d180;
    DAT_0487be08 = 1;
  }
  return;
}


