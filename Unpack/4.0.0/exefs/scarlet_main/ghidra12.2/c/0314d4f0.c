/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d4f0; name: _INIT_1149
 */


void _INIT_1149(void)

{
  if ((DAT_04879548 & 1) == 0) {
    DAT_04879538 = 0;
    DAT_04879540 = 0;
    DAT_04879528 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879528;
    DAT_04879530 = &DAT_04679ef0;
    DAT_04879548 = 1;
  }
  return;
}


