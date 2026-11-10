/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178a50; name: _INIT_1382
 */


void _INIT_1382(void)

{
  if ((DAT_0487c678 & 1) == 0) {
    DAT_0487c668 = 0;
    DAT_0487c670 = 0;
    DAT_0487c658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c658;
    DAT_0487c660 = &DAT_046907f0;
    DAT_0487c678 = 1;
  }
  return;
}


