/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033272c0; name: _INIT_2040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2040(void)

{
  DAT_0488d510 = 0;
  DAT_0488d4c0 = &DAT_0488d4d0;
  DAT_0488d4c8 = 0x8000000400000000;
  DAT_0488d512 = 1;
  DAT_0488d520 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488d518 = "base.ver.compatPatcher";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d4c0;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488d4c0,&PTR_LOOP_04483000);
  DAT_0488d528 = DAT_04883288;
  DAT_0488d548 = &LAB_03326cf0;
  DAT_0488d550 = 0;
  DAT_04883288 = &DAT_0488d528;
  _DAT_0488d558 = 0;
  DAT_0488d538 = 0;
  DAT_0488d540 = PTR_DAT_047e66d0;
  DAT_0488d530 = "Compat::Patcher";
  return;
}


