/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031491f0; name: _INIT_994
 */


void _INIT_994(void)

{
  if ((DAT_04877d10 & 1) == 0) {
    DAT_04877d00 = 0;
    DAT_04877d08 = 0;
    DAT_04877cf0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877cf0;
    DAT_04877cf8 = &DAT_04670c70;
    DAT_04877d10 = 1;
  }
  return;
}


