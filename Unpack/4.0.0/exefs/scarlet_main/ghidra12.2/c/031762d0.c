/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031762d0; name: _INIT_1300
 */


void _INIT_1300(void)

{
  if ((DAT_0487b9a8 & 1) == 0) {
    DAT_0487b998 = 0;
    DAT_0487b9a0 = 0;
    DAT_0487b988 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b988;
    DAT_0487b990 = &DAT_0468b248;
    DAT_0487b9a8 = 1;
  }
  return;
}


