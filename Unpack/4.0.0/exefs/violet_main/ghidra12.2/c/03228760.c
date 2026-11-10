/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03228760; name: _INIT_1672
 */


void _INIT_1672(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488540a = 1;
  DAT_048853b8 = &DAT_048853c8;
  DAT_048853c0 = 0x8000000400000000;
  DAT_04885418 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_048853b8;
  DAT_04885408 = 0;
  DAT_04885410 = "base.s11n.writeBuffer";
  FUN_00100190(puVar1,&DAT_048853b8,&PTR_LOOP_04483000);
  return;
}


