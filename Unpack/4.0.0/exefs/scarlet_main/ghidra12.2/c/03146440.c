/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146440; name: _INIT_896
 */


void _INIT_896(void)

{
  if ((DAT_04876dc0 & 1) == 0) {
    DAT_04876db0 = 0;
    DAT_04876db8 = 0;
    DAT_04876da0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876da0;
    DAT_04876da8 = &DAT_0466ad48;
    DAT_04876dc0 = 1;
  }
  return;
}


