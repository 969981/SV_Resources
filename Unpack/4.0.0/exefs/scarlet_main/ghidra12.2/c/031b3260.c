/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b3260; name: _INIT_1551
 */


void _INIT_1551(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0487efba = 1;
  DAT_0487ef68 = &DAT_0487ef78;
  DAT_0487ef70 = 0x8000000400000000;
  DAT_0487efc8 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0487ef68;
  DAT_0487efb8 = 0;
  DAT_0487efc0 = "common.image.dds";
  FUN_00100190(puVar1,&DAT_0487ef68,&PTR_LOOP_04483000);
  return;
}


