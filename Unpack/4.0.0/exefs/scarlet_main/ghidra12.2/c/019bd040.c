/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bd040; name: FUN_019bd040
 */


undefined8 FUN_019bd040(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_048136b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048136b8), iVar1 != 0)) {
    DAT_04815b60 = 1;
    __cxa_guard_release(&DAT_048136b8);
  }
  uVar2 = FUN_01929f80(param_1,1);
  uVar3 = FUN_019bd1d0(param_1,2);
  FUN_019bd0c4(uVar2,uVar3);
  return 0;
}


