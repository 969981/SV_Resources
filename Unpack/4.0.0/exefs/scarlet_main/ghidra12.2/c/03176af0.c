/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176af0; name: _INIT_1326
 */


void _INIT_1326(void)

{
  if ((DAT_0487bdb8 & 1) == 0) {
    DAT_0487bda8 = 0;
    DAT_0487bdb0 = 0;
    DAT_0487bd98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bd98;
    DAT_0487bda0 = &DAT_0468cf70;
    DAT_0487bdb8 = 1;
  }
  return;
}


