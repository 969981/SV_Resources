/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbe900; name: FUN_02fbe900
 */


void FUN_02fbe900(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  bool bVar16;
  long *plVar17;
  
  plVar15 = *(long **)(param_2 + 8);
  if (plVar15 == (long *)0x0) {
    lVar13 = tpidr_el0;
    lVar10 = *(long *)(lVar13 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar13 + 0x1000b8) = lVar10;
    }
    plVar15 = *(long **)(lVar10 + 0x3e0);
    if (plVar15 != (long *)0x0) goto LAB_02fbe94c;
    bVar16 = true;
  }
  else {
LAB_02fbe94c:
    lVar13 = *plVar15;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))(&DAT_03bf130f,4,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar2 = (undefined8 *)plVar15[2];
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03bf130d;
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar2 = (undefined8 *)plVar15[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        bVar16 = false;
        puVar2[1] = *(undefined8 *)(plVar15[6] + 8);
        goto LAB_02fbe9ec;
      }
    }
    bVar16 = false;
  }
LAB_02fbe9ec:
  plVar17 = *(long **)(param_1 + 0x28);
  puVar1 = (uint *)(plVar17 + 0x22);
  uVar3 = *(uint *)(plVar17 + 0x22);
  uVar11 = (ulong)uVar3 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar8 = *puVar1;
  if (uVar8 == uVar3) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 + 0x200 & 0xfffffe00 | puVar1[uVar11 + 1];
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02fbea30;
    puVar14 = puVar1 + uVar11 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02fbea30:
    do {
      uVar11 = (ulong)(uVar8 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar3 = *puVar1;
      if (uVar3 == uVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar8 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar17 + uVar11 * 4 + 0x114);
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02fbea6c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fbea6c:
        bVar5 = false;
      }
      uVar8 = uVar3;
    } while (!bVar5);
    puVar14 = (uint *)((long)plVar17 + uVar11 * 4 + 0x114);
  }
  *puVar14 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar14 = *(uint **)(*plVar17 + uVar11 * 8);
  lVar13 = *(long *)(puVar14 + 2);
  uVar12 = *(ulong *)(lVar13 + 0x7e8);
  while (plVar6 = (long *)(uVar12 & 0xfffffffffffffffc), plVar6 != (long *)0x0) {
    uVar12 = plVar6[1];
    if ((uVar12 & 3) == 0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,lVar13,uVar11);
    }
  }
  FUN_02fbe63c(param_1,puVar14);
  uVar3 = *puVar14;
  lVar13 = *(long *)(*(long *)(*plVar17 + (long)(int)uVar3 * 8) + 8);
  uVar11 = *(ulong *)(lVar13 + 0x7f0);
  while (plVar6 = (long *)(uVar11 & 0xfffffffffffffffc), plVar6 != (long *)0x0) {
    uVar11 = plVar6[1];
    if ((uVar11 & 3) == 0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,lVar13,uVar3);
    }
  }
  uVar8 = *(uint *)(plVar17 + 0x22);
  lVar13 = (long)(int)uVar3 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar17 + lVar13 + 0x114) = uVar8 & 0x1ff;
  uVar9 = *puVar1;
  if (uVar9 == uVar8) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar8 & 0xfffffe00 | uVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02fbebc0;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar17 + lVar13 + 0x114) = uVar9 & 0x1ff;
    uVar8 = *puVar1;
    if (uVar8 == uVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar9 & 0xfffffe00 | uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02fbebb4;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02fbebb4:
      bVar5 = false;
    }
    uVar9 = uVar8;
  } while (!bVar5);
LAB_02fbebc0:
  if (!bVar16) {
    lVar13 = *plVar15;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar2 = (undefined8 *)plVar15[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar15[2];
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02fbec60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
      return;
    }
  }
  return;
}


