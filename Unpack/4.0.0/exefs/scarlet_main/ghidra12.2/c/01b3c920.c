/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b3c920; name: FUN_01b3c920
 */


undefined8 FUN_01b3c920(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  iVar2 = FUN_00cc4dc0(param_1,2);
  if ((DAT_04806498 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04806498);
    if (iVar4 != 0) {
      __cxa_guard_release(&DAT_04806498);
    }
  }
  uVar3 = FUN_017d2474(uVar1,iVar2 != 0);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


