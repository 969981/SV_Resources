/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319b870; name: _INIT_1493
 */


void _INIT_1493(void)

{
  if ((DAT_0487e100 & 1) == 0) {
    DAT_0487e0f0 = 0;
    DAT_0487e0f8 = 0;
    DAT_0487e0e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e0e0;
    DAT_0487e0e8 = &DAT_0469d550;
    DAT_0487e100 = 1;
  }
  return;
}


