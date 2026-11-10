/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149240; name: _INIT_995
 */


void _INIT_995(void)

{
  if ((DAT_04877d38 & 1) == 0) {
    DAT_04877d28 = 0;
    DAT_04877d30 = 0;
    DAT_04877d18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d18;
    DAT_04877d20 = &DAT_04670cb8;
    DAT_04877d38 = 1;
  }
  return;
}


