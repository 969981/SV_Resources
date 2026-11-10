/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef6a70; name: _INIT_507
 */


void _INIT_507(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0486b2b2 = 1;
  DAT_0486b260 = &DAT_0486b270;
  DAT_0486b268 = 0x8000000400000000;
  DAT_0486b2c0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0486b260;
  DAT_0486b2b0 = 0;
  DAT_0486b2b8 = "hknp.collide.shape";
  FUN_00100190(puVar1,&DAT_0486b260,&PTR_LOOP_04483000);
  return;
}


