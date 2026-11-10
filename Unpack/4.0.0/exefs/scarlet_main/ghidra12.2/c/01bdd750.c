/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bdd750; name: FUN_01bdd750
 */


undefined8 FUN_01bdd750(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_0480e5f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480e5f8), iVar1 != 0)) {
    DAT_0480eeb0 = 1;
    __cxa_guard_release(&DAT_0480e5f8);
  }
  uVar2 = FUN_01bdcd90(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_01bdd7d8(uVar2,uVar3);
  return 0;
}


