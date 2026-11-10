/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b6c560; name: FUN_01b6c560
 */


undefined8 FUN_01b6c560(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  iVar2 = FUN_00cc4dc0(param_1,2);
  iVar3 = FUN_00cc4dc0(param_1,3);
  if ((DAT_04808848 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04808848);
    if (iVar4 != 0) {
      __cxa_guard_release(&DAT_04808848);
    }
  }
  FUN_01b6c610(uVar1,iVar2 != 0,iVar3 != 0);
  return 0;
}


