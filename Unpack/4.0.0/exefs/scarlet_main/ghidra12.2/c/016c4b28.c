/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c4b28; name: FUN_016c4b28
 */


void FUN_016c4b28(long param_1)

{
  code *pcVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x128) != '\0') && (*(char *)(param_1 + 0x129) == '\0')) {
    return;
  }
  FUN_00c9e664(&local_e0,param_1 + 0xe8);
  if (local_d8 == (code *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(local_d8 + 0x48);
  }
  plVar12 = (long *)(lVar15 + 0x110);
  lVar13 = *plVar12;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar13) {
    lVar11 = nn::os::GetCurrentThread();
LAB_016c4b80:
    if (*plVar12 == 0) goto code_r0x016c4b88;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_016c4b90;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_016c4b90:
    bVar14 = false;
    goto LAB_016c4b94;
  }
  bVar14 = true;
LAB_016c4b94:
  plVar12 = (long *)FUN_016c5130(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130));
  if ((*(long **)(lVar15 + 0x130) == plVar12) || (*plVar12 == 0)) {
    plVar12 = (long *)FUN_016c5130(*(undefined8 *)(lVar15 + 0x160),*(undefined8 *)(lVar15 + 0x168));
    if (*(long **)(lVar15 + 0x168) == plVar12) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*plVar12 != 0) {
        lVar11 = *plVar12 + -0x20;
      }
    }
  }
  else {
    lVar11 = *plVar12 + -0x20;
  }
  if (!bVar14) {
    *(undefined8 *)(lVar15 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
  }
  if (local_d8 != (code *)0x0) {
    pcVar1 = local_d8 + 0x28;
    do {
      iVar10 = *(int *)pcVar1;
      iVar7 = iVar10 + -1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar14) {
        *(int *)pcVar1 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*(long *)local_d8 + 0x10))();
    }
    else if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x60))();
  }
  if (lVar11 == 0) {
    return;
  }
  FUN_016c5438(&local_48,lVar11,0);
  if (local_48 == (long *)0x0) {
    return;
  }
  if ((1 < *(int *)((long)local_48 + 0x74)) && ((int)local_48[0x4e] == 6)) {
    if ((*(char *)(param_1 + 0x129) == '\0') || (*(short *)(param_1 + 0x12a) == -1)) {
      if ((*(char *)(param_1 + 0x128) != '\0') || (*(long *)(param_1 + 0x120) == 0))
      goto LAB_016c4d20;
      uVar9 = FUN_016c52b8(local_48,param_1 + 0x120);
      *(undefined2 *)(param_1 + 0x12a) = uVar9;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      FUN_00c43ef0(&local_e0,param_1 + 0x98);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if (local_e0[2] == param_1 + 0x28) {
        FUN_0144a8b8(&local_58,&local_e0);
      }
      plVar12 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar3 = local_e0 + 3;
        do {
          sVar5 = (short)*plVar3;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar14) {
            *(short *)plVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_e0 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar14) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_f0 = (undefined8 *)*plVar12;
            FUN_00c44438(lVar15 + 0x8040,&local_f0);
          }
        }
        else if (sVar5 == 0) goto LAB_016c4e34;
      }
      plVar12 = local_48;
      local_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      FUN_0158a464(&local_f0,&local_58);
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      FUN_016c5244(&local_e0,&local_f0);
      FUN_016c50d4(plVar12 + 0x7b,&local_e0);
      pcVar1 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = (long *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar1)(auStack_c0);
      }
      puVar8 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_f0 + 3);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar14) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar14) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_28 = *puVar8;
            FUN_00c44438(lVar15 + 0x8040,&local_28);
          }
        }
        else if (sVar5 == 0) goto LAB_016c4e34;
      }
      puVar8 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_58 + 3);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar14) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_58 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar14) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_e0 = (long *)*puVar8;
            FUN_00c44438(lVar15 + 0x8040,&local_e0);
          }
        }
        else if (sVar5 == 0) {
LAB_016c4e34:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined2 *)(param_1 + 0x128) = 1;
    }
    else {
      FUN_016c6620(local_48,param_1 + 0x12a,param_1 + 0x120);
      *(undefined1 *)(param_1 + 0x129) = 0;
    }
    FUN_00c6a514(param_1 + 0x38,0x82);
  }
LAB_016c4d20:
  if (local_48 != (long *)0x0) {
    lVar15 = local_48[6];
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
code_r0x016c4b88:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar14) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_016c4b90;
  goto LAB_016c4b80;
}


