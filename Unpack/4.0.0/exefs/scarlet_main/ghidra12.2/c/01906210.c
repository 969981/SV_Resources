/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01906210; name: FUN_01906210
 */


undefined8 FUN_01906210(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04813b68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04813b68), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04813b68,uVar3);
  }
  FUN_01906298(uVar1,uVar3);
  return 0;
}


