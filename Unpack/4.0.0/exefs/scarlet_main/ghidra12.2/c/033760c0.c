/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033760c0; name: _INIT_2060
 */


void _INIT_2060(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488dd12 = 1;
  DAT_0488dcc0 = &DAT_0488dcd0;
  DAT_0488dcc8 = 0x8000000400000000;
  DAT_0488dd20 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488dcc0;
  DAT_0488dd10 = 0;
  DAT_0488dd18 = "base.s11n.indexedBundle";
  FUN_00100190(puVar1,&DAT_0488dcc0,&PTR_LOOP_04483000);
  return;
}


