/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b8970; name: _INIT_1553
 */


void _INIT_1553(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0487f0b2 = 1;
  DAT_0487f060 = &DAT_0487f070;
  DAT_0487f068 = 0x8000000400000000;
  DAT_0487f0c0 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0487f060;
  DAT_0487f0b0 = 0;
  DAT_0487f0b8 = "common.image.tga";
  FUN_00100190(puVar1,&DAT_0487f060,&PTR_LOOP_04483000);
  return;
}


