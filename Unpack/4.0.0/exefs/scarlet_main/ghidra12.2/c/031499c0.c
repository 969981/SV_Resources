/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031499c0; name: _INIT_1019
 */


void _INIT_1019(void)

{
  if ((DAT_048780f8 & 1) == 0) {
    DAT_048780e8 = 0;
    DAT_048780f0 = 0;
    DAT_048780d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048780d8;
    DAT_048780e0 = &DAT_046725b0;
    DAT_048780f8 = 1;
  }
  return;
}


