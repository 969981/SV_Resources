/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149b50; name: _INIT_1024
 */


void _INIT_1024(void)

{
  if ((DAT_048781c0 & 1) == 0) {
    DAT_048781b0 = 0;
    DAT_048781b8 = 0;
    DAT_048781a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048781a0;
    DAT_048781a8 = &DAT_04672b40;
    DAT_048781c0 = 1;
  }
  return;
}


