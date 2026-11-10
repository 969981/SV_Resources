/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145770; name: _INIT_855
 */


void _INIT_855(void)

{
  if ((DAT_04876758 & 1) == 0) {
    DAT_04876748 = 0;
    DAT_04876750 = 0;
    DAT_04876738 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876738;
    DAT_04876740 = &DAT_04668778;
    DAT_04876758 = 1;
  }
  return;
}


