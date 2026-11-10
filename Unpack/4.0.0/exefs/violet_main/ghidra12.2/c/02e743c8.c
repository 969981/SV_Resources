/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e743c8; name: FUN_02e743c8
 */


void FUN_02e743c8(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long lVar19;
  char *pcVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  bool bVar24;
  long lVar25;
  uint *puVar26;
  long *plVar27;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
  if (plVar7 == (long *)0x0) {
    puVar26 = (uint *)0x0;
  }
  else {
    uVar1 = *(uint *)(plVar7 + 0x22);
    puVar26 = (uint *)(plVar7 + 0x22);
    uVar23 = (ulong)uVar1 & 0x1ff;
    DataMemoryBarrier(2,3);
    uVar13 = *puVar26;
    if (uVar13 == uVar1) {
      cVar2 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(puVar26,0x10);
      if (bVar24) {
        *puVar26 = uVar1 + 0x200 & 0xfffffe00 | puVar26[uVar23 + 1];
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_02e74430;
      puVar26 = puVar26 + uVar23 + 1;
    }
    else {
      ClearExclusiveLocal();
LAB_02e74430:
      do {
        uVar23 = (ulong)(uVar13 & 0x1ff);
        DataMemoryBarrier(2,3);
        uVar1 = *puVar26;
        if (uVar1 == uVar13) {
          cVar2 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(puVar26,0x10);
          if (bVar24) {
            *puVar26 = uVar13 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar7 + uVar23 * 4 + 0x114);
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_02e7446c;
          bVar24 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02e7446c:
          bVar24 = false;
        }
        uVar13 = uVar1;
      } while (!bVar24);
      puVar26 = (uint *)((long)plVar7 + uVar23 * 4 + 0x114);
    }
    *puVar26 = 0x1ff;
    DataMemoryBarrier(2,3);
    puVar26 = *(uint **)(*plVar7 + uVar23 * 8);
    lVar25 = *(long *)(puVar26 + 2);
    uVar8 = *(ulong *)(lVar25 + 0x7e8);
    while (plVar7 = (long *)(uVar8 & 0xfffffffffffffffc), plVar7 != (long *)0x0) {
      uVar8 = plVar7[1];
      if ((uVar8 & 3) == 0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,lVar25,uVar23);
      }
    }
  }
  plVar7 = *(long **)(param_2 + 8);
  if (plVar7 == (long *)0x0) {
    lVar25 = tpidr_el0;
    lVar9 = *(long *)(lVar25 + 0x1000b8);
    if (lVar9 == 0) {
      lVar9 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar9;
    }
    plVar7 = *(long **)(lVar9 + 0x3e0);
    if (plVar7 != (long *)0x0) goto LAB_02e74510;
    bVar24 = true;
  }
  else {
LAB_02e74510:
    lVar25 = *plVar7;
    if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
      (**(code **)(lVar25 + 0x18))("BroadPhase",10,*(undefined8 *)(lVar25 + 0x28));
    }
    puVar21 = (undefined8 *)plVar7[2];
    uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtBroadPhase";
      uVar6 = nn::os::GetSystemTick();
      puVar21[1] = uVar6;
    }
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar21 = (undefined8 *)plVar7[2];
      uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    lVar25 = *plVar7;
    if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
      (**(code **)(lVar25 + 0x18))
                ("CopyAabbsAndMarkActiveBodiesDirty",0x21,*(undefined8 *)(lVar25 + 0x28));
    }
    puVar21 = (undefined8 *)plVar7[2];
    uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtCopyAabbsAndMarkActiveBodiesDirty";
      uVar6 = nn::os::GetSystemTick();
      puVar21[1] = uVar6;
    }
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar21 = (undefined8 *)plVar7[2];
      uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        bVar24 = false;
        puVar21[1] = *(undefined8 *)(plVar7[6] + 8);
        goto LAB_02e74644;
      }
    }
    bVar24 = false;
  }
LAB_02e74644:
  lVar25 = *(long *)(param_1 + 0x28);
  lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  uVar11 = *(uint *)(lVar25 + 0x150);
  lVar19 = (long)(int)uVar11;
  uVar1 = *(uint *)(lVar25 + 0x154);
  lVar9 = *(long *)(lVar25 + 0x140);
  lVar12 = *(long *)(lVar25 + 0x120);
  lVar14 = *(long *)(lVar15 + 0x10);
  uVar13 = *(uint *)(lVar15 + 200);
  uVar23 = (ulong)uVar13;
  if (uVar11 <= uVar1) {
    uVar4 = *(int *)(lVar25 + 0x128) - 1;
    if ((int)uVar4 <= (int)uVar1) {
      uVar1 = uVar4;
    }
    if ((int)uVar11 <= (int)uVar1) {
      puVar18 = (undefined8 *)(lVar12 + lVar19 * 0x18);
      iVar16 = (uVar1 - uVar11) + 1;
      pcVar20 = (char *)(lVar9 + lVar19);
      puVar21 = (undefined8 *)(lVar14 + lVar19 * 0xc0 + 0x60);
      do {
        if (*pcVar20 != '\0') {
          uVar6 = *puVar21;
          uVar22 = puVar21[2];
          puVar18[1] = puVar21[1];
          puVar18[2] = uVar22;
          *puVar18 = uVar6;
        }
        iVar16 = iVar16 + -1;
        puVar18 = puVar18 + 3;
        puVar21 = puVar21 + 0x18;
        pcVar20 = pcVar20 + 1;
      } while (iVar16 != 0);
      lVar25 = *(long *)(param_1 + 0x28);
    }
    *(undefined4 *)(lVar25 + 0x150) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x154) = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\x04') && (0 < (int)uVar13)) {
    puVar17 = (uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0xc0) + 8);
    do {
      uVar8 = (ulong)*puVar17 & 0xffffff;
      if ((*(byte *)(lVar14 + uVar8 * 0xc0 + 0x58) & 0x11) != 0) {
        lVar25 = lVar14 + uVar8 * 0xc0;
        *(undefined1 *)(lVar9 + uVar8) = 1;
        puVar21 = (undefined8 *)(lVar12 + uVar8 * 0x18);
        uVar6 = *(undefined8 *)(lVar25 + 0x60);
        uVar22 = *(undefined8 *)(lVar25 + 0x70);
        puVar21[1] = *(undefined8 *)(lVar25 + 0x68);
        puVar21[2] = uVar22;
        *puVar21 = uVar6;
      }
      uVar23 = uVar23 - 1;
      puVar17 = puVar17 + 4;
    } while (uVar23 != 0);
  }
  plVar27 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
  if (plVar27 != (long *)0x0) {
    uVar1 = *puVar26;
    lVar25 = (long)(int)uVar1;
    lVar9 = *(long *)(*(long *)(*plVar27 + lVar25 * 8) + 8);
    uVar23 = *(ulong *)(lVar9 + 0x7f0);
    while (plVar5 = (long *)(uVar23 & 0xfffffffffffffffc), plVar5 != (long *)0x0) {
      uVar23 = plVar5[1];
      if ((uVar23 & 3) == 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar9,uVar1);
      }
    }
    uVar13 = *(uint *)(plVar27 + 0x22);
    puVar26 = (uint *)(plVar27 + 0x22);
    DataMemoryBarrier(2,3);
    puVar26[lVar25 + 1] = uVar13 & 0x1ff;
    uVar11 = *puVar26;
    if (uVar11 == uVar13) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar26,0x10);
      if (bVar3) {
        *puVar26 = uVar13 & 0xfffffe00 | uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_02e74838;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      DataMemoryBarrier(2,3);
      puVar26[lVar25 + 1] = uVar11 & 0x1ff;
      uVar13 = *puVar26;
      if (uVar13 == uVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar26,0x10);
        if (bVar3) {
          *puVar26 = uVar11 & 0xfffffe00 | uVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_02e7482c;
        bVar3 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02e7482c:
        bVar3 = false;
      }
      uVar11 = uVar13;
    } while (!bVar3);
  }
LAB_02e74838:
  if (bVar24) {
    return;
  }
  lVar25 = *plVar7;
  if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
    puVar21 = (undefined8 *)plVar7[2];
    uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar7[6] + 8);
    }
  }
  puVar21 = (undefined8 *)plVar7[2];
  uVar23 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
  if ((uVar23 <= (ulong)plVar7[3]) && (plVar7[2] = uVar23, puVar21 != (undefined8 *)0x0)) {
    *puVar21 = &DAT_03c2d363;
    uVar6 = nn::os::GetSystemTick();
    puVar21[1] = uVar6;
  }
  if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
    (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
  }
  lVar25 = *plVar7;
  if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
    puVar21 = (undefined8 *)plVar7[2];
    puVar10 = (undefined8 *)plVar7[3];
    puVar18 = (undefined8 *)((long)puVar21 + 0x17U & 0xfffffffffffffff8);
    if (puVar18 <= puVar10) {
      plVar7[2] = (long)puVar18;
      if (puVar21 == (undefined8 *)0x0) goto LAB_02e74910;
      *puVar21 = &DAT_03c4e575;
      puVar21[1] = *(undefined8 *)(plVar7[6] + 8);
    }
  }
  puVar18 = (undefined8 *)plVar7[2];
  puVar10 = (undefined8 *)plVar7[3];
LAB_02e74910:
  puVar21 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
  if ((puVar21 <= puVar10) && (plVar7[2] = (long)puVar21, puVar18 != (undefined8 *)0x0)) {
    *puVar18 = &DAT_03c2d363;
    uVar6 = nn::os::GetSystemTick();
    puVar18[1] = uVar6;
  }
  if (*(code **)(lVar25 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e74958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
  return;
}


