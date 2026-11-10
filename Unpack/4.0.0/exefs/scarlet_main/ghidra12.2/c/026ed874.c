/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ed874; name: FUN_026ed874
 */


bool FUN_026ed874(long param_1)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  if (*(int *)(param_1 + 0x134) != 1) {
    if (*(int *)(param_1 + 0x134) != 0) goto LAB_026ed9bc;
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  plVar1 = (long *)(param_1 + 0x138);
  if ((*(long *)(param_1 + 0x138) == 0) || (*(short *)(*(long *)(param_1 + 0x138) + 0x1a) == 0)) {
    FUN_00c9e664(&local_58,param_1 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = local_50[9];
    }
    plVar10 = (long *)(lVar14 + 0x110);
    lVar13 = *plVar10;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar13) {
      lVar9 = nn::os::GetCurrentThread();
LAB_026ed8e8:
      if (*plVar10 == 0) goto code_r0x026ed8f0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x118));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x118));
            while (*plVar10 == 0) {
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar12) {
                *plVar10 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_026ed8f8;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *plVar10 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_026ed8f8:
      bVar12 = false;
      goto LAB_026ed8fc;
    }
    bVar12 = true;
LAB_026ed8fc:
    plVar10 = (long *)FUN_026edca0(*(undefined8 *)(lVar14 + 0x128),*(undefined8 *)(lVar14 + 0x130));
    if ((*(long **)(lVar14 + 0x130) == plVar10) || (*plVar10 == 0)) {
      plVar10 = (long *)FUN_026edca0(*(undefined8 *)(lVar14 + 0x160),*(undefined8 *)(lVar14 + 0x168)
                                    );
      if (*(long **)(lVar14 + 0x168) == plVar10) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*plVar10 != 0) {
          lVar9 = *plVar10 + -0x20;
        }
      }
    }
    else {
      lVar9 = *plVar10 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar14 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x118));
    }
    if (local_50 != (long *)0x0) {
      plVar10 = local_50 + 5;
      do {
        lVar14 = *plVar10;
        iVar8 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *(int *)plVar10 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
    if (lVar9 == 0) goto LAB_026ed9bc;
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
    FUN_00c43ef0(&local_58,lVar9 + 0x98);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    if (local_58[2] == lVar9 + 0x28) {
      FUN_00d94688(&local_68,&local_58);
    }
    plVar10 = local_58;
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 3;
      do {
        sVar5 = (short)*plVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *(short *)plVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
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
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_48 = *plVar10;
          FUN_00c44438(lVar14 + 0x8040,&local_48);
        }
      }
      else if (sVar5 == 0) goto LAB_026edad4;
    }
    FUN_00d48230(plVar1,&local_68);
    puVar7 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_68 + 3);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar12) {
          *psVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar12) {
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
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_58 = (long *)*puVar7;
          FUN_00c44438(lVar14 + 0x8040,&local_58);
        }
      }
      else if (sVar5 == 0) {
LAB_026edad4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    lVar14 = 0;
    if (*(long *)(*plVar1 + 0x10) != 0) {
      lVar14 = *(long *)(*plVar1 + 0x10) + -0x28;
    }
    if (*(char *)(lVar14 + 0x11a) != '\0') {
      FUN_026eddb0(param_1,plVar1);
      uVar11 = FUN_026d5de8(param_1);
      if ((uVar11 & 1) != 0) {
        FUN_026edef4(param_1,plVar1);
      }
      *(undefined4 *)(param_1 + 0x134) = 2;
    }
  }
LAB_026ed9bc:
  return *(int *)(param_1 + 0x134) == 2;
code_r0x026ed8f0:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar12) {
    *plVar10 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_026ed8f8;
  goto LAB_026ed8e8;
}


