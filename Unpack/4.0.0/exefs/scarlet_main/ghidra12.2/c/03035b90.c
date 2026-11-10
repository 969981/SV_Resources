/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035b90; name: _INIT_770
 */


void _INIT_770(void)

{
  if ((DAT_048728b0 & 1) == 0) {
    DAT_048728a0 = 0;
    DAT_048728a8 = 0;
    DAT_04872890 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872890;
    DAT_04872898 = &DAT_04648798;
    DAT_048728b0 = 1;
  }
  return;
}


