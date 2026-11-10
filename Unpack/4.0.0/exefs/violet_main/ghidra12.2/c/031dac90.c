/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dac90; name: _INIT_1606
 */


void _INIT_1606(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_048843a2 = 1;
  DAT_04884350 = &DAT_04884360;
  DAT_04884358 = 0x8000000400000000;
  DAT_048843b0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884350;
  DAT_048843a0 = 0;
  DAT_048843a8 = "base.reflect.cloner";
  FUN_00100190(puVar1,&DAT_04884350,&PTR_LOOP_04483000);
  return;
}


