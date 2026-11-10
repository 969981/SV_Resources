/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035dc0; name: _INIT_777
 */


void _INIT_777(void)

{
  if ((DAT_048729c8 & 1) == 0) {
    DAT_048729b8 = 0;
    DAT_048729c0 = 0;
    DAT_048729a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048729a8;
    DAT_048729b0 = &DAT_04648ee0;
    DAT_048729c8 = 1;
  }
  return;
}


