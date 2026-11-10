/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03272430; name: _INIT_1888
 */


void _INIT_1888(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488a732 = 1;
  DAT_0488a6e0 = &DAT_0488a6f0;
  DAT_0488a6e8 = 0x8000000400000000;
  DAT_0488a740 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488a6e0;
  DAT_0488a730 = 0;
  DAT_0488a738 = "geo.collide.planarsolid";
  FUN_00100190(puVar1,&DAT_0488a6e0,&PTR_LOOP_04483000);
  return;
}


