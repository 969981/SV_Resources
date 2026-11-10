/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034150; name: _INIT_686
 */


void _INIT_686(void)

{
  if ((DAT_04871b90 & 1) == 0) {
    DAT_04871b80 = 0;
    DAT_04871b88 = 0;
    DAT_04871b70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871b70;
    DAT_04871b78 = &DAT_04643318;
    DAT_04871b90 = 1;
  }
  return;
}


