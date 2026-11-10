/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324e880; name: _INIT_1794
 */


void _INIT_1794(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e3450;
  DAT_04888ed0 = 0;
  DAT_04888e80 = &DAT_04888e90;
  DAT_04888e88 = 0x8000000400000000;
  DAT_04888ed2 = 1;
  DAT_04888ee0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04888ed8 = "default";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04888e80;
  puVar1 = PTR_LAB_047d1bf8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04888e80,&PTR_LOOP_04483000);
  DAT_04888f48 = *(undefined8 *)puVar2;
  DAT_04888f38 = 0;
  DAT_04888f3a = 1;
  *(undefined ***)puVar2 = &DAT_04888ee8;
  DAT_04888ee8 = &DAT_04888ef8;
  DAT_04888ef0 = 0x8000000400000000;
  DAT_04888f40 = "common";
  FUN_00100190(puVar1,&DAT_04888ee8,&PTR_LOOP_04483000);
  return;
}


