/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334c2a0; name: _INIT_2048
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2048(void)

{
  DAT_0488d828 = 0;
  DAT_0488d7d8 = &DAT_0488d7e8;
  DAT_0488d7e0 = 0x8000000400000000;
  DAT_0488d82a = 1;
  DAT_0488d838 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488d830 = "base.ver.patcher";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d7d8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488d7d8,&PTR_LOOP_04483000);
  DAT_0488d840 = DAT_04883288;
  DAT_0488d860 = &LAB_0334c1d0;
  DAT_0488d868 = 0;
  DAT_04883288 = &DAT_0488d840;
  _DAT_0488d870 = 0;
  DAT_0488d850 = 0;
  DAT_0488d858 = PTR_DAT_047e6768;
  DAT_0488d848 = "Common::Patcher";
  return;
}


