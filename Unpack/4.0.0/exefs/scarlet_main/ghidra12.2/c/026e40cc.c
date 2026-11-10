/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e40cc; name: FUN_026e40cc
 */


bool FUN_026e40cc(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  long local_38;
  
  if (*(int *)(param_1 + 0x134) != 1) {
    if (*(int *)(param_1 + 0x134) != 0) goto LAB_026e4144;
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  if ((*(long *)(param_1 + 0x138) == 0) || (*(short *)(*(long *)(param_1 + 0x138) + 0x1a) == 0)) {
    FUN_00c9e664(&local_60,param_1 + 0xe8);
    if (local_58 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_58[9];
    }
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar11) {
      lVar10 = nn::os::GetCurrentThread();
      bVar13 = false;
LAB_026e4458:
      if (*plVar9 == 0) goto code_r0x026e4460;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      bVar13 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar13) {
                *plVar9 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              bVar13 = false;
              if (cVar5 == '\0') goto LAB_026e419c;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_026e419c;
    }
    bVar13 = true;
LAB_026e419c:
    plVar9 = (long *)FUN_026e44e0(*(undefined8 *)(lVar12 + 0x128),*(undefined8 *)(lVar12 + 0x130));
    if ((*(long **)(lVar12 + 0x130) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_026e44e0(*(undefined8 *)(lVar12 + 0x160),*(undefined8 *)(lVar12 + 0x168))
      ;
      if (*(long **)(lVar12 + 0x168) == plVar9) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (*plVar9 != 0) {
          lVar10 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar10 = *plVar9 + -0x20;
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (local_58 != (long *)0x0) {
      plVar9 = local_58 + 5;
      do {
        lVar12 = *plVar9;
        iVar8 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar13) {
          *(int *)plVar9 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x60))();
    }
    if (lVar10 == 0) goto LAB_026e4144;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    FUN_00c43ef0(&local_60,lVar10 + 0x98);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    if (local_60[2] == lVar10 + 0x28) {
      FUN_012968b4(&local_70,&local_60);
    }
    plVar9 = local_60;
    if (local_60 != (long *)0x0) {
      plVar2 = local_60 + 3;
      do {
        sVar4 = (short)*plVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *(short *)plVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *plVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_026e42b0;
    }
    FUN_0127739c((long *)(param_1 + 0x138),&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_60 = (long *)*puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_60);
        }
      }
      else if (sVar4 == 0) {
LAB_026e42b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x138) + 0x10);
    lVar12 = 0;
    if (lVar10 != 0) {
      lVar12 = lVar10 + -0x28;
    }
    if (*(char *)(lVar12 + 0x11a) != '\0') {
      *(undefined4 *)(param_1 + 0x134) = 2;
    }
  }
LAB_026e4144:
  return *(int *)(param_1 + 0x134) == 2;
code_r0x026e4460:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar6) {
    *plVar9 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_026e419c;
  goto LAB_026e4458;
}


