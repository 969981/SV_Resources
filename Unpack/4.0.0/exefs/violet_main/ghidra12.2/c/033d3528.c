/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d3528; name: FUN_033d3528
 */


undefined8 FUN_033d3528(long *param_1,long *param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  uVar4 = ((param_3 & 2) * 2 + param_3) * 0x10 & 0xffffffc0 | (param_3 & 1) << 4;
  *(uint *)(param_1 + 1) = uVar4;
  *(uint *)((long)param_1 + 0xc) = param_3;
  pvVar1 = (void *)(**(code **)(*param_2 + 0x20))
                             (param_2,uVar4,0x10,"../../Common/BiquadFilterSimd.h",0x39f);
  uVar5 = 2;
  *param_1 = (long)pvVar1;
  lVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,(ulong)*(uint *)(param_1 + 1));
    uVar4 = 2;
    if (((param_4 ^ 1) & (param_3 & 2) >> 1) == 0) {
      uVar4 = 0;
    }
    uVar3 = 4;
    if (((uint)(3 < param_3) & (param_4 ^ 1)) == 0) {
      uVar3 = 0;
    }
    uVar4 = uVar3 | (param_3 | param_4) & 1 | uVar4 | *(uint *)((long)param_1 + 0x1c) & 0xfffffff8;
    *(uint *)((long)param_1 + 0x1c) = uVar4;
    if (param_1[2] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar4 = *(uint *)((long)param_1 + 0x1c);
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    uVar4 = -(uVar4 >> 1 & 1) & 0x60 | (uVar4 & 1) << 7 | (int)(uVar4 << 0x1d) >> 0x1f & 0x14U;
    *(uint *)(param_1 + 3) = uVar4;
    pvVar1 = (void *)(**(code **)(*param_2 + 0x20))
                               (param_2,uVar4,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
    param_1[2] = (long)pvVar1;
    if (pvVar1 != (void *)0x0) {
      memset(pvVar1,0,(ulong)*(uint *)(param_1 + 3));
      return 1;
    }
    lVar2 = *param_1;
    uVar5 = 0x34;
  }
  if (lVar2 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return uVar5;
}


