/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242fa0; name: _INIT_1704
 */


void _INIT_1704(void)

{
  if ((DAT_04885da8 & 1) == 0) {
    DAT_04885be8 = 1;
    DAT_04885be0 = &PTR_LAB_046aca08;
    DAT_04885da8 = 1;
  }
  return;
}


