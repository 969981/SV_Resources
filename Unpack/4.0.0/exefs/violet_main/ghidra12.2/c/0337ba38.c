/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0337ba38; name: FUN_0337ba38
 */


void FUN_0337ba38(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 local_28;
  
  iVar6 = *(int *)(param_1 + 0x40);
  iVar7 = iVar6;
  if (iVar6 <= param_2 + 1) {
    iVar7 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar7) {
    FUN_03375910((long *)(param_1 + 0x38),PTR_PTR_047d1a50,(long)iVar7);
    iVar6 = *(int *)(param_1 + 0x40);
  }
  uVar1 = iVar7 - iVar6;
  if (uVar1 == 0 || iVar7 < iVar6) {
    if (iVar7 < iVar6) {
      *(int *)(param_1 + 0x40) = iVar7;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x10);
    *(int *)(param_1 + 0x40) = iVar7;
    if (iVar7 != iVar6 + 1) {
      iVar7 = -(uVar1 & 0xfffffffe);
      puVar4 = puVar5;
      do {
        puVar5 = puVar4 + 4;
        *puVar4 = 0;
        puVar4[1] = 0xffffffff00000000;
        iVar7 = iVar7 + 2;
        puVar4[2] = 0;
        puVar4[3] = 0xffffffff00000000;
        puVar4 = puVar5;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 1) != 0) {
      *puVar5 = 0;
      puVar5[1] = 0xffffffff00000000;
    }
  }
  local_28 = param_3[1];
  lVar2 = FUN_03379400((long *)(param_1 + 0xd8),&local_28);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(lVar2 + 4) * 0x10 + 8);
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 0x10);
  iVar6 = *(int *)(param_3 + 3);
  iVar7 = -iVar6;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  *puVar5 = *param_3;
  *(undefined4 *)(puVar5 + 1) = uVar3;
  *(int *)((long)puVar5 + 0xc) = iVar7;
  return;
}


