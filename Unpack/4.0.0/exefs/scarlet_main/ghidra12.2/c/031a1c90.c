/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a1c90; name: _INIT_1547
 */


void _INIT_1547(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0487e97a = 1;
  DAT_0487e928 = &DAT_0487e938;
  DAT_0487e930 = 0x8000000400000000;
  DAT_0487e988 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0487e928;
  DAT_0487e978 = 0;
  DAT_0487e980 = "geo.skinnedmeshshape";
  FUN_00100190(puVar1,&DAT_0487e928,&PTR_LOOP_04483000);
  return;
}


