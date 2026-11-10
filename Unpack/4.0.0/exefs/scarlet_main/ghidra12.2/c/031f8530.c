/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f8530; name: _INIT_1641
 */


void _INIT_1641(void)

{
  DAT_04884ce8 = 0;
  DAT_04884c98 = &DAT_04884ca8;
  DAT_04884ca0 = 0x8000000400000000;
  DAT_04884cea = 1;
  DAT_04884cf8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04884cf0 = "base.reflect.typeRegistration";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884c98;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04884c98,&PTR_LOOP_04483000);
  DAT_04884d00 = 0;
  FUN_00100190(&LAB_031f2350,&DAT_04884d00,&PTR_LOOP_04483000);
  DAT_04884d08 = "$BuiltinTypeReg";
  DAT_04884d10 = &LAB_031f2360;
  DAT_04884d18 = &LAB_031f3a80;
  DAT_04884d20 = &DAT_04884d00;
  DAT_04884d28 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04884d08;
  return;
}


