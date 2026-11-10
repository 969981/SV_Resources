/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033ac0; name: _INIT_665
 */


void _INIT_665(void)

{
  if ((DAT_04871848 & 1) == 0) {
    DAT_04871838 = 0;
    DAT_04871840 = 0;
    DAT_04871828 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871828;
    DAT_04871830 = &DAT_04641fa8;
    DAT_04871848 = 1;
  }
  return;
}


