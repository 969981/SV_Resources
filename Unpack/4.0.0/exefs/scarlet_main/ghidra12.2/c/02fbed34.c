/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbed34; name: FUN_02fbed34
 */


/* WARNING: Removing unreachable block (ram,0x02fbeed0) */

void FUN_02fbed34(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__s;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long local_68;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_04612010;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  lVar10 = tpidr_el0;
  lVar7 = *(long *)(lVar10 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar7;
  }
  plVar11 = *(long **)(lVar7 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))("PrepareSolverTaskInit",0x15,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar13 = (undefined8 *)plVar11[2];
    uVar8 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtPrepareSolverTaskInit";
      uVar5 = nn::os::GetSystemTick();
      puVar13[1] = uVar5;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar13 = (undefined8 *)plVar11[2];
      uVar8 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  puVar13 = (undefined8 *)PTR_DAT_047d1a08;
  uVar3 = *(uint *)(param_2 + 1);
  lVar10 = *(long *)(*(long *)*param_2 + 8);
  local_68 = (long)(int)uVar3 << 10;
  __s = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  param_1[8] = __s;
  if (0 < (int)uVar3) {
    memset(__s,0,0x400);
    *(undefined8 *)(*(long *)*param_2 + 0x4d8) = param_1[8];
    if (uVar3 != 1) {
      uVar8 = (ulong)uVar3 - 1;
      if (uVar3 == 2) {
        lVar7 = 1;
      }
      else {
        lVar7 = 0x400;
        uVar4 = 0;
        do {
          uVar12 = uVar4;
          memset((void *)(param_1[8] + lVar7),0,0x400);
          *(long *)(*(long *)(*param_2 + uVar12 * 8 + 8) + 0x4d8) = param_1[8] + lVar7;
          memset((void *)(param_1[8] + lVar7 + 0x400),0,0x400);
          lVar9 = param_1[8] + lVar7;
          lVar7 = lVar7 + 0x800;
          *(long *)(*(long *)(*param_2 + uVar12 * 8 + 0x10) + 0x4d8) = lVar9 + 0x400;
          uVar4 = uVar12 + 2;
        } while ((uVar8 & 0xfffffffffffffffe) != uVar12 + 2);
        lVar7 = uVar12 + 3;
        puVar13 = (undefined8 *)PTR_DAT_047d1a08;
        if ((uVar8 & 1) == 0) goto LAB_02fbef90;
      }
      memset((void *)(param_1[8] + lVar7 * 0x400),0,0x400);
      *(long *)(*(long *)(*param_2 + lVar7 * 8) + 0x4d8) = param_1[8] + lVar7 * 0x400;
    }
  }
LAB_02fbef90:
  iVar2 = *(int *)(*(long *)(lVar10 + 0x4b0) + 0x1c);
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < iVar2) {
    FUN_02fab7ec(param_1 + 4,PTR_PTR_047d1a50,(long)iVar2);
  }
  if (*(int *)(param_1 + 5) != iVar2) {
    *(int *)(param_1 + 5) = iVar2;
  }
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) < iVar2) {
    FUN_02fab960(param_1 + 6,PTR_PTR_047d1a50,(long)iVar2);
  }
  if (*(int *)(param_1 + 7) != iVar2) {
    *(int *)(param_1 + 7) = iVar2;
  }
  if (0 < *(int *)(param_1 + 5)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1[4] + lVar7) = 0xffffffff;
      lVar1 = param_1[4] + lVar7;
      lVar7 = lVar7 + 8;
      *(long *)(param_1[6] + lVar9 * 8) = lVar1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 5));
  }
  local_68 = 0xa0;
  plVar6 = (long *)(*(code *)*puVar13)(0,&local_68,0);
  if ((code *)puVar13[2] != (code *)0x0) {
    (*(code *)puVar13[2])(plVar6,"hknpSolverStepInfo");
  }
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  param_1[9] = plVar6;
  plVar6[2] = lVar10 + 0x530;
  *plVar6 = (long)param_2;
  plVar6[1] = param_3;
  plVar6[3] = *(long *)(lVar10 + 0x4b0);
  lVar7 = *(long *)(lVar10 + 0x4e0);
  plVar6[5] = *(long *)(lVar10 + 0x4e8);
  plVar6[4] = lVar7;
  lVar7 = *(long *)(lVar10 + 0x4f8);
  lVar10 = *(long *)(lVar10 + 0x4f0);
  plVar6[0xf] = param_3 + 0xb0;
  plVar6[0x10] = param_3 + 0x10;
  plVar6[0x11] = param_3 + 0x60;
  plVar6[7] = lVar7;
  plVar6[6] = lVar10;
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined8 *)(*(long *)(*param_2 + uVar8 * 8) + 0x4c0) = param_1[9];
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 2;
        *(undefined8 *)(*(long *)(*param_2 + lVar10 + 8) + 0x4c0) = param_1[9];
      } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
    }
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(*(long *)(*param_2 + uVar8 * 8) + 0x4c0) = param_1[9];
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar13 = (undefined8 *)plVar11[2];
      uVar8 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar13 = (undefined8 *)plVar11[2];
    uVar8 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar13[1] = uVar5;
    }
    if (*(code **)(lVar10 + 0x20) != (code *)0x0) {
      (**(code **)(lVar10 + 0x20))(*(undefined8 *)(lVar10 + 0x28));
    }
  }
  return;
}


