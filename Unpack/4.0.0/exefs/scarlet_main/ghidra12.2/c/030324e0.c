/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030324e0; name: _INIT_595
 */


void _INIT_595(void)

{
  if ((DAT_04870d58 & 1) == 0) {
    DAT_04870d48 = 0;
    DAT_04870d50 = 0;
    DAT_04870d38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870d38;
    DAT_04870d40 = &DAT_0463de58;
    DAT_04870d58 = 1;
  }
  return;
}


