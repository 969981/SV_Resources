/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178af0; name: _INIT_1384
 */


void _INIT_1384(void)

{
  if ((DAT_0487c6c8 & 1) == 0) {
    DAT_0487c6b8 = 0;
    DAT_0487c6c0 = 0;
    DAT_0487c6a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c6a8;
    DAT_0487c6b0 = &DAT_046909d0;
    DAT_0487c6c8 = 1;
  }
  return;
}


