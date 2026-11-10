/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033f20; name: _INIT_679
 */


void _INIT_679(void)

{
  if ((DAT_04871a78 & 1) == 0) {
    DAT_04871a68 = 0;
    DAT_04871a70 = 0;
    DAT_04871a58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a58;
    DAT_04871a60 = &DAT_04642c80;
    DAT_04871a78 = 1;
  }
  return;
}


