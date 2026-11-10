/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033e30; name: _INIT_676
 */


void _INIT_676(void)

{
  if ((DAT_04871a00 & 1) == 0) {
    DAT_048719f0 = 0;
    DAT_048719f8 = 0;
    DAT_048719e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048719e0;
    DAT_048719e8 = &DAT_046429a0;
    DAT_04871a00 = 1;
  }
  return;
}


