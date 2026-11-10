/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146080; name: _INIT_884
 */


void _INIT_884(void)

{
  if ((DAT_04876be0 & 1) == 0) {
    DAT_04876bd0 = 0;
    DAT_04876bd8 = 0;
    DAT_04876bc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876bc0;
    DAT_04876bc8 = &DAT_0466a228;
    DAT_04876be0 = 1;
  }
  return;
}


