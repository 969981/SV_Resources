/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149470; name: _INIT_1002
 */


void _INIT_1002(void)

{
  if ((DAT_04877e50 & 1) == 0) {
    DAT_04877e40 = 0;
    DAT_04877e48 = 0;
    DAT_04877e30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877e30;
    DAT_04877e38 = &DAT_04671268;
    DAT_04877e50 = 1;
  }
  return;
}


