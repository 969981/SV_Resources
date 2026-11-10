/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242eb0; name: _INIT_1699
 */


void _INIT_1699(void)

{
  if ((DAT_04885d80 & 1) == 0) {
    DAT_04885af8 = 1;
    DAT_04885af0 = &PTR_LAB_046ac800;
    DAT_04885d80 = 1;
  }
  return;
}


