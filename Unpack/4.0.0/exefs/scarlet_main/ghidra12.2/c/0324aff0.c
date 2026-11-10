/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324aff0; name: _INIT_1753
 */


void _INIT_1753(void)

{
  if ((DAT_048887e0 & 1) == 0) {
    DAT_048887d0 = 0;
    DAT_048887d8 = 0;
    DAT_048887c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048887c0;
    DAT_048887c8 = &DAT_046bbb18;
    DAT_048887e0 = 1;
  }
  return;
}


