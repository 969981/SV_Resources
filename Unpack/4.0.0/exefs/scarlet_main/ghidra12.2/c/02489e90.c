/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02489e90; name: FUN_02489e90
 */


undefined8 FUN_02489e90(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_0484ab20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0484ab20), iVar1 != 0)) {
    DAT_045ba878 = 0x20;
    __cxa_guard_release(&DAT_0484ab20);
  }
  uVar2 = FUN_024864d0(param_1,1);
  uVar2 = FUN_02489c70(&DAT_045ba878,uVar2);
  FUN_00c85bd0(param_1,uVar2);
  return 1;
}


