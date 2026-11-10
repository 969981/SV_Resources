/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110178c; name: FUN_0110178c
 */


void FUN_0110178c(long *param_1,byte param_2)

{
  short *psVar1;
  SemaphoreType *pSVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (*(byte *)((long)param_1 + 0x26c) == (param_2 & 1)) {
    return;
  }
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  lVar11 = *(long *)PTR_DAT_047d8a50;
  *(long *)PTR_DAT_047d8a58 = lVar11;
  if ((param_2 & 1) == 0) {
    (**(code **)(*param_1 + 0x18))(local_50,param_1);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if ((long *)local_50[0][2] == param_1 + 5) {
      FUN_010b7b78(&local_60,local_50);
    }
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_f0 = (undefined8 *)*local_50[0];
          FUN_00c44438(lVar10 + 0x8040,&local_f0);
        }
      }
      else if (sVar4 == 0) goto LAB_01101974;
    }
    local_50[0] = (undefined8 *)0x0;
    if (local_60 != (undefined8 *)0x0) {
      local_50[0] = (undefined8 *)*local_60;
    }
    lVar11 = *(long *)(lVar11 + 0x30);
    pSVar2 = (SemaphoreType *)(lVar11 + 0xcc8);
    nn::os::AcquireSemaphore(pSVar2);
    FUN_010b79ac(lVar11 + 0xc90,local_50,local_50);
    nn::os::ReleaseSemaphore(pSVar2);
    if (local_60 == (undefined8 *)0x0) goto LAB_011018d8;
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01101ba8;
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(local_50,param_1);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if ((long *)local_50[0][2] == param_1 + 5) {
      FUN_010b7b78(&local_60,local_50);
    }
    puVar7 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_f0 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_f0);
        }
      }
      else if (sVar4 == 0) goto LAB_01101974;
    }
    if (local_60 == (undefined8 *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *local_60;
    }
    (**(code **)(*param_1 + 0x18))(local_50,param_1);
    local_f0 = (undefined8 *)0x0;
    uStack_e8 = 0;
    if ((long *)local_50[0][2] == param_1 + 5) {
      FUN_010b7b78(&local_f0,local_50);
    }
    puVar7 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01101974;
    }
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_01105d3c(&local_e0,&local_f0);
    FUN_01105db0(lVar11,uVar12,&local_e0);
    pcVar8 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar8)(auStack_c0);
    }
    puVar7 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_50[0] = (undefined8 *)*puVar7;
          FUN_00c44438(lVar11 + 0x8040,local_50);
        }
      }
      else if (sVar4 == 0) goto LAB_01101974;
    }
    if (local_60 == (undefined8 *)0x0) goto LAB_011018d8;
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01101ba8:
      puVar7 = local_60;
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_50[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,local_50);
      }
      goto LAB_011018d8;
    }
  }
  if (sVar4 == 0) {
LAB_01101974:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_011018d8:
  *(byte *)((long)param_1 + 0x26c) = param_2 & 1;
  return;
}


