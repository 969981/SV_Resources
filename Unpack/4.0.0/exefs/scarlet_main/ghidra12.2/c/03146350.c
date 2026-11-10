/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146350; name: _INIT_893
 */


void _INIT_893(void)

{
  if ((DAT_04876d48 & 1) == 0) {
    DAT_04876d38 = 0;
    DAT_04876d40 = 0;
    DAT_04876d28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876d28;
    DAT_04876d30 = &DAT_0466a9e0;
    DAT_04876d48 = 1;
  }
  return;
}


