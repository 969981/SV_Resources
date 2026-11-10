/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031491a0; name: _INIT_993
 */


void _INIT_993(void)

{
  if ((DAT_04877ce8 & 1) == 0) {
    DAT_04877cd8 = 0;
    DAT_04877ce0 = 0;
    DAT_04877cc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877cc8;
    DAT_04877cd0 = &DAT_04670b78;
    DAT_04877ce8 = 1;
  }
  return;
}


