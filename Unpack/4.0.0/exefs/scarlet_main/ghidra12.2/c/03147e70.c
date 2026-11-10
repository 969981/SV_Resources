/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147e70; name: _INIT_943
 */


void _INIT_943(void)

{
  if ((DAT_04877518 & 1) == 0) {
    DAT_04877500 = 1;
    DAT_04877508 = FUN_031479fc;
    DAT_04877510 = 0;
    DAT_048774f8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048774f8,&PTR_LOOP_04483000);
    DAT_04877518 = 1;
  }
  return;
}


