/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265450; name: _INIT_1880
 */


void _INIT_1880(void)

{
  if ((DAT_0488a568 & 1) == 0) {
    DAT_0488a558 = 0;
    DAT_0488a560 = 0;
    DAT_0488a548 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a548;
    DAT_0488a550 = &DAT_046c7cc8;
    DAT_0488a568 = 1;
  }
  return;
}


