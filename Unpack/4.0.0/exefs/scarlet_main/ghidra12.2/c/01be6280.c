/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be6280; name: FUN_01be6280
 */


undefined8 FUN_01be6280(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_0480f028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0480f028), iVar2 != 0)) {
    __cxa_guard_release(&DAT_0480f028);
  }
  uVar1 = FUN_01be62e0();
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


