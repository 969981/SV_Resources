/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178460; name: _INIT_1363
 */


void _INIT_1363(void)

{
  if ((DAT_0487c380 & 1) == 0) {
    DAT_0487c370 = 0;
    DAT_0487c378 = 0;
    DAT_0487c360 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c360;
    DAT_0487c368 = &DAT_0468f430;
    DAT_0487c380 = 1;
  }
  return;
}


