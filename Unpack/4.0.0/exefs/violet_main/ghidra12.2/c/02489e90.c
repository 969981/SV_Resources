/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


