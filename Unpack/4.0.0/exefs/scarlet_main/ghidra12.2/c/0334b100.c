/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334b100; name: _INIT_2047
 */


void _INIT_2047(void)

{
  DAT_0488d790 = 0;
  DAT_0488d740 = &DAT_0488d750;
  DAT_0488d748 = 0x8000000400000000;
  DAT_0488d792 = 1;
  DAT_0488d7a0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488d798 = "base.ver.patchRegistry";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d740;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488d740,&PTR_LOOP_04483000);
  DAT_0488d7a8 = 0;
  FUN_00100190(&LAB_03342054,&DAT_0488d7a8,&PTR_LOOP_04483000);
  DAT_0488d7b0 = "$hkReflect::Version::PatchRegistry";
  DAT_0488d7b8 = &LAB_03342060;
  DAT_0488d7c0 = &LAB_03342270;
  DAT_0488d7c8 = &DAT_0488d7a8;
  DAT_0488d7d0 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_0488d7b0;
  return;
}


