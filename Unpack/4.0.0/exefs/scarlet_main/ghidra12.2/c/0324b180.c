/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b180; name: _INIT_1758
 */


void _INIT_1758(void)

{
  if ((DAT_048888a8 & 1) == 0) {
    DAT_04888898 = 0;
    DAT_048888a0 = 0;
    DAT_04888888 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888888;
    DAT_04888890 = &DAT_046bbf60;
    DAT_048888a8 = 1;
  }
  return;
}


