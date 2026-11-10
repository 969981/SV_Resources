/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175d30; name: _INIT_1282
 */


void _INIT_1282(void)

{
  if ((DAT_0487b6d8 & 1) == 0) {
    DAT_0487b6c8 = 0;
    DAT_0487b6d0 = 0;
    DAT_0487b6b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b6b8;
    DAT_0487b6c0 = &DAT_04689c50;
    DAT_0487b6d8 = 1;
  }
  return;
}


