/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033d90; name: _INIT_674
 */


void _INIT_674(void)

{
  if ((DAT_048719b0 & 1) == 0) {
    DAT_048719a0 = 0;
    DAT_048719a8 = 0;
    DAT_04871990 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871990;
    DAT_04871998 = &DAT_046427c8;
    DAT_048719b0 = 1;
  }
  return;
}


