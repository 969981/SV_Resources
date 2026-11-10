/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145b80; name: _INIT_868
 */


void _INIT_868(void)

{
  if ((DAT_04876960 & 1) == 0) {
    DAT_04876950 = 0;
    DAT_04876958 = 0;
    DAT_04876940 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876940;
    DAT_04876948 = &DAT_04669380;
    DAT_04876960 = 1;
  }
  return;
}


