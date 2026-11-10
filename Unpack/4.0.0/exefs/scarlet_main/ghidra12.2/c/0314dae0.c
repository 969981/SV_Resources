/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314dae0; name: _INIT_1168
 */


void _INIT_1168(void)

{
  if ((DAT_04879840 & 1) == 0) {
    DAT_04879830 = 0;
    DAT_04879838 = 0;
    DAT_04879820 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879820;
    DAT_04879828 = &DAT_0467b180;
    DAT_04879840 = 1;
  }
  return;
}


