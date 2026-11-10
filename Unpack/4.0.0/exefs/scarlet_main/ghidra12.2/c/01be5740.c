/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be5740; name: FUN_01be5740
 */


undefined8 FUN_01be5740(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_0480e8f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480e8f0), iVar1 != 0)) {
    DAT_0480ef18 = 1;
    __cxa_guard_release(&DAT_0480e8f0);
  }
  uVar2 = FUN_01be2a80(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_01be57c8(uVar2,uVar3);
  return 0;
}


