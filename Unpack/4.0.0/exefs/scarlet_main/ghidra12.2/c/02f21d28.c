/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f21d28; name: FUN_02f21d28
 */


void FUN_02f21d28(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_68;
  
  iVar9 = *(int *)(*(long *)(param_2 + 0x4b0) + 0x20);
  lVar12 = (long)iVar9;
  if ((int)(*(uint *)((long)param_1 + 0x52c) & 0x7fffffff) < iVar9) {
    FUN_02f0a330(param_1 + 0xa4,PTR_PTR_047d1a50,lVar12);
  }
  iVar2 = (int)param_1[0xa5];
  if (iVar2 < iVar9) {
    lVar7 = lVar12 * 0x20 + (long)iVar2 * -0x20;
    *(int *)(param_1 + 0xa5) = iVar9;
    puVar11 = (undefined8 *)(param_1[0xa4] + (long)iVar2 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar11 + -4) = 0;
      lVar7 = lVar7 + -0x20;
      *puVar11 = 0;
      puVar11 = puVar11 + 4;
    } while (lVar7 != 0);
  }
  else if (iVar9 < iVar2) {
    *(int *)(param_1 + 0xa5) = iVar9;
  }
  if ((int)(*(uint *)((long)param_1 + 0x53c) & 0x7fffffff) < iVar9) {
    FUN_02f24060(param_1 + 0xa6,PTR_PTR_047d1a50,lVar12);
  }
  if ((int)param_1[0xa7] != iVar9) {
    *(int *)(param_1 + 0xa7) = iVar9;
  }
  if (0 < (int)param_1[0xa5]) {
    lVar12 = 0;
    lVar7 = 0;
    do {
      puVar11 = (undefined8 *)(param_1[0xa4] + lVar12);
      *puVar11 = 0;
      *(undefined4 *)((long)puVar11 + 0xc) = 0;
      puVar11[2] = 0;
      lVar1 = param_1[0xa4] + lVar12;
      lVar12 = lVar12 + 0x20;
      *(long *)(param_1[0xa6] + lVar7 * 8) = lVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[0xa5]);
  }
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)param_3) {
    FUN_02f24170(param_1,(long)(int)param_3);
  }
  puVar4 = PTR_DAT_047d1a08;
  if (0 < (int)param_3) {
    uVar13 = 0;
    do {
      local_68 = 2000;
      puVar5 = (undefined4 *)(**(code **)puVar4)(0,&local_68,0);
      pcVar8 = *(code **)(puVar4 + 0x10);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(puVar5,"hknpSimulationThreadContext");
      }
      *puVar5 = (int)uVar13;
      memset(puVar5 + 2,0,0x48);
      FUN_02ee3eb4(puVar5 + 0x14);
      FUN_02ee3eb4(puVar5 + 0x58);
      FUN_02ee3eb4(puVar5 + 0x9c);
      FUN_02ee3eb4(puVar5 + 0xe0);
      *(undefined4 **)(puVar5 + 0x150) = puVar5 + 0x158;
      *(undefined8 *)(puVar5 + 0x136) = 0;
      *(undefined8 *)(puVar5 + 0x134) = 0;
      *(undefined8 *)(puVar5 + 0x132) = 0;
      *(undefined8 *)(puVar5 + 0x130) = 0;
      *(undefined8 *)(puVar5 + 0x12e) = 0;
      *(undefined8 *)(puVar5 + 300) = 0;
      *(undefined8 *)(puVar5 + 0x140) = 0;
      *(undefined8 *)(puVar5 + 0x142) = 0;
      *(undefined8 *)(puVar5 + 0x144) = 0;
      *(undefined8 *)(puVar5 + 0x146) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x148) = 0;
      *(undefined8 *)(puVar5 + 0x14c) = 0;
      puVar5[0x152] = 0;
      puVar5[0x153] = 0x80000018;
      *(undefined8 *)(puVar5 + 0x18c) = 0;
      *(undefined4 **)(puVar5 + 400) = puVar5 + 0x198;
      puVar5[0x192] = 0;
      puVar5[0x193] = 0x80000018;
      puVar5[0x1d3] = 0;
      *(undefined8 *)(puVar5 + 0x1d4) = 0;
      *(undefined8 *)(puVar5 + 0x1da) = 0;
      *(undefined8 *)(puVar5 + 0x1dc) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x1de) = 0;
      *(undefined8 *)(puVar5 + 0x1e0) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x1e2) = 0;
      *(undefined8 *)(puVar5 + 0x1e4) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x1e6) = 0;
      *(undefined8 *)(puVar5 + 0x1e8) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x1ea) = 0;
      *(undefined8 *)(puVar5 + 0x1ec) = 0x8000000000000000;
      *(undefined8 *)(puVar5 + 0x1ee) = 0;
      *(undefined8 *)(puVar5 + 0x1f0) = 0x8000000000000000;
      iVar9 = (int)param_1[1];
      lVar12 = (long)iVar9;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar9) {
        FUN_02f24170(param_1,lVar12 + 1);
        iVar9 = (int)param_1[1];
      }
      *(undefined4 **)(*param_1 + (long)iVar9 * 8) = puVar5;
      *(int *)(param_1 + 1) = (int)(lVar12 + 1);
      FUN_02f24730(*(undefined8 *)(*param_1 + uVar13 * 8),*(undefined8 *)(param_2 + 0x4a0),param_2,
                   param_1 + 0xa4);
      uVar13 = uVar13 + 1;
    } while (param_3 != uVar13);
  }
  lVar12 = -0x100;
  plVar6 = param_1 + 0x24;
  do {
    iVar9 = (int)lVar12;
    *(int *)((long)plVar6 + -0xc) = iVar9 + 0x101;
    *(int *)(plVar6 + -1) = iVar9 + 0x102;
    *(int *)((long)plVar6 + -4) = iVar9 + 0x103;
    lVar12 = lVar12 + 4;
    *(int *)plVar6 = iVar9 + 0x104;
    plVar6 = plVar6 + 2;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar10 = *(long **)(*(long *)*param_1 + 0x4e0);
  plVar6 = (long *)*plVar10;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xa8] = (long)plVar6;
  *(undefined1 *)((long)param_1 + 0x54c) = 0;
  uVar3 = (int)plVar10[0xb] - 1;
  if ((int)plVar10[0xb] < 1) {
    lVar12 = plVar10[1];
    (**(code **)(*plVar6 + 0x20))(plVar6,lVar12,6);
    *(undefined4 *)(plVar10 + 0xb) = 5;
    puVar11 = (undefined8 *)(lVar12 + 0x28);
  }
  else {
    *(uint *)(plVar10 + 0xb) = uVar3;
    puVar11 = (undefined8 *)(plVar10[1] + (ulong)uVar3 * 8);
  }
  puVar11 = (undefined8 *)*puVar11;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(int *)((long)puVar11 + 4) = (int)param_1[0xab];
  iVar9 = (int)param_1[0xab];
  lVar12 = (long)iVar9;
  if ((int)(*(uint *)((long)param_1 + 0x55c) & 0x7fffffff) <= iVar9) {
    FUN_031c25b4(param_1 + 0xaa,PTR_PTR_047d1a50,lVar12 + 1);
    iVar9 = (int)param_1[0xab];
  }
  *(undefined8 **)(param_1[0xaa] + (long)iVar9 * 8) = puVar11;
  *(int *)(param_1 + 0xab) = (int)(lVar12 + 1);
  param_1[0xc6] = (long)"hknpSimulationContext::m_deferredCommandStream";
  return;
}


