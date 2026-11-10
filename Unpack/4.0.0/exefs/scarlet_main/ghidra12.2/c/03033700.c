/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033700; name: _INIT_653
 */


void _INIT_653(void)

{
  if ((DAT_04871668 & 1) == 0) {
    DAT_04871658 = 0;
    DAT_04871660 = 0;
    DAT_04871648 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871648;
    DAT_04871650 = &DAT_046413a0;
    DAT_04871668 = 1;
  }
  return;
}


