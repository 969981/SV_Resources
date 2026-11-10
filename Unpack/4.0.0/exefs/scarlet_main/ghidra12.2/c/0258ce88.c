/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0258ce88; name: FUN_0258ce88
 */


long FUN_0258ce88(undefined8 param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *local_8;
  
  puVar1 = &LAB_0258d1e4;
  if (DAT_04851f58 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0258d27c(&local_8,param_1,puVar1,0);
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_8 != (long *)0x0) {
    plVar2 = local_8 + 7;
  }
  lVar3 = *plVar2;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return lVar3;
}


