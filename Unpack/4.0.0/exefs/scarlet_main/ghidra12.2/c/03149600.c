/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149600; name: _INIT_1007
 */


void _INIT_1007(void)

{
  if ((DAT_04877f18 & 1) == 0) {
    DAT_04877f08 = 0;
    DAT_04877f10 = 0;
    DAT_04877ef8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ef8;
    DAT_04877f00 = &DAT_04671900;
    DAT_04877f18 = 1;
  }
  return;
}


