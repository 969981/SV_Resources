/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c360; name: _INIT_1528
 */


void _INIT_1528(void)

{
  if ((DAT_0487e678 & 1) == 0) {
    DAT_0487e668 = 0;
    DAT_0487e670 = 0;
    DAT_0487e658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e658;
    DAT_0487e660 = &DAT_0469fc40;
    DAT_0487e678 = 1;
  }
  return;
}


