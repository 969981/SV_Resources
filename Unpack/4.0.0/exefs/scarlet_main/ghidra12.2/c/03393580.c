/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03393580; name: _INIT_2067
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2067(void)

{
  DAT_0488dfa8 = 0;
  DAT_0488df58 = &DAT_0488df68;
  DAT_0488df60 = 0x8000000400000000;
  DAT_0488dfaa = 1;
  DAT_0488dfb8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488dfb0 = "base.s11n.tagfile.read";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488df58;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488df58,&PTR_LOOP_04483000);
  DAT_0488dfe8 = DAT_04883288;
  DAT_0488dfd0 = 1;
  DAT_0488dfc8 = &PTR_LAB_047b2a70;
  DAT_0488dfe0 = 1;
  DAT_0488dfd8 = &PTR_LAB_047b2ac8;
  _DAT_0488e018 = 0;
  DAT_0488dff8 = 0;
  DAT_0488e000 = PTR_DAT_047e6890 + 0x10;
  DAT_0488e008 = &LAB_03393220;
  DAT_0488e010 = 0;
  DAT_04883288 = &DAT_0488dfe8;
  DAT_0488dff0 = "Common::ReadFormatBinaryTagfile";
  return;
}


