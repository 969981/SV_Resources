/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c1d0; name: _INIT_1523
 */


void _INIT_1523(void)

{
  if ((DAT_0487e5b0 & 1) == 0) {
    DAT_0487e5a0 = 0;
    DAT_0487e5a8 = 0;
    DAT_0487e590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e590;
    DAT_0487e598 = &DAT_0469f618;
    DAT_0487e5b0 = 1;
  }
  return;
}


