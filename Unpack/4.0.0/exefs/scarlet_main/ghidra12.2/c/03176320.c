/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176320; name: _INIT_1301
 */


void _INIT_1301(void)

{
  if ((DAT_0487b9d0 & 1) == 0) {
    DAT_0487b9c0 = 0;
    DAT_0487b9c8 = 0;
    DAT_0487b9b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b9b0;
    DAT_0487b9b8 = &DAT_0468b330;
    DAT_0487b9d0 = 1;
  }
  return;
}


