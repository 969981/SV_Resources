/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031495b0; name: _INIT_1006
 */


void _INIT_1006(void)

{
  if ((DAT_04877ef0 & 1) == 0) {
    DAT_04877ee0 = 0;
    DAT_04877ee8 = 0;
    DAT_04877ed0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ed0;
    DAT_04877ed8 = &DAT_04671848;
    DAT_04877ef0 = 1;
  }
  return;
}


