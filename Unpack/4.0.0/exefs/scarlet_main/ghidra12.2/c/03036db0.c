/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036db0; name: _INIT_822
 */


void _INIT_822(void)

{
  if ((DAT_048730d0 & 1) == 0) {
    DAT_048730c0 = 0;
    DAT_048730c8 = 0;
    DAT_048730b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048730b0;
    DAT_048730b8 = &DAT_0464bd68;
    DAT_048730d0 = 1;
  }
  return;
}


