/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0337eb08; name: FUN_0337eb08
 */


void FUN_0337eb08(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__src;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  ulong __n;
  long *plVar8;
  byte abStack_80 [64];
  
  uVar1 = param_2 + 7U & 0xfffffff8;
  uVar2 = param_2 + 7U & 0xfffffff8;
  uVar3 = uVar1 | 7;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  __n = (ulong)(uint)((int)uVar3 >> 3);
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < (int)uVar2) {
    FUN_00cb58c0(param_3,PTR_PTR_047d1a50,(long)(int)uVar2);
  }
  if (*(uint *)(param_3 + 1) != uVar2) {
    *(uint *)(param_3 + 1) = uVar2;
  }
  plVar8 = *(long **)(param_1 + 8);
  __src = (void *)*plVar8;
  if (plVar8[1] - (long)__src < (long)__n) {
    plVar5 = (long *)plVar8[7];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,plVar8,abStack_80,__n);
      goto LAB_0337ebd8;
    }
    memcpy(abStack_80,__src,plVar8[1] - (long)__src);
    lVar7 = plVar8[1];
  }
  else {
    memcpy(abStack_80,__src,__n);
    lVar7 = *plVar8 + __n;
  }
  *plVar8 = lVar7;
LAB_0337ebd8:
  if (7 < (int)uVar2) {
    lVar7 = 7;
    pbVar6 = abStack_80;
    do {
      bVar4 = *pbVar6;
      *(byte *)(*param_3 + lVar7 + -7) = bVar4 & 1;
      *(byte *)(*param_3 + lVar7 + -6) = bVar4 >> 1 & 1;
      *(byte *)(*param_3 + lVar7 + -5) = bVar4 >> 2 & 1;
      *(byte *)(*param_3 + lVar7 + -4) = bVar4 >> 3 & 1;
      *(byte *)(*param_3 + lVar7 + -3) = bVar4 >> 4 & 1;
      *(byte *)(*param_3 + lVar7 + -2) = bVar4 >> 5 & 1;
      *(byte *)(*param_3 + lVar7 + -1) = bVar4 >> 6 & 1;
      __n = __n - 1;
      *(byte *)(*param_3 + lVar7) = bVar4 >> 7;
      lVar7 = lVar7 + 8;
      pbVar6 = pbVar6 + 1;
    } while (__n != 0);
  }
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < param_2) {
    FUN_00cb58c0(param_3,PTR_PTR_047d1a50,(long)param_2);
  }
  if ((int)param_3[1] != param_2) {
    *(int *)(param_3 + 1) = param_2;
  }
  return;
}


