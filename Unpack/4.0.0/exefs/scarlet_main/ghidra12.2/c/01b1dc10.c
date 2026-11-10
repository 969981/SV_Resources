/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1dc10; name: FUN_01b1dc10
 */


undefined8 FUN_01b1dc10(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01b195c0(param_1,1);
  uVar3 = FUN_01af41c0(param_1,2);
  if (((DAT_048038c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048038c8), iVar1 != 0)) {
    DAT_048043b0 = 1;
    __cxa_guard_release(&DAT_048038c8,uVar3);
  }
  FUN_01b1dc9c(uVar2,uVar3);
  return 0;
}


