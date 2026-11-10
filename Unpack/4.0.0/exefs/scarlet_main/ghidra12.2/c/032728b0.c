/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032728b0; name: _INIT_1890
 */


void _INIT_1890(void)

{
  DAT_0488a798 = 0;
  DAT_0488a748 = &DAT_0488a758;
  DAT_0488a750 = 0x8000000400000000;
  DAT_0488a79a = 1;
  DAT_0488a7a8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488a7a0 = "geo.convexdecompo";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488a748;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488a748,&PTR_LOOP_04483000);
  DAT_0488a7b0 = &PTR_LAB_046c83b8;
  DAT_0488a7b8 = &PTR_LAB_046c8428;
  return;
}


