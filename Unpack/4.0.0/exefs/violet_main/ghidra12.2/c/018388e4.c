/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018388e4; name: FUN_018388e4
 */


void FUN_018388e4(long *param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  param_1[2] = 0;
  puVar6 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar11;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar6 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&DAT_04553ed0;
  param_1[4] = (long)&PTR_LAB_04553f48;
  *plVar10 = (long)&PTR_LAB_04553f98;
  plVar10 = param_1 + 8;
  *plVar10 = 0;
  param_1[9] = 0;
  FUN_00ca1a48(plVar10,param_2);
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x146) = 0;
  memset((void *)((long)param_1 + 0x84),0,0xc1);
  memset((void *)((long)param_1 + 0x14c),0,0xc1);
  if (*plVar10 == 0) {
    return;
  }
  local_80 = *(long *)(*plVar10 + 0x10);
  if (local_80 == 0) {
    return;
  }
  local_80 = local_80 + -0x28;
  local_90 = &local_80;
  FUN_018392d0(&local_78,&local_90);
  FUN_0127739c(param_1 + 10,&local_78);
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_58);
      }
    }
    else if (sVar3 == 0) goto LAB_01838b80;
  }
  local_90 = &local_80;
  FUN_0183915c(&local_78,&local_90);
  FUN_013263f8(param_1 + 0xc,&local_78);
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58[0] = (undefined8 *)*local_78;
        FUN_00c44438(lVar9 + 0x8040,local_58);
      }
    }
    else if (sVar3 == 0) goto LAB_01838b80;
  }
  local_78 = (undefined8 *)&DAT_401ce73c07e48d44;
  pcStack_70 = "dressup_emitter";
  local_68 = 0xf;
  local_60 = (long *)0x0;
  FUN_00fe3ff4(local_58,local_80,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58[0] == (undefined8 *)0x0) {
LAB_01838aa4:
    local_90 = (long *)0x0;
    uStack_88 = 0;
  }
  else {
    if (*(short *)((long)local_58[0] + 0x1a) == 0) goto LAB_01838aec;
    if (local_58[0] == (undefined8 *)0x0) goto LAB_01838aa4;
    lVar9 = local_58[0][2];
    if (lVar9 == 0) {
LAB_01838aec:
      puVar7 = local_58[0];
      if (local_58[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_58[0] + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_78 = (undefined8 *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_78);
          }
        }
        else if (sVar3 == 0) goto LAB_01838b80;
      }
      goto LAB_01838aa4;
    }
    plVar10 = (long *)(lVar9 + 0xe8);
    lVar12 = *plVar10;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar12) {
      lVar11 = nn::os::GetCurrentThread();
      bVar14 = false;
LAB_018390fc:
      if (*plVar10 == 0) goto code_r0x01839104;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
      bVar14 = false;
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
            while (*plVar10 == 0) {
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar14 = false;
              if (cVar4 == '\0') goto LAB_01838bd0;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01838bd0;
    }
    bVar14 = true;
LAB_01838bd0:
    plVar10 = (long *)FUN_01ea6b90(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar10) || (*plVar10 == 0)) {
      plVar10 = (long *)FUN_01ea6b90(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar10) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)0x0;
        if (*plVar10 != 0) {
          plVar13 = (long *)(*plVar10 + -0x20);
        }
      }
    }
    else {
      plVar13 = (long *)(*plVar10 + -0x20);
    }
    if (!bVar14) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if (plVar13 == (long *)0x0) goto LAB_01838aec;
    FUN_01100390(plVar13,0);
    (**(code **)(*plVar13 + 0x18))(&local_78,plVar13);
    local_90 = (long *)0x0;
    uStack_88 = 0;
    if ((long *)local_78[2] == plVar13 + 5) {
      FUN_010b7b78(&local_90,&local_78);
    }
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_01838b80;
    }
    puVar7 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_78 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_78);
        }
      }
      else if (sVar3 == 0) goto LAB_01838b80;
    }
  }
  FUN_010764a4(param_1 + 0xe,&local_90);
  plVar10 = local_90;
  if (local_90 != (long *)0x0) {
    plVar13 = local_90 + 3;
    do {
      sVar3 = (short)*plVar13;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *(short *)plVar13 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_78 = (undefined8 *)*plVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_78);
      }
    }
    else if (sVar3 == 0) {
LAB_01838b80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01839104:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar5) {
    *plVar10 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01838bd0;
  goto LAB_018390fc;
}


