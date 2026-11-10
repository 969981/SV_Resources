/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a4e0; name: _INIT_1423
 */


void _INIT_1423(void)

{
  if ((DAT_0487cce0 & 1) == 0) {
    DAT_0487ccd0 = 0;
    DAT_0487ccd8 = 0;
    DAT_0487ccc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ccc0;
    DAT_0487ccc8 = &DAT_046931f0;
    DAT_0487cce0 = 1;
  }
  return;
}


