/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314da90; name: _INIT_1167
 */


void _INIT_1167(void)

{
  if ((DAT_04879818 & 1) == 0) {
    DAT_04879808 = 0;
    DAT_04879810 = 0;
    DAT_048797f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048797f8;
    DAT_04879800 = &DAT_0467b088;
    DAT_04879818 = 1;
  }
  return;
}


