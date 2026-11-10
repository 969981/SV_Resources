/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175f10; name: _INIT_1288
 */


void _INIT_1288(void)

{
  if ((DAT_0487b7c8 & 1) == 0) {
    DAT_0487b7b8 = 0;
    DAT_0487b7c0 = 0;
    DAT_0487b7a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b7a8;
    DAT_0487b7b0 = &DAT_0468a320;
    DAT_0487b7c8 = 1;
  }
  return;
}


