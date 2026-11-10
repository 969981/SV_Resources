/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149880; name: _INIT_1015
 */


void _INIT_1015(void)

{
  if ((DAT_04878058 & 1) == 0) {
    DAT_04878048 = 0;
    DAT_04878050 = 0;
    DAT_04878038 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878038;
    DAT_04878040 = &DAT_04672148;
    DAT_04878058 = 1;
  }
  return;
}


