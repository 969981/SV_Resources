/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324af50; name: _INIT_1751
 */


void _INIT_1751(void)

{
  if ((DAT_04888790 & 1) == 0) {
    DAT_04888780 = 0;
    DAT_04888788 = 0;
    DAT_04888770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888770;
    DAT_04888778 = &DAT_046bb8a8;
    DAT_04888790 = 1;
  }
  return;
}


