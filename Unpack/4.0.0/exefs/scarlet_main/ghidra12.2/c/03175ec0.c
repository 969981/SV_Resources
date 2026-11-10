/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175ec0; name: _INIT_1287
 */


void _INIT_1287(void)

{
  if ((DAT_0487b7a0 & 1) == 0) {
    DAT_0487b790 = 0;
    DAT_0487b798 = 0;
    DAT_0487b780 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b780;
    DAT_0487b788 = &DAT_0468a228;
    DAT_0487b7a0 = 1;
  }
  return;
}


