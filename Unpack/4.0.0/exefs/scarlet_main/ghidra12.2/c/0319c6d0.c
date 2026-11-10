/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c6d0; name: _INIT_1539
 */


void _INIT_1539(void)

{
  if ((DAT_0487e830 & 1) == 0) {
    DAT_0487e820 = 0;
    DAT_0487e828 = 0;
    DAT_0487e810 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e810;
    DAT_0487e818 = &DAT_046a0838;
    DAT_0487e830 = 1;
  }
  return;
}


