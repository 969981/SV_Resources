/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031370; name: _INIT_539
 */


void _INIT_539(void)

{
  if ((DAT_048704a8 & 1) == 0) {
    DAT_04870498 = 0;
    DAT_048704a0 = 0;
    DAT_04870488 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870488;
    DAT_04870490 = &DAT_0463a830;
    DAT_048704a8 = 1;
  }
  return;
}


