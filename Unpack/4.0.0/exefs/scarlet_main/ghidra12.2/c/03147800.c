/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147800; name: _INIT_934
 */


void _INIT_934(void)

{
  if ((DAT_048773b0 & 1) == 0) {
    DAT_048773a0 = 0;
    DAT_048773a8 = 0;
    DAT_04877390 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877390;
    DAT_04877398 = &DAT_0466cfe0;
    DAT_048773b0 = 1;
  }
  return;
}


