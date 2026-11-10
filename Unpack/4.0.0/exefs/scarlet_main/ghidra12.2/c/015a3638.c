/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a3638; name: FUN_015a3638
 */


void FUN_015a3638(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar12 = (**(code **)(*param_1 + 0x70))();
  if ((uVar12 & 1) == 0) {
    plVar17 = param_1 + 1;
    lVar15 = *plVar17;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar15) {
      plVar17 = (long *)0x0;
      bVar8 = true;
    }
    else {
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar17 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar17 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar8) {
                *plVar17 = lVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_015a369c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *plVar17 = lVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_015a369c:
      bVar8 = false;
    }
    puVar9 = PTR_DAT_047d39b8;
    puVar5 = (undefined8 *)param_1[5];
    for (puVar4 = (undefined8 *)param_1[4]; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      plVar16 = (long *)*puVar4;
      puVar18 = (undefined8 *)*param_2;
      (**(code **)(*plVar16 + 0x18))(&local_78,plVar16);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      plVar14 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        plVar14 = plVar16 + 5;
      }
      if ((long *)local_78[2] == plVar14) {
        FUN_00cbc6dc(&local_88,&local_78);
      }
      puVar10 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar3 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = *puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_015a3ad4;
      }
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00ca1a48(&local_78,&local_88);
      (*(code *)*puVar18)(puVar18 + 4,&local_78);
      puVar18 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar3 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = *puVar18;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_015a3ad4;
      }
      puVar18 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar3 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_78 = (undefined8 *)*puVar18;
            FUN_00c44438(lVar13 + 0x8040,&local_78);
          }
        }
        else if (sVar3 == 0) {
LAB_015a3ad4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if ((plVar16[0xb4] != 0) &&
         (puVar18 = *(undefined8 **)(plVar16[0xb4] + 0x10), puVar18 != (undefined8 *)0x0)) {
        puVar18 = (undefined8 *)(**(code **)*puVar18)();
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar11 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)puVar9 = PTR_DAT_047d39c8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        for (; puVar18 != (undefined8 *)0x0; puVar18 = (undefined8 *)*puVar18) {
          if (puVar18 == (undefined8 *)puVar9) {
            plVar14 = (long *)plVar16[0xb6];
            if ((plVar14 != (long *)0x0) && (plVar14 != param_1)) {
              FUN_015a3638(plVar14,param_2);
            }
            break;
          }
        }
      }
    }
    if (!bVar8) {
      *plVar17 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
      return;
    }
  }
  return;
}


