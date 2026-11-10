/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5eec8; name: FUN_00e5eec8
 */


void FUN_00e5eec8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_30;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 - 3U < 2) {
    if ((*(char *)(param_1 + 0x9c) != '\0') && ((*(uint *)(param_1 + 0xa0) & 0xfffffffd) == 0)) {
      FUN_0278e4d4(param_1);
    }
    if (*(long *)(param_1 + 0x1c0) == 0) {
      local_28 = 0;
    }
    else {
      FUN_0278e618(&local_28);
      if ((local_28 != 0) &&
         ((*(long **)(local_28 + 0x60) == (long *)0x0 ||
          (uVar3 = (**(code **)(**(long **)(local_28 + 0x60) + 0x70))(), (uVar3 & 1) == 0)))) {
        FUN_0278e6ac(&local_30,param_1);
        FUN_0186e1d8(param_1 + 0x1d0,0);
        uVar2 = local_30;
        local_30 = 0;
        *(undefined8 *)(param_1 + 0x1d0) = uVar2;
        FUN_0186e214(&local_30);
        uVar4 = 5;
        if (*(long *)(param_1 + 0x1d0) == 0) {
          uVar4 = 1;
          FUN_0278e49c(param_1);
        }
        *(undefined4 *)(param_1 + 0x98) = uVar4;
      }
    }
    FUN_0278e884(&local_28);
  }
  else {
    if (iVar1 == 2) {
      if ((*(long **)(param_1 + 0x1d0) != (long *)0x0) &&
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x1d0) + 0x70))(), (uVar3 & 1) != 0)) {
        return;
      }
      uVar4 = 3;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      if ((*(long **)(param_1 + 0x1d0) != (long *)0x0) &&
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x1d0) + 0x70))(), (uVar3 & 1) != 0)) {
        return;
      }
      FUN_0278e49c(param_1);
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar4;
  }
  return;
}


