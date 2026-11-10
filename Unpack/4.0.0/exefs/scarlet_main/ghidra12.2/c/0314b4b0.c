/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b4b0; name: _INIT_1082
 */


void _INIT_1082(void)

{
  if ((DAT_04878ad0 & 1) == 0) {
    DAT_04878ac0 = 0;
    DAT_04878ac8 = 0;
    DAT_04878ab0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878ab0;
    DAT_04878ab8 = &DAT_04675ff8;
    DAT_04878ad0 = 1;
  }
  return;
}


