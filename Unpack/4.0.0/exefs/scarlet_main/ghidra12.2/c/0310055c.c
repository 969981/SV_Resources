/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310055c; name: FUN_0310055c
 */


/* WARNING: Removing unreachable block (ram,0x03100654) */

void FUN_0310055c(long param_1,long *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ulong *puVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  long *plVar7;
  void *__dest;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  bool bVar14;
  void *__src;
  undefined4 uVar15;
  long *plVar16;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_1 + 0x160);
  if (lVar10 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(lVar10 + 0x1c);
    pcVar1 = (char *)(lVar10 + 0x20);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        break;
      }
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar14) {
        *pcVar1 = '\x03';
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    plVar7 = *(long **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar10 = *plVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = lVar10 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x178);
  if (lVar10 != 0) {
    cVar13 = *(char *)(lVar10 + 0x5c);
    pcVar1 = (char *)(lVar10 + 0x5c);
LAB_03100608:
    do {
      while (cVar13 != '\x01') {
        if (cVar13 != '\0') goto LAB_031006b8;
        cVar13 = *pcVar1;
        if (cVar13 == '\0') {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar14) {
            *pcVar1 = '\x02';
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_03100660;
          bVar14 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_03100660:
          bVar14 = false;
        }
        if (bVar14) goto LAB_031006b8;
      }
      cVar13 = *pcVar1;
      if (cVar13 != '\x01') {
        ClearExclusiveLocal();
        goto LAB_03100608;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar14) {
        *pcVar1 = '\x03';
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(undefined1 *)(*(long *)(lVar10 + 0x60) + 0x20) = 3;
    plVar7 = *(long **)(lVar10 + 0x60);
    *(undefined8 *)(lVar10 + 0x60) = 0;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar10 = *plVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = lVar10 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
LAB_031006b8:
  puVar2 = PTR_DAT_047d1a08;
  local_68 = 0x50;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar7,"PathRequestInput");
  }
  memset(plVar7,0,0x50);
  plVar7[1] = 0xffffffff;
  plVar16 = plVar7 + 2;
  *plVar16 = 1;
  *plVar7 = (long)(PTR_DAT_047e5200 + 0x10);
  plVar8 = plVar7 + 6;
  *plVar8 = 0;
  plVar7[7] = -0x8000000000000000;
  plVar7[8] = 0;
  lVar10 = *(long *)(param_1 + 0x30);
  plVar7[5] = *(long *)(param_1 + 0x38);
  plVar7[4] = lVar10;
  if ((long *)(param_1 + 0x20) != plVar8) {
    iVar4 = *(int *)(param_1 + 0x28);
    __src = *(void **)(param_1 + 0x20);
    if (iVar4 < 1) {
      __dest = (void *)0x0;
    }
    else {
      FUN_031024b8(plVar8,PTR_PTR_047d1a50,(long)iVar4);
      __dest = (void *)*plVar8;
    }
    memcpy(__dest,__src,(long)iVar4 << 4);
    *(int *)(plVar7 + 7) = iVar4;
  }
  local_68 = 0xb0;
  plVar8 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar8,"NavigatorSettings");
  }
  plVar8[2] = 1;
  *plVar8 = (long)(PTR_DAT_047e51f8 + 0x10);
  plVar8[1] = 0xffffffff;
  memcpy(plVar8 + 4,(void *)(param_1 + 0x80),0x74);
  lVar10 = *(long *)(param_1 + 0x100);
  plVar8[0x14] = lVar10;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar9 = (long *)(lVar10 + 0x10);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = *plVar9 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  lVar10 = *(long *)(param_1 + 0x108);
  plVar8[0x15] = lVar10;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar9 = (long *)(lVar10 + 0x10);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = *plVar9 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  plVar9 = (long *)plVar7[8];
  plVar7[8] = (long)plVar8;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar8 = plVar9 + 2;
    do {
      lVar10 = *plVar8;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar10 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  local_68 = 0x58;
  plVar8 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar8,"PathRequest");
  }
  uVar5 = *(undefined1 *)(param_1 + 0x1a8);
  *(undefined4 *)((long)plVar8 + 0x1c) = uVar15;
  plVar8[2] = 1;
  *(undefined1 *)(plVar8 + 4) = 0;
  *(undefined1 *)(plVar8 + 3) = uVar5;
  plVar8[5] = 0;
  plVar8[6] = 0;
  puVar2 = PTR_DAT_047e5208 + 0x10;
  plVar8[7] = param_1;
  plVar8[8] = (long)plVar7;
  *plVar8 = (long)puVar2;
  plVar8[1] = 0xffffffff;
  if (plVar7[1] != 0) {
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *plVar16 = *plVar16 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  plVar8[9] = 0;
  plVar8[10] = -0x8000000000000000;
  plVar9 = *(long **)(param_1 + 0x160);
  *(long **)(param_1 + 0x160) = plVar8;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar8 = plVar9 + 2;
    do {
      lVar10 = *plVar8;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar10 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  puVar3 = (ulong *)(param_2 + 4);
  do {
    uVar11 = *puVar3;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = uVar11 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar10 = *param_2;
  uVar12 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
  *(undefined8 *)(lVar10 + uVar12) = 0;
  plVar8 = (long *)(lVar10 + ((long)(uVar11 << 0x20) >> 0x1c) + 8);
  *plVar8 = 0;
  *(undefined4 *)(lVar10 + uVar12) = *(undefined4 *)(param_1 + 0x1a4);
  lVar10 = *(long *)(param_1 + 0x160);
  if (lVar10 != 0) {
    if ((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(lVar10 + 0x10);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar14) {
          *plVar9 = *plVar9 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      plVar9 = (long *)*plVar8;
      lVar10 = *(long *)(param_1 + 0x160);
    }
    *plVar8 = lVar10;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar8 = plVar9 + 2;
      do {
        lVar10 = *plVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = lVar10 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  if (plVar7[1] != 0) {
    do {
      lVar10 = *plVar16;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *plVar16 = lVar10 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return;
}


