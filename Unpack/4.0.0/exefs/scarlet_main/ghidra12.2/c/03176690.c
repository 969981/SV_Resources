/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176690; name: _INIT_1312
 */


void _INIT_1312(void)

{
  if ((DAT_0487bb88 & 1) == 0) {
    DAT_0487bb78 = 0;
    DAT_0487bb80 = 0;
    DAT_0487bb68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bb68;
    DAT_0487bb70 = &DAT_0468c030;
    DAT_0487bb88 = 1;
  }
  return;
}


