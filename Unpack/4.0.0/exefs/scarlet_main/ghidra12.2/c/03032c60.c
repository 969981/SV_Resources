/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032c60; name: _INIT_619
 */


void _INIT_619(void)

{
  if ((DAT_04871118 & 1) == 0) {
    DAT_04871108 = 0;
    DAT_04871110 = 0;
    DAT_048710f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048710f8;
    DAT_04871100 = &DAT_0463f578;
    DAT_04871118 = 1;
  }
  return;
}


