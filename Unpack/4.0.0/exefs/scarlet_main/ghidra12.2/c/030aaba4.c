/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030aaba4; name: FUN_030aaba4
 */


/* WARNING: Removing unreachable block (ram,0x030aac84) */

void FUN_030aaba4(long param_1,long *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  long *plVar8;
  void *__dest;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  bool bVar16;
  void *__src;
  undefined4 uVar17;
  long *plVar18;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_1 + 0x210);
  if (lVar11 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(lVar11 + 0x1c);
    *(undefined1 *)(lVar11 + 0x20) = 3;
    plVar8 = *(long **)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        lVar11 = *plVar9;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar16) {
          *plVar9 = lVar11 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0x228);
  if (lVar11 != 0) {
    cVar15 = *(char *)(lVar11 + 100);
    pcVar1 = (char *)(lVar11 + 100);
LAB_030aac38:
    do {
      while (cVar15 != '\x01') {
        if (cVar15 != '\0') goto LAB_030aace8;
        cVar15 = *pcVar1;
        if (cVar15 == '\0') {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar16) {
            *pcVar1 = '\x02';
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_030aac90;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_030aac90:
          bVar16 = false;
        }
        if (bVar16) goto LAB_030aace8;
      }
      cVar15 = *pcVar1;
      if (cVar15 != '\x01') {
        ClearExclusiveLocal();
        goto LAB_030aac38;
      }
      cVar7 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar16) {
        *pcVar1 = '\x03';
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)(*(long *)(lVar11 + 0x68) + 0x20) = 3;
    plVar8 = *(long **)(lVar11 + 0x68);
    *(undefined8 *)(lVar11 + 0x68) = 0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        lVar11 = *plVar9;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar16) {
          *plVar9 = lVar11 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
LAB_030aace8:
  puVar2 = PTR_DAT_047d1a08;
  local_68 = 0x50;
  plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar8,"PathRequestInput");
  }
  memset(plVar8,0,0x50);
  plVar8[1] = 0xffffffff;
  plVar18 = plVar8 + 2;
  *plVar18 = 1;
  *plVar8 = (long)(PTR_DAT_047e5070 + 0x10);
  plVar9 = plVar8 + 6;
  *plVar9 = 0;
  plVar8[7] = -0x8000000000000000;
  plVar8[8] = 0;
  lVar11 = *(long *)(param_1 + 0x30);
  plVar8[5] = *(long *)(param_1 + 0x38);
  plVar8[4] = lVar11;
  if ((long *)(param_1 + 0x20) != plVar9) {
    iVar5 = *(int *)(param_1 + 0x28);
    __src = *(void **)(param_1 + 0x20);
    if (iVar5 < 1) {
      __dest = (void *)0x0;
    }
    else {
      FUN_030ae110(plVar9,PTR_PTR_047d1a50,(long)iVar5);
      __dest = (void *)*plVar9;
    }
    memcpy(__dest,__src,(long)iVar5 << 5);
    *(int *)(plVar8 + 7) = iVar5;
  }
  local_68 = 0x110;
  plVar9 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar9,"NavigatorSettings");
  }
  plVar9[2] = 1;
  *plVar9 = (long)(PTR_DAT_047e5068 + 0x10);
  plVar9[1] = 0xffffffff;
  memcpy(plVar9 + 4,(void *)(param_1 + 0x90),0xa8);
  lVar11 = *(long *)(param_1 + 0x140);
  plVar9[0x1a] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar10 = (long *)(lVar11 + 0x10);
    do {
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar16) {
        *plVar10 = *plVar10 + 1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  lVar11 = *(long *)(param_1 + 0x148);
  plVar9[0x1b] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar10 = (long *)(lVar11 + 0x10);
    do {
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar16) {
        *plVar10 = *plVar10 + 1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  lVar11 = *(long *)(param_1 + 0x150);
  plVar9[0x1c] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar10 = (long *)(lVar11 + 0x10);
    do {
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar16) {
        *plVar10 = *plVar10 + 1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  lVar11 = *(long *)(param_1 + 0x158);
  lVar4 = *(long *)(param_1 + 0x160);
  lVar14 = *(long *)(param_1 + 0x168);
  *(undefined4 *)(plVar9 + 0x20) = *(undefined4 *)(param_1 + 0x170);
  plVar9[0x1d] = lVar11;
  plVar9[0x1e] = lVar4;
  plVar9[0x1f] = lVar14;
  plVar10 = (long *)plVar8[8];
  plVar8[8] = (long)plVar9;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar9 = plVar10 + 2;
    do {
      lVar11 = *plVar9;
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *plVar9 = lVar11 + -1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  local_68 = 0x58;
  plVar9 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar9,"PathRequest");
  }
  uVar6 = *(undefined1 *)(param_1 + 0x240);
  *(undefined4 *)((long)plVar9 + 0x1c) = uVar17;
  plVar9[2] = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *(undefined1 *)(plVar9 + 3) = uVar6;
  plVar9[5] = 0;
  plVar9[6] = 0;
  puVar2 = PTR_DAT_047e5078 + 0x10;
  plVar9[7] = param_1;
  plVar9[8] = (long)plVar8;
  *plVar9 = (long)puVar2;
  plVar9[1] = 0xffffffff;
  if (plVar8[1] != 0) {
    do {
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar16) {
        *plVar18 = *plVar18 + 1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  plVar9[9] = 0;
  plVar9[10] = -0x8000000000000000;
  plVar10 = *(long **)(param_1 + 0x210);
  *(long **)(param_1 + 0x210) = plVar9;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar9 = plVar10 + 2;
    do {
      lVar11 = *plVar9;
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *plVar9 = lVar11 + -1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  puVar3 = (ulong *)(param_2 + 4);
  do {
    uVar12 = *puVar3;
    cVar15 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar12 + 1;
      cVar15 = ExclusiveMonitorsStatus();
    }
  } while (cVar15 != '\0');
  lVar11 = *param_2;
  uVar13 = -(uVar12 >> 0x1f & 1) & 0xfffffff000000000 | (uVar12 & 0xffffffff) << 4;
  *(undefined8 *)(lVar11 + uVar13) = 0;
  plVar9 = (long *)(lVar11 + ((long)(uVar12 << 0x20) >> 0x1c) + 8);
  *plVar9 = 0;
  *(undefined4 *)(lVar11 + uVar13) = *(undefined4 *)(param_1 + 0x23c);
  lVar11 = *(long *)(param_1 + 0x210);
  if (lVar11 != 0) {
    if ((lVar11 == 0) || (*(long *)(lVar11 + 8) == 0)) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(lVar11 + 0x10);
      do {
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar16) {
          *plVar10 = *plVar10 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      plVar10 = (long *)*plVar9;
      lVar11 = *(long *)(param_1 + 0x210);
    }
    *plVar9 = lVar11;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar9 = plVar10 + 2;
      do {
        lVar11 = *plVar9;
        cVar15 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar16) {
          *plVar9 = lVar11 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  if (plVar8[1] != 0) {
    do {
      lVar11 = *plVar18;
      cVar15 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar16) {
        *plVar18 = lVar11 + -1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  return;
}


