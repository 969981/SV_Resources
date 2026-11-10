/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031e60; name: _INIT_574
 */


void _INIT_574(void)

{
  if ((DAT_04870a20 & 1) == 0) {
    DAT_04870a10 = 0;
    DAT_04870a18 = 0;
    DAT_04870a00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870a00;
    DAT_04870a08 = &DAT_0463ca40;
    DAT_04870a20 = 1;
  }
  return;
}


