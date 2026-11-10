/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f500; name: _INIT_1247
 */


void _INIT_1247(void)

{
  if ((DAT_0487a498 & 1) == 0) {
    DAT_0487a488 = 0;
    DAT_0487a490 = 0;
    DAT_0487a478 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a478;
    DAT_0487a480 = &DAT_04680060;
    DAT_0487a498 = 1;
  }
  return;
}


