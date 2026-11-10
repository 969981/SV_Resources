/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ff214; name: FUN_029ff214
 */


void FUN_029ff214(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_0460c798;
  param_1[4] = (long)&PTR_LAB_0460c810;
  param_1[5] = (long)&DAT_0460c860;
  pcVar12 = (code *)param_1[0x2d];
  if (pcVar12 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar12)(param_1 + 0x30);
  }
  pcVar12 = (code *)param_1[0x1d];
  if (pcVar12 != (code *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    (*pcVar12)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1a],(ulong)*(uint *)((long)param_1 + 0xdc) << 2);
  }
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  param_1[0x1a] = 0;
  if ((int)param_1[0x19] != 0) {
    plVar15 = (long *)param_1[0x18];
    plVar11 = plVar15 + (int)param_1[0x19];
    do {
      plVar11 = plVar11 + -1;
      plVar10 = (long *)*plVar11;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar1 = plVar10 + 2;
        do {
          lVar13 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    } while (plVar11 != plVar15);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  param_1[0x18] = 0;
  if ((int)param_1[0x17] != 0) {
    plVar15 = (long *)param_1[0x16];
    plVar11 = plVar15 + (int)param_1[0x17];
    do {
      plVar11 = plVar11 + -1;
      plVar10 = (long *)*plVar11;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar1 = plVar10 + 2;
        do {
          lVar13 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    } while (plVar11 != plVar15);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  param_1[0x16] = 0;
  if ((int)param_1[0x15] != 0) {
    plVar15 = (long *)param_1[0x14];
    plVar11 = plVar15 + (int)param_1[0x15];
    do {
      plVar11 = plVar11 + -1;
      plVar10 = (long *)*plVar11;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar1 = plVar10 + 2;
        do {
          lVar13 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    } while (plVar11 != plVar15);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  param_1[0x14] = 0;
  if ((int)param_1[0x13] != 0) {
    plVar15 = (long *)param_1[0x12];
    plVar11 = plVar15 + (int)param_1[0x13];
    do {
      plVar11 = plVar11 + -1;
      plVar10 = (long *)*plVar11;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar1 = plVar10 + 2;
        do {
          lVar13 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    } while (plVar11 != plVar15);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 3);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_00db239c(param_1 + 10);
  plVar11 = (long *)param_1[9];
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    plVar15 = plVar11 + 2;
    do {
      lVar13 = *plVar15;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *plVar15 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))();
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar14 + 3);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_18 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_18);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


