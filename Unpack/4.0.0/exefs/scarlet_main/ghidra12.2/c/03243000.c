/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03243000; name: _INIT_1706
 */


void _INIT_1706(void)

{
  if ((DAT_04885db8 & 1) == 0) {
    DAT_04885c48 = 1;
    DAT_04885c40 = &PTR_LAB_046acad8;
    DAT_04885db8 = 1;
  }
  return;
}


