/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03381220; name: _INIT_2063
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2063(void)

{
  DAT_0488df08 = 0;
  DAT_0488deb8 = &DAT_0488dec8;
  DAT_0488dec0 = 0x8000000400000000;
  DAT_0488df0a = 1;
  DAT_0488df18 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488df10 = "base.s11n.tagfile.oldRead";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488deb8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488deb8,&PTR_LOOP_04483000);
  DAT_0488df20 = DAT_04883288;
  DAT_0488df40 = &LAB_0337c100;
  DAT_0488df48 = 0;
  DAT_04883288 = &DAT_0488df20;
  DAT_0488df30 = 0;
  DAT_0488df38 = PTR_DAT_047e6870 + 0x10;
  _DAT_0488df50 = 0;
  DAT_0488df28 = "Common::ReadFormatBinaryTagfile2014";
  return;
}


