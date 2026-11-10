/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03393660; name: _INIT_2064
 */


void _INIT_2064(void)

{
  if ((DAT_0488e040 & 1) == 0) {
    DAT_0488e030 = 0;
    DAT_0488e038 = 0;
    DAT_0488e020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e020;
    DAT_0488e028 = &DAT_047b2c48;
    DAT_0488e040 = 1;
  }
  return;
}


