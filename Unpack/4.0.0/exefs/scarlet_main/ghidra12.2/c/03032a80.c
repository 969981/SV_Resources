/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032a80; name: _INIT_613
 */


void _INIT_613(void)

{
  if ((DAT_04871028 & 1) == 0) {
    DAT_04871018 = 0;
    DAT_04871020 = 0;
    DAT_04871008 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871008;
    DAT_04871010 = &DAT_0463efa8;
    DAT_04871028 = 1;
  }
  return;
}


