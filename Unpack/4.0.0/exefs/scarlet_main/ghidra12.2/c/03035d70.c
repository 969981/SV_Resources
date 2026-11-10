/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035d70; name: _INIT_776
 */


void _INIT_776(void)

{
  if ((DAT_048729a0 & 1) == 0) {
    DAT_04872990 = 0;
    DAT_04872998 = 0;
    DAT_04872980 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872980;
    DAT_04872988 = &DAT_04648d68;
    DAT_048729a0 = 1;
  }
  return;
}


