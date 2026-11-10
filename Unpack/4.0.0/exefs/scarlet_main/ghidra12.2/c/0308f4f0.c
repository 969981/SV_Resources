/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308f4f0; name: _INIT_833
 */


void _INIT_833(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0487328a = 1;
  DAT_04873238 = &DAT_04873248;
  DAT_04873240 = 0x8000000400000000;
  DAT_04873298 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04873238;
  DAT_04873288 = 0;
  DAT_04873290 = "ai.NavMesh";
  FUN_00100190(puVar1,&DAT_04873238,&PTR_LOOP_04483000);
  return;
}


