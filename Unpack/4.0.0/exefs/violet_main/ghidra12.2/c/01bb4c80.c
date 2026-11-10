/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb4c80; name: FUN_01bb4c80
 */


undefined8 FUN_01bb4c80(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_01bb4d20(param_1,1);
  uVar4 = FUN_01bb4db0(param_1,2);
  if ((DAT_0480c960 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0480c960);
    if (iVar2 != 0) {
      DAT_0480ef20 = 1;
      __cxa_guard_release(&DAT_0480c960,uVar4);
    }
  }
  uVar1 = FUN_01bb4e3c(uVar3,uVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


