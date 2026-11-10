/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319baa0; name: _INIT_1500
 */


void _INIT_1500(void)

{
  if ((DAT_0487e218 & 1) == 0) {
    DAT_0487e208 = 0;
    DAT_0487e210 = 0;
    DAT_0487e1f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e1f8;
    DAT_0487e200 = &DAT_0469deb8;
    DAT_0487e218 = 1;
  }
  return;
}


