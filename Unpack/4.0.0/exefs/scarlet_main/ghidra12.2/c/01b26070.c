/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b26070; name: FUN_01b26070
 */


long FUN_01b26070(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *local_8;
  
  FUN_01b26be8(&local_8,param_2,*param_1);
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 7;
  }
  lVar2 = *plVar1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return lVar2;
}


