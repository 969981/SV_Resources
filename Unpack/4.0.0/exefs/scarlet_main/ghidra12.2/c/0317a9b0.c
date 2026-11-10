/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a9b0; name: _INIT_1429
 */


void _INIT_1429(void)

{
  if ((DAT_0487cdd0 & 1) == 0) {
    DAT_0487cdc0 = 0;
    DAT_0487cdc8 = 0;
    DAT_0487cdb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cdb0;
    DAT_0487cdb8 = &DAT_04693788;
    DAT_0487cdd0 = 1;
  }
  return;
}


