/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d4a0; name: _INIT_1148
 */


void _INIT_1148(void)

{
  if ((DAT_04879520 & 1) == 0) {
    DAT_04879510 = 0;
    DAT_04879518 = 0;
    DAT_04879500 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879500;
    DAT_04879508 = &DAT_04679df8;
    DAT_04879520 = 1;
  }
  return;
}


