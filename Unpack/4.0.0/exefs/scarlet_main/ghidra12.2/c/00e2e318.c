/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2e318; name: FUN_00e2e318
 */


void FUN_00e2e318(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  short *psVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80 [4];
  long *local_60;
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  uVar6 = *(uint *)(param_1 + 0x2a);
  if (uVar6 < 0xf) {
    pbVar1 = (byte *)((long)param_1 + 0x154);
    do {
      bVar4 = *pbVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar8) {
        *pbVar1 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((bVar4 & 1) != 0) {
      return;
    }
    FUN_0105016c(local_80,param_2);
    uVar11 = FUN_014749dc(param_1 + 0x2b,1,local_80,0,0);
    if ((uVar11 & 1) == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)param_1[0x2f];
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[6];
        if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar13 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar5 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar12;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
    }
    local_98 = (ulong)(uVar6 + 1);
    (**(code **)(*param_1 + 0x18))(local_48,param_1);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if ((long *)local_48[0][2] == param_1 + 5) {
      FUN_016bbb08(&local_90,local_48);
    }
    puVar9 = local_48[0];
    if (local_48[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48[0] + 3);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *puVar9;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_00e2e484;
    }
    FUN_00e2e720(&local_50,&local_98,plVar14);
    if (local_50 != (long *)0x0) {
      lVar13 = local_50[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_00e2e4d0;
    }
    puVar9 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_90 + 3);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_48[0] = (undefined8 *)*puVar9;
          FUN_00c44438(lVar13 + 0x8040,local_48);
        }
      }
      else if (sVar5 == 0) {
LAB_00e2e484:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
      }
      else if (sVar5 == 0) {
LAB_00e2e4d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_80[0] != (long *)0x0) {
      (**(code **)(*local_80[0] + 0x20))();
    }
  }
  return;
}


