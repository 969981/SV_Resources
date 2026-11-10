/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264c80; name: _INIT_1855
 */


void _INIT_1855(void)

{
  if ((DAT_0488a180 & 1) == 0) {
    DAT_0488a170 = 0;
    DAT_0488a178 = 0;
    DAT_0488a160 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a160;
    DAT_0488a168 = &DAT_046c5e58;
    DAT_0488a180 = 1;
  }
  return;
}


