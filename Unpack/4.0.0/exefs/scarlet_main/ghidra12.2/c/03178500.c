/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178500; name: _INIT_1365
 */


void _INIT_1365(void)

{
  if ((DAT_0487c3d0 & 1) == 0) {
    DAT_0487c3c0 = 0;
    DAT_0487c3c8 = 0;
    DAT_0487c3b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c3b0;
    DAT_0487c3b8 = &DAT_0468f680;
    DAT_0487c3d0 = 1;
  }
  return;
}


