/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00274700; name: _INIT_11
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_11(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047cc3a8;
  uRam00000000047ee730 = 0;
  _DAT_047ee728 = 0;
  DAT_047ee720 = 0;
  uRam00000000047ee740 = 0;
  _DAT_047ee738 = 0;
  uRam00000000047ee750 = 0;
  _DAT_047ee748 = 0;
  FUN_00100190(PTR_LAB_047cc3a8,&DAT_047ee720,&PTR_LOOP_04483000);
  DAT_047ee758 = 1;
  DAT_047ee760 = 0;
  *(undefined4 **)PTR_DAT_047cc398 = &DAT_047ee720;
  DAT_047ee780 = 0;
  DAT_047ee788 = 0;
  DAT_047ee778 = 0;
  FUN_00100190(puVar1,&DAT_047ee758,&PTR_LOOP_04483000);
  *(undefined4 **)PTR_DAT_047cc3a0 = &DAT_047ee758;
  return;
}


