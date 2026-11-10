/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a78e3c; name: FUN_01a78e3c
 */


void FUN_01a78e3c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 *local_88 [3];
  long *local_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  lVar9 = *(long *)(param_2 + 0x40);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a78eb8;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a78eb8:
        bVar15 = false;
      }
      if (bVar15) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar11 = (long *)(lVar9 + -0x28);
          FUN_00d8fb98(local_88,&DAT_04543448);
          FUN_00fe3ff4(local_68,plVar11,local_88);
          puVar14 = local_68[0];
          if (local_68[0] == (undefined8 *)0x0) {
            plVar12 = (long *)0x0;
            goto LAB_01a78f0c;
          }
          if (*(short *)((long)local_68[0] + 0x1a) == 0) goto LAB_01a791c4;
          psVar1 = (short *)((long)local_68[0] + 0x1a);
          sVar10 = *(short *)((long)local_68[0] + 0x1a);
          goto LAB_01a79190;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_01a78e60;
code_r0x01a792b0:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *plVar8 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01a78f30;
  goto LAB_01a792a8;
  while (sVar10 = sVar3, sVar3 != 0) {
LAB_01a79190:
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01a791b4;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a791b4:
      bVar15 = false;
    }
    if (bVar15) {
      plVar12 = (long *)0x0;
      if (local_68[0][2] != 0) {
        plVar12 = (long *)(local_68[0][2] + -0x28);
      }
      goto LAB_01a791dc;
    }
  }
LAB_01a791c4:
  plVar12 = (long *)0x0;
LAB_01a791dc:
  psVar1 = (short *)(local_68[0] + 3);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)local_68[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar15) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_58 = *puVar14;
      FUN_00c44438(lVar7 + 0x8040,&local_58);
    }
  }
  else if (sVar10 == 0) goto LAB_01a79034;
LAB_01a78f0c:
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 0x22;
    lVar13 = *plVar8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar13) {
      lVar7 = nn::os::GetCurrentThread();
      bVar15 = false;
LAB_01a792a8:
      if (*plVar8 == 0) goto code_r0x01a792b0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x23));
      bVar15 = false;
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x23));
            while (*plVar8 == 0) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar15) {
                *plVar8 = lVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
              bVar15 = false;
              if (cVar5 == '\0') goto LAB_01a78f30;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01a78f30;
    }
    bVar15 = true;
LAB_01a78f30:
    plVar8 = (long *)FUN_01df6e88(plVar12 + 0x25);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_01df6e88(plVar12 + 0x2c);
    }
    if (!bVar15) {
      plVar12[0x22] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x23));
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(local_88,plVar8);
      *param_1 = 0;
      param_1[1] = 0;
      puVar14 = local_88[0];
      if ((long *)local_88[0][2] == plVar8 + 5) {
        FUN_010b7b78(param_1,local_88);
        puVar14 = local_88[0];
      }
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
        do {
          sVar10 = *psVar1;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar15) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_68[0] = (undefined8 *)*puVar14;
            FUN_00c44438(lVar7 + 0x8040,local_68);
          }
        }
        else if (sVar10 == 0) {
LAB_01a79034:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar7 = plVar12[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar10 == 0) goto LAB_01a78fec;
      lVar9 = *(long *)(lVar9 + 8);
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
        return;
      }
      if (sVar10 != 0) {
        return;
      }
      goto LAB_01a78fec;
    }
    lVar7 = plVar12[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar10 == 0) goto LAB_01a78fec;
  }
  lVar9 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar10 == 0) {
LAB_01a78fec:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01a78e60:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


