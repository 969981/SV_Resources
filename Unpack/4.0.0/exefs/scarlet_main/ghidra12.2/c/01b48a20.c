/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b48a20; name: FUN_01b48a20
 */


undefined8 FUN_01b48a20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c646d0(param_1,1,0);
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04806cd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04806cd8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04806cd8,uVar3);
  }
  FUN_01b48aa8(uVar2,uVar3);
  return 0;
}


