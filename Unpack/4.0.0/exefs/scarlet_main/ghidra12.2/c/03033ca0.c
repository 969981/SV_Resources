/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033ca0; name: _INIT_671
 */


void _INIT_671(void)

{
  if ((DAT_04871938 & 1) == 0) {
    DAT_04871928 = 0;
    DAT_04871930 = 0;
    DAT_04871918 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871918;
    DAT_04871920 = &DAT_046424e0;
    DAT_04871938 = 1;
  }
  return;
}


