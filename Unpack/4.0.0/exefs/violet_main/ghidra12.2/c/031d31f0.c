/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d31f0; name: _INIT_1593
 */


void _INIT_1593(void)

{
  undefined *puVar1;
  
  DAT_04883ed0 = 0;
  DAT_04883e80 = &DAT_04883e90;
  DAT_04883e88 = 0x8000000400000000;
  DAT_04883ed2 = 1;
  DAT_04883ee0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04883ed8 = "common.base.memory";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04883e80;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04883e80,&PTR_LOOP_04483000);
  puVar1 = PTR_FUN_047e5b10;
  DAT_04883ef0 = 0;
  FUN_00100190(PTR_FUN_047e5b10,&DAT_04883ef0,&PTR_LOOP_04483000);
  DAT_04883ef8 = 0;
  FUN_00100190(puVar1,&DAT_04883ef8,&PTR_LOOP_04483000);
  DAT_04883f00 = 0;
  FUN_00100190(puVar1,&DAT_04883f00,&PTR_LOOP_04483000);
  DAT_04883f08 = 0;
  FUN_00100190(puVar1,&DAT_04883f08,&PTR_LOOP_04483000);
  return;
}


