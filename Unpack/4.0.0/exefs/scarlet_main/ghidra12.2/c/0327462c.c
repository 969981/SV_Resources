/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0327462c; name: FUN_0327462c
 */


uint FUN_0327462c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_40;
  char local_38;
  
  puVar6 = (ulong *)param_1[1];
  if (puVar6 == (ulong *)0x0) {
LAB_032746d0:
    uVar11 = 0;
  }
  else {
    puVar7 = puVar6;
    if ((*puVar6 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((puVar7[2] & 0x1f) != 4) goto LAB_032746d0;
    lVar5 = *param_1;
    uVar11 = param_1[2];
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar11 = param_1[2];
    }
    if (lVar5 != 0) {
      local_40 = 0;
      local_38 = '\0';
      (**(code **)(*(long *)(uVar11 & 0xfffffffffffffffe) + 0x38))();
      uVar9 = -(uint)local_40;
      if (local_38 == '\0') {
        uVar9 = (uint)local_40;
      }
      goto LAB_032747dc;
    }
    puVar6 = (ulong *)param_1[1];
  }
  puVar7 = puVar6;
  if ((*puVar6 & 1) == 0) {
    puVar8 = puVar6;
    do {
      puVar8 = (ulong *)puVar8[1];
    } while ((*puVar8 & 1) == 0);
    uVar9 = 0;
    if ((puVar6 == (ulong *)0x0) || ((puVar8[2] & 0x1f) != 2)) goto LAB_032747dc;
    if ((*puVar6 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
  }
  else {
    uVar9 = 0;
    if ((puVar6 == (ulong *)0x0) || ((puVar6[2] & 0x1f) != 2)) goto LAB_032747dc;
  }
  if ((puVar7[2] & 0x1f) == 2) {
    lVar5 = *param_1;
    uVar12 = param_1[2];
    if ((uVar12 & 1) != 0) {
      piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar12 = param_1[2];
    }
  }
  else {
    lVar5 = 0;
    puVar6 = (ulong *)0x0;
    uVar12 = 0;
  }
  local_40 = local_40 & 0xffffffffffffff00;
  plVar10 = (long *)(uVar12 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x38))(plVar10,lVar5,puVar6,&local_40);
  uVar9 = (uint)((char)local_40 != '\0');
  if ((uVar12 & 1) != 0) {
    plVar4 = plVar10 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
LAB_032747dc:
  if ((uVar11 & 1) != 0) {
    plVar4 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar10 = plVar4 + 1;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return uVar9;
}


