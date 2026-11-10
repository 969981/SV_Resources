/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146210; name: _INIT_889
 */


void _INIT_889(void)

{
  if ((DAT_04876ca8 & 1) == 0) {
    DAT_04876c98 = 0;
    DAT_04876ca0 = 0;
    DAT_04876c88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c88;
    DAT_04876c90 = &DAT_0466a670;
    DAT_04876ca8 = 1;
  }
  return;
}


