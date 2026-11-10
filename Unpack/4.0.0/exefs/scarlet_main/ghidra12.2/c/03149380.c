/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149380; name: _INIT_999
 */


void _INIT_999(void)

{
  if ((DAT_04877dd8 & 1) == 0) {
    DAT_04877dc8 = 0;
    DAT_04877dd0 = 0;
    DAT_04877db8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877db8;
    DAT_04877dc0 = &DAT_04670f60;
    DAT_04877dd8 = 1;
  }
  return;
}


