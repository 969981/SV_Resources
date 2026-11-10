/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ad600; name: _INIT_2070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2070(void)

{
  DAT_0488e218 = 0;
  DAT_0488e1c8 = &DAT_0488e1d8;
  DAT_0488e1d0 = 0x8000000400000000;
  DAT_0488e21a = 1;
  DAT_0488e228 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488e220 = "base.s11n.xml.read";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488e1c8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488e1c8,&PTR_LOOP_04483000);
  DAT_0488e238 = 1;
  DAT_0488e248 = 1;
  DAT_0488e230 = PTR_DAT_047e68e0 + 0x10;
  DAT_0488e240 = PTR_DAT_047e68e8 + 0x10;
  _DAT_0488e280 = 0;
  DAT_0488e270 = &LAB_033ad2f0;
  DAT_0488e278 = 0;
  DAT_0488e260 = 0;
  DAT_0488e268 = PTR_DAT_047e68f0 + 0x10;
  DAT_0488e250 = DAT_04883288;
  DAT_0488e258 = "Common::ReadFormatXmlTagfile";
  DAT_04883288 = &DAT_0488e250;
  return;
}


