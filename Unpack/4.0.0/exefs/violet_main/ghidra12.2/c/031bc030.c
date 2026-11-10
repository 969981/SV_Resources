/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bc030; name: _INIT_1563
 */


void _INIT_1563(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_04882fe2 = 1;
  DAT_04882f90 = &DAT_04882fa0;
  DAT_04882f98 = 0x8000000400000000;
  DAT_04882ff0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04882f90;
  DAT_04882fe0 = 0;
  DAT_04882fe8 = "common.visualize.displayhandler";
  FUN_00100190(puVar1,&DAT_04882f90,&PTR_LOOP_04483000);
  return;
}


