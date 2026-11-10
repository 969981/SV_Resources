/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c96b90; name: FUN_01c96b90
 */


undefined8 FUN_01c96b90(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_04816960 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04816960), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04816960);
  }
  uVar1 = FUN_01c96bf0();
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


