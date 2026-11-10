/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146960; name: _INIT_907
 */


void _INIT_907(void)

{
  if ((DAT_04876f78 & 1) == 0) {
    DAT_04876f68 = 0;
    DAT_04876f70 = 0;
    DAT_04876f58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876f58;
    DAT_04876f60 = &DAT_0466b788;
    DAT_04876f78 = 1;
  }
  return;
}


