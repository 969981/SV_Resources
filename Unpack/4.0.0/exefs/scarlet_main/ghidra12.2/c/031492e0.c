/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031492e0; name: _INIT_997
 */


void _INIT_997(void)

{
  if ((DAT_04877d88 & 1) == 0) {
    DAT_04877d78 = 0;
    DAT_04877d80 = 0;
    DAT_04877d68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d68;
    DAT_04877d70 = &DAT_04670da8;
    DAT_04877d88 = 1;
  }
  return;
}


