/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f39d0; name: FUN_003f39d0
 */


undefined8 FUN_003f39d0(undefined8 *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar2 = FUN_0043b650(*param_1);
    uVar1 = *(uint *)(param_1 + 0x11);
    uVar5 = (ulong)iVar2;
    if (0 < (int)uVar1) {
      uVar4 = uVar5 - uVar1;
      __n = param_3;
      if (uVar4 <= param_3) {
        __n = uVar4;
      }
      memcpy((void *)((long)param_1 + (ulong)uVar1 + 0x68),param_2,__n);
      param_3 = param_3 - __n;
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)__n;
      if (param_3 == 0) {
        return 1;
      }
      iVar3 = FUN_0043b660(*param_1,param_1 + 9,param_1 + 0xd,iVar2);
      if (iVar3 < 1) {
        return 0;
      }
      param_2 = (void *)((long)param_2 + __n);
    }
    if (uVar5 < param_3) {
      do {
        iVar3 = FUN_0043b660(*param_1,param_1 + 9,param_2,iVar2);
        if (iVar3 < 1) {
          return 0;
        }
        param_3 = param_3 - uVar5;
        param_2 = (void *)((long)param_2 + uVar5);
      } while (uVar5 < param_3);
    }
    memcpy(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
  }
  return 1;
}


