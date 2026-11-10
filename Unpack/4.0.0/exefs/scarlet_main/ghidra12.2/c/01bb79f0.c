/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb79f0; name: FUN_01bb79f0
 */


undefined8 FUN_01bb79f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_0480cb90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480cb90), iVar1 != 0)) {
    DAT_0480edf8 = 1;
    __cxa_guard_release(&DAT_0480cb90);
  }
  uVar2 = FUN_01bb4db0(param_1,1);
  uVar3 = FUN_01bb7a80(param_1,2);
  FUN_01bb7b0c(uVar2,uVar3);
  return 0;
}


