/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177a00; name: _INIT_1343
 */


void _INIT_1343(void)

{
  if ((DAT_0487c060 & 1) == 0) {
    DAT_0487c050 = 0;
    DAT_0487c058 = 0;
    DAT_0487c040 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c040;
    DAT_0487c048 = &DAT_0468dee8;
    DAT_0487c060 = 1;
  }
  return;
}


