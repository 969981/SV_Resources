/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ec90; name: _INIT_1482
 */


void _INIT_1482(void)

{
  if ((DAT_0487d850 & 1) == 0) {
    DAT_0487d840 = 0;
    DAT_0487d848 = 0;
    DAT_0487d830 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d830;
    DAT_0487d838 = &DAT_04698b70;
    DAT_0487d850 = 1;
  }
  return;
}


