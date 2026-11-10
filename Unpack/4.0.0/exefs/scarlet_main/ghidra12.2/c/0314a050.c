/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a050; name: _INIT_1035
 */


void _INIT_1035(void)

{
  if ((DAT_04878378 & 1) == 0) {
    DAT_04878368 = 0;
    DAT_04878370 = 0;
    DAT_04878358 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878358;
    DAT_04878360 = &DAT_046735b0;
    DAT_04878378 = 1;
  }
  return;
}


