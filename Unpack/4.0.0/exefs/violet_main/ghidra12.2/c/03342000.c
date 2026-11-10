/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03342000; name: _INIT_2046
 */


void _INIT_2046(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488d72a = 1;
  DAT_0488d6d8 = &DAT_0488d6e8;
  DAT_0488d6e0 = 0x8000000400000000;
  DAT_0488d738 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d6d8;
  DAT_0488d728 = 0;
  DAT_0488d730 = "base.ver.patchRegNode";
  FUN_00100190(puVar1,&DAT_0488d6d8,&PTR_LOOP_04483000);
  return;
}


