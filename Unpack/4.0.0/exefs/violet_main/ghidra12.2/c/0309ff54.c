/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309ff54; name: FUN_0309ff54
 */


void FUN_0309ff54(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *__dest;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  iVar4 = FUN_030a0e78();
  if ((int)param_1[1] == iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_030a0f74(param_1,(long)iVar1);
      iVar4 = (int)param_1[1];
    }
    lVar7 = *param_1 + (long)iVar4 * 0x30;
    *(undefined4 *)(*param_1 + (long)iVar4 * 0x30) = *param_2;
    puVar6 = (undefined8 *)(lVar7 + 8);
    *puVar6 = 0;
    piVar8 = (int *)(lVar7 + 0x10);
    piVar8[0] = 0;
    piVar8[1] = -0x80000000;
    if (puVar6 != param_3) {
      iVar4 = *(int *)(param_3 + 1);
      pvVar5 = (void *)*param_3;
      if (iVar4 < 1) {
        __dest = (void *)0x0;
      }
      else {
        FUN_030a1194(puVar6,PTR_PTR_047d1a50,(long)iVar4);
        __dest = (void *)*puVar6;
      }
      memcpy(__dest,pvVar5,(long)iVar4 * 0x14);
      *piVar8 = iVar4;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    lVar7 = *param_1;
    puVar6 = (undefined8 *)(lVar7 + (long)iVar4 * 0x30 + 8);
    lVar9 = (long)iVar4;
    if (puVar6 != param_3) {
      iVar4 = *(int *)(param_3 + 1);
      pvVar5 = (void *)*param_3;
      if ((int)(*(uint *)(lVar7 + lVar9 * 0x30 + 0x14) & 0x7fffffff) < iVar4) {
        FUN_030a1194(puVar6,PTR_PTR_047d1a50,(long)iVar4);
      }
      memcpy((void *)*puVar6,pvVar5,(long)iVar4 * 0x14);
      *(int *)(lVar7 + lVar9 * 0x30 + 0x10) = iVar4;
    }
    lVar7 = lVar7 + lVar9 * 0x30;
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_3 + 4);
    *(undefined8 *)(lVar7 + 0x18) = uVar2;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
  }
  return;
}


