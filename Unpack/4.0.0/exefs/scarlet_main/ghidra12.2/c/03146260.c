/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146260; name: _INIT_890
 */


void _INIT_890(void)

{
  if ((DAT_04876cd0 & 1) == 0) {
    DAT_04876cc0 = 0;
    DAT_04876cc8 = 0;
    DAT_04876cb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876cb0;
    DAT_04876cb8 = &DAT_0466a748;
    DAT_04876cd0 = 1;
  }
  return;
}


