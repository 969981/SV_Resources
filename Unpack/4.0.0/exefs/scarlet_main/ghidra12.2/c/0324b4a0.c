/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b4a0; name: _INIT_1768
 */


void _INIT_1768(void)

{
  if ((DAT_04888a38 & 1) == 0) {
    DAT_04888a28 = 0;
    DAT_04888a30 = 0;
    DAT_04888a18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888a18;
    DAT_04888a20 = &DAT_046bc7b0;
    DAT_04888a38 = 1;
  }
  return;
}


