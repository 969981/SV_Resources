/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324cae0; name: _INIT_1792
 */


void _INIT_1792(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_04888dda = 1;
  DAT_04888d88 = &DAT_04888d98;
  DAT_04888d90 = 0x8000000400000000;
  DAT_04888de8 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04888d88;
  DAT_04888dd8 = 0;
  DAT_04888de0 = "common.monitor";
  FUN_00100190(puVar1,&DAT_04888d88,&PTR_LOOP_04483000);
  return;
}


