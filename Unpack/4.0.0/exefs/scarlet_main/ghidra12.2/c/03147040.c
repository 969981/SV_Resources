/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147040; name: _INIT_919
 */


void _INIT_919(void)

{
  if ((DAT_04877158 & 1) == 0) {
    DAT_04877148 = 0;
    DAT_04877150 = 0;
    DAT_04877138 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877138;
    DAT_04877140 = &DAT_0466c1f8;
    DAT_04877158 = 1;
  }
  return;
}


