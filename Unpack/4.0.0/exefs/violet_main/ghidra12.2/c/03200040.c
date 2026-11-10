/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03200040; name: _INIT_1644
 */


void _INIT_1644(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_04884ea2 = 1;
  DAT_04884e50 = &DAT_04884e60;
  DAT_04884e58 = 0x8000000400000000;
  DAT_04884eb0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884e50;
  DAT_04884ea0 = 0;
  DAT_04884ea8 = "base.reflect.typeVm";
  FUN_00100190(puVar1,&DAT_04884e50,&PTR_LOOP_04483000);
  return;
}


