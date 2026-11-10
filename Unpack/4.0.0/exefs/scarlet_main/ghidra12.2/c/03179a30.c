/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179a30; name: _INIT_1413
 */


void _INIT_1413(void)

{
  if ((DAT_0487cb50 & 1) == 0) {
    DAT_0487cb40 = 0;
    DAT_0487cb48 = 0;
    DAT_0487cb30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cb30;
    DAT_0487cb38 = &DAT_04692900;
    DAT_0487cb50 = 1;
  }
  return;
}


