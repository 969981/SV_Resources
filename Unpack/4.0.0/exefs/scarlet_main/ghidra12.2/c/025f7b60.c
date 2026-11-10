/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025f7b60; name: FUN_025f7b60
 */


undefined8 FUN_025f7b60(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_025f7c00(param_1,1);
  if ((DAT_048540c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048540c0);
    if (iVar1 != 0) {
      DAT_04854268 = 1;
      __cxa_guard_release(&DAT_048540c0);
    }
  }
  FUN_025f7c8c(auStack_38,uVar2);
  FUN_01076240(param_1,auStack_38);
  FUN_01d51964(auStack_38);
  return 1;
}


