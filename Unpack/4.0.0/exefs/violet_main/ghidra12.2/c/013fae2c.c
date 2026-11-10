/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fae2c; name: FUN_013fae2c
 */


void FUN_013fae2c(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  short sVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_013fae4c:
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    nn::os::InitializeLightEvent(param_1 + 1,0,1);
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_011b9d34(param_1 + 3,&local_70);
    puVar5 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar12 = *psVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar1 = (int *)((long)local_70 + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_40 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar9 + 0x8040,&local_40);
        }
      }
      else if (sVar12 == 0) {
LAB_013faebc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  psVar2 = (short *)(lVar9 + 0x1a);
  sVar12 = *(short *)(lVar9 + 0x1a);
LAB_013faf54:
  sVar3 = *psVar2;
  if (sVar3 == sVar12) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar11) {
      *psVar2 = sVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_013faf78;
    bVar11 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_013faf78:
    bVar11 = false;
  }
  if (!bVar11) goto code_r0x013faf80;
  lVar9 = *(long *)(lVar9 + 0x10);
  plVar10 = (long *)(lVar9 + -0x28);
  if (lVar9 != 0) {
    lVar7 = FUN_0104b474(lVar9 + 0xe0,&local_40);
    if (lVar7 != 0) {
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      FUN_00c43ef0(&local_40,lVar7 + 0x98);
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c96b7c(&local_50,&local_40);
      puVar5 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_40 + 3);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar1 = (int *)((long)local_40 + 0x1c);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_18 = *puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_18);
          }
        }
        else if (sVar12 == 0) goto LAB_013faebc;
      }
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if (local_50 != (undefined8 *)0x0) {
        if ((local_50[1] != 0) && (uVar8 = FUN_02701590(), (uVar8 & 1) != 0)) {
          FUN_017b83d8(&local_60,&local_50);
        }
        puVar5 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_50 + 3);
          do {
            sVar12 = *psVar2;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar1 = (int *)((long)local_50 + 0x1c);
            do {
              iVar6 = *piVar1;
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar7 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar7;
              local_40 = (undefined8 *)*puVar5;
              FUN_00c44438(lVar7 + 0x8040,&local_40);
            }
          }
          else if (sVar12 == 0) goto LAB_013faebc;
        }
      }
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 1;
      nn::os::InitializeLightEvent(param_1 + 1,0,1);
      param_1[3] = 0;
      param_1[4] = 0;
      FUN_011b9d34(param_1 + 3,&local_60);
      puVar5 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_60 + 3);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar1 = (int *)((long)local_60 + 0x1c);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_40 = (undefined8 *)*puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_40);
          }
        }
        else if (sVar12 == 0) goto LAB_013faebc;
      }
      lVar9 = *(long *)(lVar9 + 8);
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return;
      }
      if (sVar12 != 0) {
        return;
      }
LAB_013fb064:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    lVar9 = *(long *)(lVar9 + 8);
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar12 == 0) goto LAB_013fb064;
  }
  goto LAB_013fae4c;
code_r0x013faf80:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_013fae4c;
  goto LAB_013faf54;
}


