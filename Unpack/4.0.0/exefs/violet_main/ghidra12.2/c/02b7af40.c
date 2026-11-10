/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b7af40; name: _INIT_408
 */


void _INIT_408(void)

{
  undefined *puVar1;
  
  DAT_04842718 = 0;
  DAT_0484272c = 1;
  nn::os::InitializeLightEvent(&DAT_04842720,0,1);
  FUN_00100190(PTR_LAB_047ddce0,&DAT_04842718,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_02b7aec0,&DAT_04842730,&PTR_LOOP_04483000);
  puVar1 = PTR_LAB_047ddce8;
  FUN_00100190(PTR_LAB_047ddce8,&DAT_04842738,&PTR_LOOP_04483000);
  FUN_00100190(puVar1,&DAT_04842740,&PTR_LOOP_04483000);
  return;
}


