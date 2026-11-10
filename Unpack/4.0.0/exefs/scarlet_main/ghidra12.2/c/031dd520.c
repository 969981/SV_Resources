/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dd520; name: _INIT_1610
 */


void _INIT_1610(void)

{
  DAT_04884408 = 0;
  DAT_048843b8 = &DAT_048843c8;
  DAT_048843c0 = 0x8000000400000000;
  DAT_0488440a = 1;
  DAT_04884418 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04884410 = "reflect.Type";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_048843b8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_048843b8,&PTR_LOOP_04483000);
  DAT_04884420 = 0;
  FUN_00100190(&LAB_031db1f0,&DAT_04884420,&PTR_LOOP_04483000);
  DAT_04884428 = "$hkReflect::Detail::DerivedDataCache";
  DAT_04884430 = &LAB_031db200;
  DAT_04884438 = &LAB_031db330;
  DAT_04884440 = &DAT_04884420;
  DAT_04884448 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04884428;
  return;
}


