/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ead0; name: _INIT_1666
 */


void _INIT_1666(void)

{
  DAT_04884f08 = 0;
  DAT_04884eb8 = &DAT_04884ec8;
  DAT_04884ec0 = 0x8000000400000000;
  DAT_04884f0a = 1;
  DAT_04884f18 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04884f10 = "base.reflect.cloner";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884eb8;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04884eb8,&PTR_LOOP_04483000);
  DAT_04884f20 = 0;
  FUN_00100190(&LAB_0320acd4,&DAT_04884f20,&PTR_LOOP_04483000);
  DAT_04884f28 = "$AfterReflectNewLock";
  DAT_04884f30 = &LAB_0320ace0;
  DAT_04884f38 = &LAB_0320add0;
  DAT_04884f40 = &DAT_04884f20;
  DAT_04884f48 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04884f28;
  return;
}


