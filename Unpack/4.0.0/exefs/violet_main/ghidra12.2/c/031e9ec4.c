/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e9ec4; name: FUN_031e9ec4
 */


ulong FUN_031e9ec4(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_30;
  long local_28;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    local_28 = param_2;
    lVar5 = FUN_031ea29c(param_1,&local_28);
    if ((lVar5 == 0) ||
       (uVar6 = *(ulong *)(*param_1 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), uVar6 == 0)) {
      uVar3 = FUN_031ea32c(param_1,&local_28);
      if (*(uint *)(param_1 + 1) == uVar3) {
        iVar2 = uVar3 + 1;
        if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar3) {
          FUN_031ea448(param_1,PTR_PTR_047d1a50,(long)iVar2);
          uVar3 = *(uint *)(param_1 + 1);
        }
        plVar1 = (long *)(*param_1 + (long)(int)uVar3 * 0x10);
        *plVar1 = local_28;
        plVar1[1] = 0x100000000;
        *(int *)(param_1 + 1) = iVar2;
      }
      else {
        *(undefined8 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = 0x100000000;
      }
      uVar4 = 0;
      if (*(long *)(local_28 + 8) != 0) {
        uVar4 = FUN_031e9ec4(param_1);
      }
      local_30 = FUN_031e97e8(param_1,uVar4,local_28);
      uVar6 = local_30 & 0xffffffff;
      local_30 = local_30 & 0xffffffff;
      FUN_031e9fd0(param_1,&local_28,&local_30);
    }
  }
  return uVar6 & 0xffffffff;
}


