/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033890; name: _INIT_658
 */


void _INIT_658(void)

{
  if ((DAT_04871730 & 1) == 0) {
    DAT_04871720 = 0;
    DAT_04871728 = 0;
    DAT_04871710 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871710;
    DAT_04871718 = &DAT_04641738;
    DAT_04871730 = 1;
  }
  return;
}


