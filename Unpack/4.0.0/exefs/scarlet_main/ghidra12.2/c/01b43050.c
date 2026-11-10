/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b43050; name: FUN_01b43050
 */


undefined8 FUN_01b43050(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00c92df0(param_1,1,0);
  if ((DAT_04806780 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04806780);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04806780);
    }
  }
  uVar1 = FUN_01b430d0(uVar3);
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


