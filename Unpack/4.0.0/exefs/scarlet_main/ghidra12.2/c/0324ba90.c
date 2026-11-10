/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ba90; name: _INIT_1787
 */


void _INIT_1787(void)

{
  if ((DAT_04888d30 & 1) == 0) {
    DAT_04888d20 = 0;
    DAT_04888d28 = 0;
    DAT_04888d10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888d10;
    DAT_04888d18 = &DAT_046bdac8;
    DAT_04888d30 = 1;
  }
  return;
}


