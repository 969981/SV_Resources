/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d720; name: _INIT_1156
 */


void _INIT_1156(void)

{
  if ((DAT_04879660 & 1) == 0) {
    DAT_04879650 = 0;
    DAT_04879658 = 0;
    DAT_04879640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879640;
    DAT_04879648 = &DAT_0467a648;
    DAT_04879660 = 1;
  }
  return;
}


