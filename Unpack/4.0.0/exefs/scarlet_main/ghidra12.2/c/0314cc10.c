/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314cc10; name: _INIT_1130
 */


void _INIT_1130(void)

{
  if ((DAT_04879250 & 1) == 0) {
    DAT_04879240 = 0;
    DAT_04879248 = 0;
    DAT_04879230 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879230;
    DAT_04879238 = &DAT_04678ae0;
    DAT_04879250 = 1;
  }
  return;
}


