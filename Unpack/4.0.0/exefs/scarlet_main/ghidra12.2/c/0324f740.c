/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324f740; name: _INIT_1795
 */


void _INIT_1795(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_04888fa2 = 1;
  DAT_04888f50 = &DAT_04888f60;
  DAT_04888f58 = 0x8000000400000000;
  DAT_04888fb0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04888f50;
  DAT_04888fa0 = 0;
  DAT_04888fa8 = "geo.dynamictree";
  FUN_00100190(puVar1,&DAT_04888f50,&PTR_LOOP_04483000);
  return;
}


