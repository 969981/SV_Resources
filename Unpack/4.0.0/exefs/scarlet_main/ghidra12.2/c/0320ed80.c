/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ed80; name: _INIT_1655
 */


void _INIT_1655(void)

{
  if ((DAT_04885100 & 1) == 0) {
    DAT_048850f0 = 0;
    DAT_048850f8 = 0;
    DAT_048850e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048850e0;
    DAT_048850e8 = &DAT_046a9848;
    DAT_04885100 = 1;
  }
  return;
}


