/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326e470; name: _INIT_1887
 */


void _INIT_1887(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488a6ca = 1;
  DAT_0488a678 = &DAT_0488a688;
  DAT_0488a680 = 0x8000000400000000;
  DAT_0488a6d8 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488a678;
  DAT_0488a6c8 = 0;
  DAT_0488a6d0 = "geo.collide.planargeometry";
  FUN_00100190(puVar1,&DAT_0488a678,&PTR_LOOP_04483000);
  return;
}


