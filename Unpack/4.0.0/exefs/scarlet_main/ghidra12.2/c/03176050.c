/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176050; name: _INIT_1292
 */


void _INIT_1292(void)

{
  if ((DAT_0487b868 & 1) == 0) {
    DAT_0487b858 = 0;
    DAT_0487b860 = 0;
    DAT_0487b848 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b848;
    DAT_0487b850 = &DAT_0468a8a8;
    DAT_0487b868 = 1;
  }
  return;
}


