/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d43f0; name: _INIT_1598
 */


void _INIT_1598(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488417a = 1;
  DAT_04884128 = &DAT_04884138;
  DAT_04884130 = 0x8000000400000000;
  DAT_04884188 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884128;
  DAT_04884178 = 0;
  DAT_04884180 = "reflect.AttributeReader";
  FUN_00100190(puVar1,&DAT_04884128,&PTR_LOOP_04483000);
  return;
}


