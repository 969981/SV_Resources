/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0b08c; name: FUN_00f0b08c
 */


void FUN_00f0b08c(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  undefined2 uVar6;
  long lVar7;
  char cVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  uVar12 = (**(code **)(*plVar15 + 0xd8))(plVar15);
  if ((uVar12 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x11e) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x11e) == '\0') {
    *(undefined2 *)(param_1 + 0x11f) = 0;
    plVar14 = plVar15 + 0x22;
    lVar13 = *plVar14;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 != lVar13) {
      lVar16 = nn::os::GetCurrentThread();
LAB_00f0b2c4:
      if (*plVar14 == 0) goto code_r0x00f0b2cc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
            while (*plVar14 == 0) {
              cVar8 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *plVar14 = lVar16;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00f0b2d4;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar16;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00f0b2d4:
      bVar10 = false;
      goto LAB_00f0b2d8;
    }
    bVar10 = true;
LAB_00f0b2d8:
    plVar14 = (long *)FUN_00f0ba70(plVar15[0x25],plVar15[0x26]);
    if (((long *)plVar15[0x26] == plVar14) || (*plVar14 == 0)) {
      plVar14 = (long *)FUN_00f0ba70(plVar15[0x2c],plVar15[0x2d]);
      if ((long *)plVar15[0x2d] == plVar14) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        if (*plVar14 != 0) {
          lVar16 = *plVar14 + -0x20;
        }
      }
    }
    else {
      lVar16 = *plVar14 + -0x20;
    }
    if (!bVar10) {
      plVar15[0x22] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x23));
    }
    if (lVar16 != 0) {
      local_88 = (undefined8 *)0x8a0e76b2f88f01ea;
      pcStack_80 = "offset";
      local_78 = 6;
      local_70 = (long *)0x0;
      FUN_00f0c464(&local_68,*(undefined8 *)(lVar16 + 0x170),&local_88);
      FUN_00c43ef0((long *)(param_1 + 0x128),&local_68);
      puVar9 = local_68;
      *(undefined4 *)(param_1 + 0x140) = local_50;
      *(undefined8 *)(param_1 + 0x138) = local_58;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_48 = *puVar9;
            FUN_00c44438(lVar13 + 0x8040,&local_48);
          }
        }
        else if (sVar5 == 0) goto LAB_00f0b4bc;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined8 *)0x14adcf6770c3926f;
      pcStack_80 = "set_offset";
      local_78 = 10;
      local_70 = (long *)0x0;
      FUN_00f0c464(&local_68,*(undefined8 *)(lVar16 + 0x170),&local_88);
      FUN_00c43ef0((long *)(param_1 + 0x148),&local_68);
      puVar9 = local_68;
      *(undefined4 *)(param_1 + 0x160) = local_50;
      *(undefined8 *)(param_1 + 0x158) = local_58;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_48 = *puVar9;
            FUN_00c44438(lVar16 + 0x8040,&local_48);
          }
        }
        else if (sVar5 == 0) goto LAB_00f0b4bc;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      lVar16 = *(long *)(param_1 + 0x128);
      bVar10 = false;
      if (lVar16 != 0) {
        if (*(short *)(lVar16 + 0x1a) == 0) {
LAB_00f0b4e4:
          bVar10 = false;
        }
        else {
          bVar10 = false;
          if (*(char *)(param_1 + 0x13c) != '\0') {
            lVar16 = *(long *)(param_1 + 0x148);
            bVar10 = false;
            if (lVar16 != 0) {
              if (*(short *)(lVar16 + 0x1a) == 0) goto LAB_00f0b4e4;
              bVar10 = *(char *)(param_1 + 0x15c) != '\0';
            }
          }
        }
      }
      *(bool *)(param_1 + 0x11f) = bVar10;
    }
    lVar16 = FUN_00f0bb80(plVar15 + 0x21,&local_68);
    if (lVar16 != 0) {
      FUN_011e3db0(lVar16,1);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_00c43ef0(&local_68,lVar16 + 0x98);
      local_88 = (undefined8 *)0x0;
      pcStack_80 = (char *)0x0;
      if (local_68[2] == lVar16 + 0x28) {
        FUN_00f0c140(&local_88,&local_68);
      }
      puVar9 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_48 = *puVar9;
            FUN_00c44438(lVar16 + 0x8040,&local_48);
          }
        }
        else if (sVar5 == 0) goto LAB_00f0b4bc;
      }
      FUN_00f0be1c(param_1 + 0x168,&local_88);
      puVar9 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_68 = (undefined8 *)*puVar9;
            FUN_00c44438(lVar16 + 0x8040,&local_68);
          }
        }
        else if (sVar5 == 0) {
LAB_00f0b4bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    if ((*(char *)(param_1 + 0x11f) == '\0') && (*(char *)(param_1 + 0x120) == '\0')) {
      if ((*(char *)(param_1 + 0x58) == -0x7e) && (*(char *)(param_1 + 0x59) == -0x7e)) {
        return;
      }
      uVar6 = *(undefined2 *)(param_1 + 0x58);
      plVar15 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8282;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar15);
      }
      (**(code **)(*plVar15 + 0x20))(plVar15,uVar6);
      return;
    }
    *(undefined1 *)(param_1 + 0x11e) = 1;
  }
  uVar17 = FUN_00f0b960();
  *(undefined4 *)(param_1 + 0x124) = uVar17;
  if (((((*(char *)(param_1 + 0x11f) != '\0') && (*(long *)(param_1 + 0x128) != 0)) &&
       (*(short *)(*(long *)(param_1 + 0x128) + 0x1a) != 0)) &&
      ((*(char *)(param_1 + 0x13c) != '\0' && (*(long *)(param_1 + 0x148) != 0)))) &&
     ((*(short *)(*(long *)(param_1 + 0x148) + 0x1a) != 0 && (*(char *)(param_1 + 0x15c) != '\0'))))
  {
    FUN_00cf681c(*(undefined4 *)(param_1 + 0x124),param_1 + 0x128);
    FUN_00d067cc(param_1 + 0x148,1);
  }
  if (((*(char *)(param_1 + 0x120) == '\0') || (*(long *)(param_1 + 0x168) == 0)) ||
     (lVar16 = *(long *)(*(long *)(param_1 + 0x168) + 0x10), lVar16 == 0)) {
    return;
  }
  plVar15 = (long *)(param_1 + 0x38);
  if (*PTR_DAT_047db0e8 == '\0') {
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\0'))
    goto LAB_00f0b1cc;
    uVar6 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x58) == '\x06') && (*(char *)(param_1 + 0x59) == '\x06'))
    goto LAB_00f0b1cc;
    uVar6 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0x606;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar15);
  }
  (**(code **)(*plVar15 + 0x20))(plVar15,uVar6);
LAB_00f0b1cc:
  fVar18 = *(float *)(param_1 + 0x124);
  plVar15 = (long *)(lVar16 + 0x1d8);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar15 == 0 && *(long *)(lVar16 + 0x1e0) == 0) {
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = lVar13;
      *(undefined8 *)(lVar16 + 0x1e0) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00f0b1f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1e8));
  do {
    if (*plVar15 != 0 || *(long *)(lVar16 + 0x1e0) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1e8));
        while (*plVar15 == 0 && *(long *)(lVar16 + 0x1e0) == 0) {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar13;
            *(undefined8 *)(lVar16 + 0x1e0) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00f0b1f8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = lVar13;
      *(undefined8 *)(lVar16 + 0x1e0) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00f0b1f8:
  *(float *)(lVar16 + 0x1f8) = fVar18 * 24.0;
  do {
    lVar13 = *plVar15;
    lVar7 = *(long *)(lVar16 + 0x1e0);
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = lVar13;
      *(long *)(lVar16 + 0x1e0) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar3 = *plVar15;
    lVar4 = *(long *)(lVar16 + 0x1e0);
    if (lVar3 != lVar13 || lVar4 != lVar7) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00f0b284;
    }
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar10) {
      *plVar15 = 0;
      *(long *)(lVar16 + 0x1dc) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar10 = true;
LAB_00f0b284:
  if (!bVar10) {
    do {
      lVar13 = *plVar15;
      lVar7 = *(long *)(lVar16 + 0x1e0);
      if (lVar13 != lVar3 || lVar7 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f0b830;
      }
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = 0;
        *(long *)(lVar16 + 0x1dc) = lVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar10 = true;
joined_r0x00f0b830:
    if (!bVar10) {
      do {
        lVar3 = *plVar15;
        lVar4 = *(long *)(lVar16 + 0x1e0);
        if (lVar3 != lVar13 || lVar4 != lVar7) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar13 = lVar3;
          lVar7 = lVar4;
          goto joined_r0x00f0b830;
        }
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = 0;
          *(long *)(lVar16 + 0x1dc) = lVar7;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar10 = true;
      lVar13 = lVar3;
      lVar7 = lVar4;
      goto joined_r0x00f0b830;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1e8));
  return;
code_r0x00f0b2cc:
  cVar8 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar10) {
    *plVar14 = lVar16;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00f0b2d4;
  goto LAB_00f0b2c4;
}


