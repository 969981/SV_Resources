/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


