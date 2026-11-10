/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242010; name: _INIT_1687
 */


void _INIT_1687(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488586a = 1;
  DAT_04885818 = &DAT_04885828;
  DAT_04885820 = 0x8000000400000000;
  DAT_04885878 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04885818;
  DAT_04885868 = 0;
  DAT_04885870 = &DAT_03c62ce0;
  FUN_00100190(puVar1,&DAT_04885818,&PTR_LOOP_04483000);
  return;
}


