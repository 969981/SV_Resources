/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c590; name: _INIT_1535
 */


void _INIT_1535(void)

{
  if ((DAT_0487e790 & 1) == 0) {
    DAT_0487e780 = 0;
    DAT_0487e788 = 0;
    DAT_0487e770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e770;
    DAT_0487e778 = &DAT_046a0458;
    DAT_0487e790 = 1;
  }
  return;
}


