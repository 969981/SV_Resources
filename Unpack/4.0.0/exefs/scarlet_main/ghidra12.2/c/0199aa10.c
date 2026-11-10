/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199aa10; name: FUN_0199aa10
 */


undefined8 FUN_0199aa10(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00c92df0(param_1,1,0);
  if ((DAT_04833378 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04833378);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04833378);
    }
  }
  uVar1 = FUN_0199aa90(uVar3);
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


