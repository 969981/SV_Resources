/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178c80; name: _INIT_1389
 */


void _INIT_1389(void)

{
  if ((DAT_0487c790 & 1) == 0) {
    DAT_0487c780 = 0;
    DAT_0487c788 = 0;
    DAT_0487c770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c770;
    DAT_0487c778 = &DAT_04690fd0;
    DAT_0487c790 = 1;
  }
  return;
}


