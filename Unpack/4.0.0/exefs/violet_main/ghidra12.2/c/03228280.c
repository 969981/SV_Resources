/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03228280; name: _INIT_1671
 */


void _INIT_1671(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_048853a2 = 1;
  DAT_04885350 = &DAT_04885360;
  DAT_04885358 = 0x8000000400000000;
  DAT_048853b0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04885350;
  DAT_048853a0 = 0;
  DAT_048853a8 = "base.s11n.readBuffer";
  FUN_00100190(puVar1,&DAT_04885350,&PTR_LOOP_04483000);
  return;
}


