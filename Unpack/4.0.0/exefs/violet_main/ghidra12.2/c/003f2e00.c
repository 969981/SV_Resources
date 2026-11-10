/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f2e00; name: FUN_003f2e00
 */


ulong FUN_003f2e00(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if ((int)param_2 == 0) {
    return 1;
  }
  param_2 = param_2 & 0xffffffff;
  iVar2 = FUN_003eb480();
  if (iVar2 != 0) {
    uVar3 = FUN_003eb9f0(param_1,param_2);
    return uVar3;
  }
  if ((int)param_1[2] == 0) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 1);
      uVar6 = (uint)param_2;
      if ((int)uVar1 <= lVar4) {
        if ((uint)lVar4 != uVar1) {
          return 1;
        }
        lVar4 = FUN_003eb9a0(param_1,uVar1 + 1);
        if (lVar4 == 0) {
          return 0;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        *(uint *)(*param_1 + (ulong)uVar1 * 4) = uVar6;
        return 1;
      }
      lVar5 = lVar4 * 4;
      lVar4 = lVar4 + 1;
      uVar1 = *(uint *)(*param_1 + lVar5);
      param_2 = 1;
      *(uint *)(*param_1 + lVar5) = uVar1 + uVar6;
    } while (CARRY4(uVar1,uVar6));
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
    param_2 = FUN_003f2f20(param_1,param_2);
    param_2 = param_2 & 0xffffffff;
    iVar2 = FUN_003eb480(param_1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
      return param_2;
    }
  }
  return param_2;
}


