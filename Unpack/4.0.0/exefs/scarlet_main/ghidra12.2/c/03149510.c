/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149510; name: _INIT_1004
 */


void _INIT_1004(void)

{
  if ((DAT_04877ea0 & 1) == 0) {
    DAT_04877e90 = 0;
    DAT_04877e98 = 0;
    DAT_04877e80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877e80;
    DAT_04877e88 = &DAT_04671558;
    DAT_04877ea0 = 1;
  }
  return;
}


