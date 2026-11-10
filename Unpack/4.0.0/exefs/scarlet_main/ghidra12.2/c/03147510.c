/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147510; name: _INIT_925
 */


void _INIT_925(void)

{
  if ((DAT_04877248 & 1) == 0) {
    DAT_04877238 = 0;
    DAT_04877240 = 0;
    DAT_04877228 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877228;
    DAT_04877230 = &DAT_0466c848;
    DAT_04877248 = 1;
  }
  return;
}


