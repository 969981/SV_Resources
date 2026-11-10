/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148ac0; name: _INIT_971
 */


void _INIT_971(void)

{
  if ((DAT_04877978 & 1) == 0) {
    DAT_04877968 = 0;
    DAT_04877970 = 0;
    DAT_04877958 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877958;
    DAT_04877960 = &DAT_0466f208;
    DAT_04877978 = 1;
  }
  return;
}


