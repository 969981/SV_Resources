/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177690; name: _INIT_1337
 */


void _INIT_1337(void)

{
  if ((DAT_0487bf70 & 1) == 0) {
    DAT_0487bf60 = 0;
    DAT_0487bf68 = 0;
    DAT_0487bf50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bf50;
    DAT_0487bf58 = &DAT_0468d950;
    DAT_0487bf70 = 1;
  }
  return;
}


