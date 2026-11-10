/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a4420; name: _INIT_2069
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2069(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e3450;
  DAT_0488e0e8 = 0;
  DAT_0488e098 = &DAT_0488e0a8;
  DAT_0488e0a0 = 0x8000000400000000;
  DAT_0488e0ea = 1;
  DAT_0488e0f8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488e0f0 = "base.s11n.tagfile.write";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488e098;
  puVar1 = PTR_LAB_047d1bf8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488e098,&PTR_LOOP_04483000);
  DAT_0488e160 = *(undefined8 *)puVar2;
  DAT_0488e100 = &DAT_0488e110;
  DAT_0488e108 = 0x8000000400000000;
  DAT_0488e150 = 0;
  DAT_0488e152 = 1;
  DAT_0488e158 = "base.s11n.tagfile.write.compendium";
  *(undefined ***)puVar2 = &DAT_0488e100;
  FUN_00100190(puVar1,&DAT_0488e100,&PTR_LOOP_04483000);
  DAT_0488e168 = DAT_04883288;
  DAT_0488e188 = &LAB_033a3c70;
  DAT_0488e190 = 0;
  DAT_0488e178 = 0;
  DAT_0488e180 = PTR_DAT_047e68b8;
  _DAT_0488e198 = 0;
  DAT_04883288 = &DAT_0488e168;
  DAT_0488e170 = "Common::WriteFormatBinaryTagfile";
  return;
}


