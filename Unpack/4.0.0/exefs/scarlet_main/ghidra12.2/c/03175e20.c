/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175e20; name: _INIT_1285
 */


void _INIT_1285(void)

{
  if ((DAT_0487b750 & 1) == 0) {
    DAT_0487b740 = 0;
    DAT_0487b748 = 0;
    DAT_0487b730 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b730;
    DAT_0487b738 = &DAT_04689fb8;
    DAT_0487b750 = 1;
  }
  return;
}


