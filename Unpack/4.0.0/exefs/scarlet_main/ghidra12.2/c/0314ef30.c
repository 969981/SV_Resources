/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ef30; name: _INIT_1233
 */


void _INIT_1233(void)

{
  if ((DAT_0487a268 & 1) == 0) {
    DAT_0487a258 = 0;
    DAT_0487a260 = 0;
    DAT_0487a248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a248;
    DAT_0487a250 = &DAT_0467f3f0;
    DAT_0487a268 = 1;
  }
  return;
}


