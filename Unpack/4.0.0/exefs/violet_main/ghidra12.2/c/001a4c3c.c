/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a4c3c; name: FUN_001a4c3c
 */


void FUN_001a4c3c(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__s;
  uint uVar4;
  ulong uVar5;
  
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_04484178;
  param_1[1] = param_2;
  param_1[2] = param_2 + param_4;
  param_1[3] = param_2 + param_3;
  param_1[6] = param_3 + -8;
  param_1[7] = param_5;
  lVar1 = param_3;
  if (0x7ffffffe < param_3) {
    lVar1 = 0x7fffffff;
  }
  uVar4 = (uint)lVar1;
  if (lVar1 < -0x7fffffff) {
    uVar4 = 0x80000000;
  }
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  if (1 < uVar4) {
    uVar4 = uVar4 - 1;
    if (uVar4 >> 0x17 != 0) {
      uVar5 = 0x18;
      goto LAB_001a4cec;
    }
    if (0x3ffff < uVar4) {
      uVar5 = (ulong)(0x20 - (int)LZCOUNT(uVar4));
      goto LAB_001a4cec;
    }
  }
  uVar5 = 0x12;
LAB_001a4cec:
  *(uint *)(param_1 + 0xd) = (uint)uVar5;
  *(int *)((long)param_1 + 0x6c) = (1 << (ulong)((uint)uVar5 & 0x1f)) + -0x10;
  param_1[0x12] = 0xb7a5646300000000;
  param_1[0xf] = 0;
  lVar1 = (4L << (uVar5 & 0x3f)) + 0x40;
  lVar3 = (**(code **)PTR_PTR_047cb890)(lVar1,0x10);
  if (lVar3 == 0) {
    FUN_0015ed40(lVar1);
  }
  __s = (void *)(lVar3 + 0x3fU & 0xffffffffffffffc0);
  param_1[0xb] = lVar3;
  param_1[0xc] = __s;
  memset(__s,0,4L << ((ulong)*(uint *)(param_1 + 0xd) & 0x3f));
  FUN_001a4e04(param_1 + 0xb,param_2,param_1[2],param_4);
  plVar2 = (long *)param_1[2];
  uVar4 = *(uint *)(param_1 + 0xd);
  param_1[0xf] = plVar2;
  uVar5 = (ulong)(uint)((int)((ulong)(*plVar2 * param_1[0x12]) >> 0x20) << (ulong)(uVar4 & 0x1f)) |
          ((ulong)(*plVar2 * param_1[0x12]) >> 0x20) >> ((ulong)(0x20 - uVar4) & 0x3f);
  *(int *)(param_1 + 0x13) = (int)uVar5;
  param_1[0x10] = param_1[0xc] + (uVar5 & *(uint *)((long)param_1 + 0x6c)) * 4;
  param_1[0x11] =
       param_1[0xc] +
       ((ulong)(*plVar2 * -0x30e44323485a9b9d) >> ((ulong)-uVar4 & 0x3f) & 0x3ffffffffffffff0) * 4;
  FUN_00164100(param_1 + 0x14,param_1[7],plVar2,param_1[3],0x40000000);
  return;
}


