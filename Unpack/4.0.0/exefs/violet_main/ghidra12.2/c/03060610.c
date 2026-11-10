/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03060610; name: FUN_03060610
 */


void FUN_03060610(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  iVar7 = *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4);
  if (iVar7 == -1) {
    iVar7 = *(int *)(param_1 + 0x88);
    *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4) = iVar7;
    iVar5 = *(int *)(param_1 + 0x88);
    lVar6 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar5) {
      FUN_03060850(param_1 + 0x80,PTR_PTR_047d1a50,lVar6 + 1);
      iVar5 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = (int)(lVar6 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x80) + (long)iVar5 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x80) + (long)iVar7 * 8);
  piVar8 = piVar1 + 1;
  iVar7 = *piVar8;
  if (iVar7 == 1) {
    local_68[0] = *piVar1;
    FUN_030604c0(param_1,local_68,1);
    *piVar1 = -1;
    *piVar8 = 0;
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + (long)(*param_3 - *(int *)(param_1 + 0x30)) * 4) = 0
    ;
  }
  else {
    FUN_03060094(local_70,param_1);
    lVar6 = (long)*param_3 - (long)*piVar1;
    pvVar2 = (void *)(*(long *)(param_1 + 0x90) + (long)(*piVar1 - *(int *)(param_1 + 0x30)) * 8);
    pvVar3 = (void *)(*(long *)(param_1 + 0x90) + (long)(local_70[0] - *(int *)(param_1 + 0x30)) * 8
                     );
    memcpy(pvVar3,pvVar2,lVar6 * 8);
    uVar9 = (uint)lVar6;
    uVar4 = iVar7 + ~uVar9;
    memcpy((void *)((long)pvVar3 + lVar6 * 8),(void *)((long)pvVar2 + lVar6 * 8 + 8),
           -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
    pvVar2 = (void *)(*(long *)(param_1 + 0xb0) + (long)(*piVar1 - *(int *)(param_1 + 0x30)) * 4);
    pvVar3 = (void *)(*(long *)(param_1 + 0xb0) + (long)(local_70[0] - *(int *)(param_1 + 0x30)) * 4
                     );
    memcpy(pvVar3,pvVar2,lVar6 * 4);
    memcpy((void *)((long)pvVar3 + lVar6 * 4),(void *)((long)pvVar2 + lVar6 * 4 + 4),
           -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
    if (iVar7 != 0) {
      memset(pvVar2,0,(long)iVar7 << 2);
    }
    iVar5 = *(int *)(param_1 + 0x58);
    pvVar2 = (void *)(*(long *)(param_1 + 0xa0) +
                     (long)((*piVar1 - *(int *)(param_1 + 0x30)) * iVar5) * 4);
    pvVar3 = (void *)(*(long *)(param_1 + 0xa0) +
                     (long)((local_70[0] - *(int *)(param_1 + 0x30)) * iVar5) * 4);
    memcpy(pvVar3,pvVar2,(long)iVar5 * 4 * lVar6);
    memcpy((void *)((long)pvVar3 + (long)(int)(iVar5 * uVar9) * 4),
           (void *)((long)pvVar2 + (long)(int)(iVar5 * (uVar9 + 1)) * 4),
           (long)iVar5 * 4 * (long)(int)(~uVar9 + iVar5 * iVar7));
    local_78[0] = *piVar1;
    FUN_030604c0(param_1,local_78,*piVar8);
    *piVar1 = local_70[0];
    *piVar8 = iVar7 + -1;
  }
  return;
}


