/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db9ce0; name: FUN_00db9ce0
 */


void FUN_00db9ce0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d8c70;
  *param_1 = (long)(PTR_DAT_047d8c70 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa0);
  param_1[5] = (long)(puVar1 + 0xf0);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x39));
  if (param_1[0x31] != 0) {
    FUN_00dba21c(param_1 + 0x31);
    lVar14 = param_1[0x31];
    lVar12 = param_1[0x33];
    plVar9 = (long *)param_1[0x34];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar12 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar14,lVar12 - lVar14,8);
    }
  }
  plVar9 = (long *)param_1[0x2b];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00db9e28;
  }
  plVar9 = (long *)param_1[0x29];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00db9e28;
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x28));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x24));
  FUN_00dba020(param_1 + 0x1d);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1b));
  plVar9 = (long *)param_1[0x19];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_00db9e28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x20))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


