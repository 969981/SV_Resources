/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b850; name: _INIT_1441
 */


void _INIT_1441(void)

{
  if ((DAT_0487cfb0 & 1) == 0) {
    DAT_0487cfa0 = 0;
    DAT_0487cfa8 = 0;
    DAT_0487cf90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cf90;
    DAT_0487cf98 = &DAT_046941f0;
    DAT_0487cfb0 = 1;
  }
  return;
}


