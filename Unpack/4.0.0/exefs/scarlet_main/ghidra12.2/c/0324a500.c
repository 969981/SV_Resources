/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a500; name: _INIT_1718
 */


void _INIT_1718(void)

{
  if ((DAT_04888268 & 1) == 0) {
    DAT_04888258 = 0;
    DAT_04888260 = 0;
    DAT_04888248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888248;
    DAT_04888250 = &DAT_046b9a58;
    DAT_04888268 = 1;
  }
  return;
}


