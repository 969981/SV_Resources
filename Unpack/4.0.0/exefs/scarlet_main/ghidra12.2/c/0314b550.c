/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b550; name: _INIT_1084
 */


void _INIT_1084(void)

{
  if ((DAT_04878b20 & 1) == 0) {
    DAT_04878b10 = 0;
    DAT_04878b18 = 0;
    DAT_04878b00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878b00;
    DAT_04878b08 = &DAT_046761d8;
    DAT_04878b20 = 1;
  }
  return;
}


