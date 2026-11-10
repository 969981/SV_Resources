/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030342e0; name: _INIT_691
 */


void _INIT_691(void)

{
  if ((DAT_04871c58 & 1) == 0) {
    DAT_04871c48 = 0;
    DAT_04871c50 = 0;
    DAT_04871c38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c38;
    DAT_04871c40 = &DAT_046437d0;
    DAT_04871c58 = 1;
  }
  return;
}


