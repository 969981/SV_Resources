/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175ce0; name: _INIT_1281
 */


void _INIT_1281(void)

{
  if ((DAT_0487b6b0 & 1) == 0) {
    DAT_0487b6a0 = 0;
    DAT_0487b6a8 = 0;
    DAT_0487b690 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b690;
    DAT_0487b698 = &DAT_04689b70;
    DAT_0487b6b0 = 1;
  }
  return;
}


