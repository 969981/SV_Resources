/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031cd0; name: _INIT_569
 */


void _INIT_569(void)

{
  if ((DAT_04870958 & 1) == 0) {
    DAT_04870948 = 0;
    DAT_04870950 = 0;
    DAT_04870938 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870938;
    DAT_04870940 = &DAT_0463c538;
    DAT_04870958 = 1;
  }
  return;
}


