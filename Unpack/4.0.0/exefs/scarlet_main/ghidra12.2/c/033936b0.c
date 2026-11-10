/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033936b0; name: _INIT_2065
 */


void _INIT_2065(void)

{
  if ((DAT_0488e068 & 1) == 0) {
    DAT_0488e058 = 0;
    DAT_0488e060 = 0;
    DAT_0488e048 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e048;
    DAT_0488e050 = &DAT_047b2ce8;
    DAT_0488e068 = 1;
  }
  return;
}


