/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bc860; name: _INIT_2081
 */


void _INIT_2081(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488e692 = 1;
  DAT_0488e640 = &DAT_0488e650;
  DAT_0488e648 = 0x8000000400000000;
  DAT_0488e6a0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488e640;
  DAT_0488e690 = 0;
  DAT_0488e698 = "sys.io.loadutil";
  FUN_00100190(puVar1,&DAT_0488e640,&PTR_LOOP_04483000);
  return;
}


