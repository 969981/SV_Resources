/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175e70; name: _INIT_1286
 */


void _INIT_1286(void)

{
  if ((DAT_0487b778 & 1) == 0) {
    DAT_0487b768 = 0;
    DAT_0487b770 = 0;
    DAT_0487b758 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b758;
    DAT_0487b760 = &DAT_0468a130;
    DAT_0487b778 = 1;
  }
  return;
}


