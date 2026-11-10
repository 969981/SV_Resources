/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033704f0; name: _INIT_2057
 */


void _INIT_2057(void)

{
  DAT_0488db78 = 0;
  DAT_0488db28 = &DAT_0488db38;
  DAT_0488db30 = 0x8000000400000000;
  DAT_0488db7a = 1;
  DAT_0488db88 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488db80 = "base.s11n";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488db28;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488db28,&PTR_LOOP_04483000);
  DAT_0488dba0 = 0;
  DAT_0488db90 = 0;
  DAT_0488db98 = 0;
  DAT_0488dba8 = 0;
  FUN_00100190(&LAB_03370290,&DAT_0488db90,&PTR_LOOP_04483000);
  return;
}


