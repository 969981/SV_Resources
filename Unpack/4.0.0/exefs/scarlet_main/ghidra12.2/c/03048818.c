/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03048818; name: FUN_03048818
 */


void FUN_03048818(long *param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  
  plVar11 = (long *)param_1[0xe];
  *param_1 = (long)(PTR_DAT_047e4ed0 + 0x10);
  while( true ) {
    puVar7 = PTR_DAT_047d1a08;
    iVar5 = *(int *)((long)plVar11 + 0x14);
    if (iVar5 == 0) break;
    iVar4 = *(int *)((long)plVar11 + 0xc);
    uVar13 = *(undefined8 *)(*plVar11 + (long)iVar4 * 8);
    iVar3 = 0;
    if (iVar4 + 1 != (int)plVar11[1]) {
      iVar3 = iVar4 + 1;
    }
    *(int *)((long)plVar11 + 0xc) = iVar3;
    *(int *)((long)plVar11 + 0x14) = iVar5 + -1;
    uVar9 = (ulong)*(uint *)(param_1 + 7);
    if (0 < (int)*(uint *)(param_1 + 7)) {
      do {
        plVar11 = *(long **)(param_1[6] + (uVar9 - 1) * 8);
        (**(code **)(*plVar11 + 0x28))(plVar11,uVar13,0);
        bVar1 = 1 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    plVar11 = (long *)param_1[0xe];
  }
  if (plVar11 != (long *)0x0) {
    *(undefined8 *)((long)plVar11 + 0xc) = 0;
    *(int *)((long)plVar11 + 0x14) = 0;
    if ((int)plVar11[1] != 0) {
      (**(code **)(puVar7 + 8))(PTR_PTR_047d1a50[8],*plVar11,0);
      *(undefined4 *)(plVar11 + 1) = 0;
      *plVar11 = 0;
    }
    (**(code **)(puVar7 + 8))(0,plVar11,0);
  }
  plVar11 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar11 != (long *)0x0) {
    if (plVar11[1] != 0) {
      plVar12 = plVar11 + 2;
      do {
        lVar10 = *plVar12;
        cVar6 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar1) {
          *plVar12 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
    plVar11 = (long *)param_1[0x10];
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar12 = plVar11 + 2;
      do {
        lVar10 = *plVar12;
        cVar6 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar1) {
          *plVar12 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  *param_1 = (long)(PTR_DAT_047e4ec8 + 0x10);
  if ((int)param_1[7] != 0) {
    plVar12 = (long *)param_1[6];
    plVar11 = plVar12 + (int)param_1[7];
    do {
      plVar11 = plVar11 + -1;
      plVar8 = (long *)*plVar11;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar2 = plVar8 + 2;
        do {
          lVar10 = *plVar2;
          cVar6 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar1) {
            *plVar2 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (plVar11 != plVar12);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((param_1[4] & 1U) != 0) {
    (**(code **)(puVar7 + 8))(0,param_1[4] - 1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


