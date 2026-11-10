/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025adbfc; name: FUN_025adbfc
 */


long FUN_025adbfc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *local_8;
  
  uVar2 = 8;
  if (DAT_04851ea8 == '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  FUN_025ae138(&local_8,param_1,uVar2);
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 7;
  }
  lVar3 = *plVar1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return lVar3;
}


