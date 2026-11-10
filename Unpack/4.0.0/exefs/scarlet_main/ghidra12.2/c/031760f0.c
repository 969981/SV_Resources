/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031760f0; name: _INIT_1294
 */


void _INIT_1294(void)

{
  if ((DAT_0487b8b8 & 1) == 0) {
    DAT_0487b8a8 = 0;
    DAT_0487b8b0 = 0;
    DAT_0487b898 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b898;
    DAT_0487b8a0 = &DAT_0468ab98;
    DAT_0487b8b8 = 1;
  }
  return;
}


