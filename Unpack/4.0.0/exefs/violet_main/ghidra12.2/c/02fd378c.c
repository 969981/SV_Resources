/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fd378c; name: FUN_02fd378c
 */


void FUN_02fd378c(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint *puVar20;
  int iVar21;
  
  plVar19 = *(long **)(param_2 + 8);
  if (plVar19 == (long *)0x0) {
    lVar17 = tpidr_el0;
    lVar11 = *(long *)(lVar17 + 0x1000b8);
    if (lVar11 == 0) {
      lVar11 = FUN_00e5d3b4();
      *(long *)(lVar17 + 0x1000b8) = lVar11;
    }
    plVar19 = *(long **)(lVar11 + 0x3e0);
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x28) + 0x920);
  uVar3 = *(uint *)(plVar18 + 0x22);
  puVar1 = (uint *)(plVar18 + 0x22);
  uVar15 = (ulong)uVar3 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar9 = *puVar1;
  if (uVar9 == uVar3) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 + 0x200 & 0xfffffe00 | puVar1[uVar15 + 1];
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02fd381c;
    puVar20 = puVar1 + uVar15 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02fd381c:
    do {
      uVar15 = (ulong)(uVar9 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar3 = *puVar1;
      if (uVar3 == uVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar9 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar18 + uVar15 * 4 + 0x114);
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02fd3858;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fd3858:
        bVar5 = false;
      }
      uVar9 = uVar3;
    } while (!bVar5);
    puVar20 = (uint *)((long)plVar18 + uVar15 * 4 + 0x114);
  }
  *puVar20 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar20 = *(uint **)(*plVar18 + uVar15 * 8);
  lVar17 = *(long *)(puVar20 + 2);
  uVar12 = *(ulong *)(lVar17 + 0x7e8);
  while (plVar6 = (long *)(uVar12 & 0xfffffffffffffffc), plVar6 != (long *)0x0) {
    uVar12 = plVar6[1];
    if ((uVar12 & 3) == 0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,lVar17,uVar15);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("Constraints",0xb,*(undefined8 *)(lVar17 + 0x28));
    }
    puVar14 = (undefined8 *)plVar19[2];
    uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = "TtConstraints";
      uVar7 = nn::os::GetSystemTick();
      puVar14[1] = uVar7;
    }
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar14 = (undefined8 *)plVar19[2];
      uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c4e575;
        puVar14[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    lVar17 = *plVar19;
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("PrepareConstraints",0x12,*(undefined8 *)(lVar17 + 0x28));
      if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
        (**(code **)(lVar17 + 0x18))("Gather",6,*(undefined8 *)(lVar17 + 0x28));
      }
    }
    puVar14 = (undefined8 *)plVar19[2];
    uVar15 = (long)puVar14 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = "LtPrepareConstraints";
      puVar14[2] = "StGather";
      uVar7 = nn::os::GetSystemTick();
      puVar14[1] = uVar7;
    }
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar14 = (undefined8 *)plVar19[2];
      uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c4e575;
        puVar14[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  lVar17 = *(long *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(lVar17 + 0x488) + 8);
  iVar2 = *(int *)(*(long *)(lVar17 + 0x488) + 0x2c);
  iVar21 = -0x80000000;
  if (iVar2 != -1) {
    iVar21 = iVar2 + 1;
  }
  FUN_02fb0288(*(undefined8 *)(param_1 + 0x30),lVar17,uVar7,iVar21);
  if (plVar19 == (long *)0x0) {
    FUN_02fb1d60(*(undefined8 *)(param_1 + 0x38),lVar17,*(long *)(param_1 + 0x30),0,
                 *(int *)(*(long *)(param_1 + 0x30) + 0x10) + -1,uVar7);
    goto LAB_02fd3c84;
  }
  lVar11 = *plVar19;
  if (((*(byte *)(lVar11 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
    puVar14 = (undefined8 *)plVar19[2];
    uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = &DAT_03c4e575;
      puVar14[1] = *(undefined8 *)(plVar19[6] + 8);
    }
  }
  puVar14 = (undefined8 *)plVar19[2];
  uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
  if ((uVar15 <= (ulong)plVar19[3]) && (plVar19[2] = uVar15, puVar14 != (undefined8 *)0x0)) {
    *puVar14 = "StGroup";
    uVar8 = nn::os::GetSystemTick();
    puVar14[1] = uVar8;
  }
  if (*(code **)(lVar11 + 0x20) != (code *)0x0) {
    (**(code **)(lVar11 + 0x20))(*(undefined8 *)(lVar11 + 0x28));
  }
  if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
    (**(code **)(lVar11 + 0x18))("Group",5,*(undefined8 *)(lVar11 + 0x28));
  }
  FUN_02fb1d60(*(undefined8 *)(param_1 + 0x38),lVar17,*(long *)(param_1 + 0x30),0,
               *(int *)(*(long *)(param_1 + 0x30) + 0x10) + -1,uVar7);
  puVar14 = (undefined8 *)plVar19[2];
  uVar15 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
  if (uVar15 <= (ulong)plVar19[3]) {
    iVar21 = *(int *)(*(long *)(param_1 + 0x30) + 8);
    plVar19[2] = uVar15;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = "MiNumConstraints";
      *(float *)(puVar14 + 1) = (float)iVar21;
    }
  }
  lVar17 = *plVar19;
  if (((*(byte *)(lVar17 + 0x38) & 1) == 0) || (plVar19[6] == 0)) {
LAB_02fd3b8c:
    puVar16 = (undefined8 *)plVar19[2];
    puVar13 = (undefined8 *)plVar19[3];
  }
  else {
    puVar14 = (undefined8 *)plVar19[2];
    puVar13 = (undefined8 *)plVar19[3];
    puVar16 = (undefined8 *)((long)puVar14 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 < puVar16) goto LAB_02fd3b8c;
    plVar19[2] = (long)puVar16;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &DAT_03c4e575;
      puVar14[1] = *(undefined8 *)(plVar19[6] + 8);
      goto LAB_02fd3b8c;
    }
  }
  puVar14 = (undefined8 *)((long)puVar16 + 0x17U & 0xfffffffffffffff8);
  if ((puVar14 <= puVar13) && (plVar19[2] = (long)puVar14, puVar16 != (undefined8 *)0x0)) {
    *puVar16 = &DAT_03c3697b;
    uVar7 = nn::os::GetSystemTick();
    puVar16[1] = uVar7;
  }
  if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
    (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *plVar19;
  if (((*(byte *)(lVar17 + 0x38) & 1) == 0) || (plVar19[6] == 0)) {
LAB_02fd3c24:
    puVar16 = (undefined8 *)plVar19[2];
    puVar13 = (undefined8 *)plVar19[3];
  }
  else {
    puVar14 = (undefined8 *)plVar19[2];
    puVar13 = (undefined8 *)plVar19[3];
    puVar16 = (undefined8 *)((long)puVar14 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 < puVar16) goto LAB_02fd3c24;
    plVar19[2] = (long)puVar16;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &DAT_03c4e575;
      puVar14[1] = *(undefined8 *)(plVar19[6] + 8);
      goto LAB_02fd3c24;
    }
  }
  puVar14 = (undefined8 *)((long)puVar16 + 0x17U & 0xfffffffffffffff8);
  if ((puVar14 <= puVar13) && (plVar19[2] = (long)puVar14, puVar16 != (undefined8 *)0x0)) {
    *puVar16 = &DAT_03c2d363;
    uVar7 = nn::os::GetSystemTick();
    puVar16[1] = uVar7;
  }
  if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
    (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
  }
LAB_02fd3c84:
  uVar3 = *puVar20;
  lVar17 = *(long *)(*(long *)(*plVar18 + (long)(int)uVar3 * 8) + 8);
  uVar15 = *(ulong *)(lVar17 + 0x7f0);
  while (plVar19 = (long *)(uVar15 & 0xfffffffffffffffc), plVar19 != (long *)0x0) {
    uVar15 = plVar19[1];
    if ((uVar15 & 3) == 0) {
      (**(code **)(*plVar19 + 0x20))(plVar19,lVar17,uVar3);
    }
  }
  uVar9 = *(uint *)(plVar18 + 0x22);
  lVar17 = (long)(int)uVar3 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar18 + lVar17 + 0x114) = uVar9 & 0x1ff;
  uVar10 = *puVar1;
  if (uVar10 == uVar9) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 & 0xfffffe00 | uVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar18 + lVar17 + 0x114) = uVar10 & 0x1ff;
    uVar9 = *puVar1;
    if (uVar9 == uVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar10 & 0xfffffe00 | uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02fd3d50;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02fd3d50:
      bVar5 = false;
    }
    uVar10 = uVar9;
    if (bVar5) {
      return;
    }
  } while( true );
}


