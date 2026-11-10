/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0114d9a4; name: FUN_0114d9a4
 */


undefined8 FUN_0114d9a4(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  undefined1 auStack_98 [24];
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    FUN_00c9e664(&local_68,param_1 + 0xe8);
    if (local_68 != (long *)0x0) {
      if (local_60 == (long *)0x0) {
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = (long *)local_60[9];
      }
      plVar22 = plVar21 + 5;
      plVar11 = (long *)(**(code **)*plVar22)(plVar22);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar10 != 0)) {
        uVar20 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar20;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)PTR_DAT_047d6528) {
          if (*(char *)((long)plVar21 + 0x7c7) == '\0') {
            (**(code **)(*plVar21 + 0x128))(plVar21,1);
            plVar11 = (long *)(param_1 + 0x148);
            lVar12 = nn::os::GetCurrentThread();
            goto LAB_0114db00;
          }
          break;
        }
      }
    }
    uVar20 = 0;
LAB_0114da58:
    if (local_60 != (long *)0x0) {
      plVar21 = local_60 + 5;
      do {
        lVar12 = *plVar21;
        iVar10 = (int)lVar12 + -1;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar18) {
          *(int *)plVar21 = iVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
        pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar15 = "DecrementReferenceInternal";
        pcVar16 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar17 = "Reference counter underflows.";
LAB_0114dca4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x60))();
    }
  }
  else {
    uVar20 = 1;
  }
  return uVar20;
LAB_0114db00:
  if (*plVar11 == 0) goto code_r0x0114db08;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
        while (*plVar11 == 0) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar18) {
            *plVar11 = lVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_0114db10;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar18) {
      *plVar11 = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0114db10:
  uVar20 = *(undefined8 *)(param_1 + 8);
  (**(code **)(*plVar21 + 0x18))(&local_58,plVar21);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  if ((long *)local_58[2] == plVar22) {
    FUN_00cbc6dc(&local_78,&local_58);
  }
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar18) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_0114e110;
  }
  lVar12 = FUN_01096500(&local_58,uVar20,&local_78,param_1 + 0x11e);
  if (lVar12 != 0) {
    lVar19 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar20;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
      pcVar14 = "count != 0";
      pcVar15 = "AddReference";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar17 = "Reference counter overflows.";
      goto LAB_0114dca4;
    }
  }
  plVar11 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar11 != (long *)0x0) {
    lVar19 = plVar11[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar9 = local_78;
  *(long *)(param_1 + 0x138) = lVar12;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar18) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_58 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) goto LAB_0114e110;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,param_1 + 0x98);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  if (local_58[2] == param_1 + 0x28) {
    FUN_00efcde8(&local_78,&local_58);
  }
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar18) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_0114e110;
  }
  lVar12 = FUN_011c2810(plVar21,&local_78);
  puVar9 = local_78;
  *(long *)(param_1 + 0x170) = lVar12;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar18) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_58 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) {
LAB_0114e110:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    lVar12 = *(long *)(param_1 + 0x170);
  }
  if (lVar12 == -1) {
    uVar20 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x138);
    plVar21 = (long *)(lVar12 + 0x80);
    uVar6 = *(undefined4 *)(param_1 + 0x114);
    do {
      lVar19 = *plVar21;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar18) {
        *plVar21 = lVar19;
        *(undefined8 *)(lVar12 + 0x88) = *(undefined8 *)(lVar12 + 0x88);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 != lVar19) {
      lVar19 = nn::os::GetCurrentThread();
LAB_0114dc30:
      if (*plVar21 == 0 && *(long *)(lVar12 + 0x88) == 0) goto code_r0x0114dc3c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x90));
      do {
        if (*plVar21 != 0 || *(long *)(lVar12 + 0x88) != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x90));
            while (*plVar21 == 0 && *(long *)(lVar12 + 0x88) == 0) {
              cVar8 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar18) {
                *plVar21 = lVar19;
                *(undefined8 *)(lVar12 + 0x88) = 0;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_0114dc44;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar18) {
          *plVar21 = lVar19;
          *(undefined8 *)(lVar12 + 0x88) = 0;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_0114dc44:
      *(undefined4 *)(lVar12 + 0x48) = uVar6;
      do {
        lVar19 = *plVar21;
        lVar13 = *(long *)(lVar12 + 0x88);
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar18) {
          *plVar21 = lVar19;
          *(long *)(lVar12 + 0x88) = lVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar3 = *plVar21;
        lVar4 = *(long *)(lVar12 + 0x88);
        if (lVar3 != lVar19 || lVar4 != lVar13) {
          bVar18 = false;
          ClearExclusiveLocal();
          goto LAB_0114dd40;
        }
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar18) {
          *plVar21 = 0;
          *(long *)(lVar12 + 0x84) = lVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar18 = true;
LAB_0114dd40:
      if (!bVar18) {
        do {
          lVar19 = *plVar21;
          lVar13 = *(long *)(lVar12 + 0x88);
          if (lVar19 != lVar3 || lVar13 != lVar4) {
            bVar18 = false;
            ClearExclusiveLocal();
            goto joined_r0x0114e250;
          }
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar18) {
            *plVar21 = 0;
            *(long *)(lVar12 + 0x84) = lVar4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar18 = true;
joined_r0x0114e250:
        if (!bVar18) {
          do {
            lVar3 = *plVar21;
            lVar4 = *(long *)(lVar12 + 0x88);
            if (lVar3 != lVar19 || lVar4 != lVar13) {
              bVar18 = false;
              ClearExclusiveLocal();
              lVar19 = lVar3;
              lVar13 = lVar4;
              goto joined_r0x0114e250;
            }
            cVar8 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar18) {
              *plVar21 = 0;
              *(long *)(lVar12 + 0x84) = lVar13;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar18 = true;
          lVar19 = lVar3;
          lVar13 = lVar4;
          goto joined_r0x0114e250;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x90));
      goto LAB_0114dd4c;
    }
    *(undefined4 *)(lVar12 + 0x48) = uVar6;
LAB_0114dd4c:
    if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
      uVar7 = *(undefined2 *)(param_1 + 0x58);
      plVar21 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar21);
      }
      (**(code **)(*plVar21 + 0x20))(plVar21,uVar7);
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      FUN_01293f20(param_1,*(undefined1 *)(param_1 + 0x131));
    }
    if (*(char *)(param_1 + 0x161) != '\0') {
      FUN_012a3740(*(undefined4 *)(param_1 + 0x134),param_1);
    }
    if (*(char *)(param_1 + 0x162) != '\0') {
      FUN_01e359f4(auStack_98,param_1);
      FUN_01e2f634(param_1,auStack_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
    }
    uVar20 = 1;
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
  goto LAB_0114da58;
code_r0x0114db08:
  cVar8 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar18) {
    *plVar11 = lVar12;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0114db10;
  goto LAB_0114db00;
code_r0x0114dc3c:
  cVar8 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar18) {
    *plVar21 = lVar19;
    *(undefined8 *)(lVar12 + 0x88) = 0;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0114dc44;
  goto LAB_0114dc30;
}


