/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ff62c; name: FUN_029ff62c
 */


void FUN_029ff62c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long *plVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_8;
  
  *param_1 = (long)&PTR_FUN_0460c8b8;
  param_1[4] = (long)&PTR_LAB_0460c930;
  param_1[5] = (long)&DAT_0460c980;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb0));
  puVar1 = PTR_DAT_047d1a00 + 0x10;
  param_1[0x9c] = (long)puVar1;
  param_1[0x76] = (long)puVar1;
  pcVar11 = (code *)param_1[0x65];
  if (pcVar11 != (code *)0x0) {
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    (*pcVar11)(param_1 + 0x68);
  }
  pcVar11 = (code *)param_1[0x55];
  if (pcVar11 != (code *)0x0) {
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    (*pcVar11)(param_1 + 0x58);
  }
  pcVar11 = (code *)param_1[0x45];
  if (pcVar11 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar11)(param_1 + 0x48);
  }
  pcVar11 = (code *)param_1[0x35];
  if (pcVar11 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar11)(param_1 + 0x38);
  }
  plVar10 = (long *)param_1[0x2d];
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar4 = plVar10 + 2;
    do {
      lVar12 = *plVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  plVar10 = (long *)param_1[0x26];
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar4 = plVar10 + 2;
    do {
      lVar12 = *plVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  pcVar11 = (code *)param_1[0xd];
  if (pcVar11 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar11)(param_1 + 0x10);
  }
  plVar10 = (long *)param_1[9];
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar4 = plVar10 + 2;
    do {
      lVar12 = *plVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
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
      sVar6 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar13 + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_8 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_8);
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


