/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031496f0; name: _INIT_1010
 */


void _INIT_1010(void)

{
  if ((DAT_04877f90 & 1) == 0) {
    DAT_04877f80 = 0;
    DAT_04877f88 = 0;
    DAT_04877f70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877f70;
    DAT_04877f78 = &DAT_04671bd0;
    DAT_04877f90 = 1;
  }
  return;
}


