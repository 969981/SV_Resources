/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033af0f0; name: _INIT_2071
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2071(void)

{
  DAT_0488e2d8 = 0;
  DAT_0488e288 = &DAT_0488e298;
  DAT_0488e290 = 0x8000000400000000;
  DAT_0488e2da = 1;
  DAT_0488e2e8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488e2e0 = "base.s11n.xml.write";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488e288;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488e288,&PTR_LOOP_04483000);
  DAT_0488e2f0 = DAT_04883288;
  DAT_0488e310 = FUN_033aee20;
  DAT_0488e318 = 0;
  DAT_04883288 = &DAT_0488e2f0;
  _DAT_0488e320 = 0;
  DAT_0488e300 = 0;
  DAT_0488e308 = PTR_DAT_047e68f8;
  DAT_0488e2f8 = "Common::WriteFormatXmlTagfile";
  return;
}


