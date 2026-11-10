/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010755ac; name: FUN_010755ac
 */


void FUN_010755ac(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  *param_1 = &DAT_045de3e0;
  param_1[4] = &PTR_LAB_045de418;
  plVar15 = param_1 + 0x22;
  lVar14 = DAT_0485a0d8 + 0x38;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar15 == 0 && param_1[0x23] == 0) {
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar13) {
      *plVar15 = lVar10;
      param_1[0x23] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01075608;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
  do {
    if (*plVar15 != 0 || param_1[0x23] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar15 == 0 && param_1[0x23] == 0) {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar13) {
            *plVar15 = lVar10;
            param_1[0x23] = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01075608;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar13) {
      *plVar15 = lVar10;
      param_1[0x23] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_01075608:
  plVar16 = (long *)param_1[0x1b];
  for (plVar12 = (long *)param_1[0x1a]; plVar12 != plVar16; plVar12 = plVar12 + 7) {
    puVar6 = (undefined8 *)*plVar12;
    puVar7 = (undefined8 *)plVar12[1];
    if (puVar6 != puVar7) {
      FUN_00fafdac(*puVar6,lVar14);
      while (puVar6 = puVar6 + 1, puVar6 != puVar7) {
        FUN_00fafdac(*puVar6,lVar14);
      }
    }
  }
  do {
    lVar14 = *plVar15;
    lVar10 = param_1[0x23];
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar13) {
      *plVar15 = lVar14;
      param_1[0x23] = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar3 = *plVar15;
    lVar4 = param_1[0x23];
    if (lVar3 != lVar14 || lVar4 != lVar10) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_010756b0;
    }
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar13) {
      *plVar15 = 0;
      *(long *)((long)param_1 + 0x114) = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar13 = true;
LAB_010756b0:
  if (!bVar13) {
    do {
      lVar14 = *plVar15;
      lVar10 = param_1[0x23];
      if (lVar14 != lVar3 || lVar10 != lVar4) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x01075b0c;
      }
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar13) {
        *plVar15 = 0;
        *(long *)((long)param_1 + 0x114) = lVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar13 = true;
joined_r0x01075b0c:
    if (!bVar13) {
      do {
        lVar3 = *plVar15;
        lVar4 = param_1[0x23];
        if (lVar3 != lVar14 || lVar4 != lVar10) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar14 = lVar3;
          lVar10 = lVar4;
          goto joined_r0x01075b0c;
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = 0;
          *(long *)((long)param_1 + 0x114) = lVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar13 = true;
      lVar14 = lVar3;
      lVar10 = lVar4;
      goto joined_r0x01075b0c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  plVar15 = (long *)param_1[0x3b];
  if (plVar15 != (long *)0x0) {
    plVar16 = (long *)param_1[0x3c];
    plVar12 = plVar15;
    if (plVar16 != plVar15) {
      do {
        plVar16 = plVar16 + -2;
        if (*plVar16 != 0) {
          psVar1 = (short *)(*plVar16 + 0x18);
          do {
            sVar5 = *psVar1;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar5 == 1) {
            FUN_0116e168();
          }
          else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      } while (plVar16 != plVar15);
      plVar12 = (long *)param_1[0x3b];
    }
    lVar14 = param_1[0x3d];
    plVar16 = (long *)param_1[0x3e];
    param_1[0x3c] = plVar15;
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar12,lVar14 - (long)plVar12,8);
    }
    else {
      FUN_00c48fe8(plVar16,plVar12,lVar14 - (long)plVar12,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x38));
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 0x20))();
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x24));
  lVar14 = param_1[0x1a];
  if (lVar14 != 0) {
    lVar10 = param_1[0x1b];
    if (lVar10 == lVar14) {
      lVar10 = lVar14;
    }
    else {
      FUN_01075cb4(lVar10 + -0x38);
      if (((lVar10 + -0x38 != lVar14) && (FUN_01075cb4(lVar10 + -0x70), lVar10 + -0x70 != lVar14))
         && (FUN_01075cb4(lVar10 + -0xa8), lVar10 + -0xa8 != lVar14)) {
        do {
          FUN_01075cb4(lVar10 + -0xe0);
          lVar10 = lVar10 + -0x38;
        } while (lVar14 + 0xa8 != lVar10);
      }
      lVar10 = param_1[0x1a];
    }
    lVar3 = param_1[0x1c];
    plVar15 = (long *)param_1[0x1d];
    param_1[0x1b] = lVar14;
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar3 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar10,lVar3 - lVar10,8);
    }
  }
  plVar15 = (long *)param_1[0x19];
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 5;
    do {
      lVar14 = *plVar12;
      iVar9 = (int)lVar14 + -1;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *(int *)plVar12 = iVar9;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_010758ac;
  }
  plVar15 = (long *)param_1[0x18];
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 5;
    do {
      lVar14 = *plVar12;
      iVar9 = (int)lVar14 + -1;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *(int *)plVar12 = iVar9;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_010758ac;
  }
  plVar15 = (long *)param_1[0x11];
  if (plVar15 != (long *)0x0) {
    plVar16 = (long *)param_1[0x12];
    plVar12 = plVar15;
    if (plVar16 != plVar15) {
      do {
        plVar16 = plVar16 + -1;
        plVar12 = (long *)*plVar16;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 5;
          do {
            lVar14 = *plVar2;
            iVar9 = (int)lVar14 + -1;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *(int *)plVar2 = iVar9;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          else if ((int)lVar14 == 0) {
LAB_010758ac:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      } while (plVar16 != plVar15);
      plVar12 = (long *)param_1[0x11];
    }
    lVar14 = param_1[0x13];
    plVar16 = (long *)param_1[0x14];
    param_1[0x12] = plVar15;
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar12,lVar14 - (long)plVar12,8);
    }
    else {
      FUN_00c48fe8(plVar16,plVar12,lVar14 - (long)plVar12,8);
    }
  }
  lVar14 = param_1[10];
  if (lVar14 != 0) {
    lVar10 = param_1[0xb];
    if (lVar10 == lVar14) {
      lVar10 = lVar14;
    }
    else {
      FUN_01075b98(lVar10 + -0x38);
      if (((lVar10 + -0x38 != lVar14) && (FUN_01075b98(lVar10 + -0x70), lVar10 + -0x70 != lVar14))
         && (FUN_01075b98(lVar10 + -0xa8), lVar10 + -0xa8 != lVar14)) {
        do {
          FUN_01075b98(lVar10 + -0xe0);
          lVar10 = lVar10 + -0x38;
        } while (lVar14 + 0xa8 != lVar10);
      }
      lVar10 = param_1[10];
    }
    lVar3 = param_1[0xc];
    plVar15 = (long *)param_1[0xd];
    param_1[0xb] = lVar14;
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar3 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar10,lVar3 - lVar10,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  return;
}


