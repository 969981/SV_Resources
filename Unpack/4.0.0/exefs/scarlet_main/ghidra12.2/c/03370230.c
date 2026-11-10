/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03370230; name: _INIT_2055
 */


void _INIT_2055(void)

{
  if ((DAT_0488db20 & 1) == 0) {
    DAT_0488db10 = 0;
    DAT_0488db18 = 0;
    DAT_0488db00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488db00;
    DAT_0488db08 = &DAT_047ae008;
    DAT_0488db20 = 1;
  }
  return;
}


