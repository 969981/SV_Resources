/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f86a40; name: FUN_01f86a40
 */


void FUN_01f86a40(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar10 = (long *)(param_2 + 0xe8);
  lVar8 = *plVar10;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f86ac0;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f86ac0:
        bVar16 = false;
      }
      if (bVar16) {
        puVar15 = *(undefined8 **)(lVar8 + 0x10);
        if (puVar15 != (undefined8 *)0x0) {
          plVar13 = puVar15 + -5;
          plVar10 = (long *)(**(code **)*puVar15)(puVar15);
          if (((*PTR_DAT_047d5320 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d5320), iVar5 != 0)) {
            uVar7 = FUN_00ff17b4();
            *(undefined8 *)PTR_DAT_047d5328 = uVar7;
            __cxa_guard_release(PTR_DAT_047d5320);
          }
          goto joined_r0x01f86b0c;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  lVar8 = *(long *)(param_2 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f86c0c;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f86c0c:
        bVar16 = false;
      }
      if (bVar16) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar13 = (long *)(lVar8 + 0xe8);
          lVar12 = *plVar13;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 == lVar12) {
            bVar16 = true;
            goto LAB_01f86c60;
          }
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_01f86c4c;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
LAB_01f86a6c:
  *param_1 = 0;
  return;
joined_r0x01f86b0c:
  if (plVar10 != (long *)0x0) {
    if (plVar10 != (long *)PTR_DAT_047d5328) goto code_r0x01f86b20;
    *param_1 = plVar13;
    lVar8 = puVar15[1];
    if (*(long *)(lVar8 + 0x10) != 0) {
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar9 == -1) goto LAB_01f86bac;
      goto LAB_01f86b2c;
    }
    goto LAB_01f87080;
  }
  goto LAB_01f86b28;
code_r0x01f86b20:
  plVar10 = (long *)*plVar10;
  goto joined_r0x01f86b0c;
LAB_01f86c4c:
  if (*plVar13 == 0) {
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01f86c5c;
    goto LAB_01f86c4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar16) {
            *plVar13 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01f86c5c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar16) {
      *plVar13 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01f86c5c:
  bVar16 = false;
LAB_01f86c60:
  lVar6 = FUN_01f87110(lVar8 + 0x100);
  if (lVar6 == 0) {
    lVar6 = FUN_01f87110(lVar8 + 0x138);
  }
  plVar13 = (long *)(lVar8 + -0x28);
  if (!bVar16) {
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
  }
  if (lVar6 != 0) {
    plVar14 = *(long **)(lVar6 + 0x338);
    (**(code **)(*plVar14 + 0x18))(local_58,plVar14);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    plVar11 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 5;
    }
    if ((long *)local_58[0][2] == plVar11) {
      FUN_00cfd544(&local_68,local_58);
    }
    puVar15 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar15;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar9 == 0) goto LAB_01f86e38;
    }
    FUN_01f8472c(plVar10,&local_68);
    puVar15 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_58[0] = (undefined8 *)*puVar15;
          FUN_00c44438(lVar8 + 0x8040,local_58);
        }
      }
      else if (sVar9 == 0) {
LAB_01f86e38:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar8 = *plVar10;
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01f86dd8;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01f86dd8:
          bVar16 = false;
        }
        if (bVar16) {
          puVar15 = *(undefined8 **)(lVar8 + 0x10);
          if (puVar15 != (undefined8 *)0x0) {
            plVar11 = puVar15 + -5;
            plVar10 = (long *)(**(code **)*puVar15)(puVar15);
            if (((*PTR_DAT_047d5320 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_047d5320), iVar5 != 0)) {
              uVar7 = FUN_00ff17b4();
              *(undefined8 *)PTR_DAT_047d5328 = uVar7;
              __cxa_guard_release(PTR_DAT_047d5320);
            }
            goto joined_r0x01f86fac;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
  goto LAB_01f86a6c;
joined_r0x01f86fac:
  if (plVar10 == (long *)0x0) {
    *param_1 = 0;
LAB_01f870c0:
    lVar8 = puVar15[1];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
LAB_01f870fc:
      (**(code **)(*plVar13 + 0x60))(plVar13);
      return;
    }
    if (sVar9 != 0) goto LAB_01f870fc;
    goto LAB_01f86b50;
  }
  if (plVar10 == (long *)PTR_DAT_047d5328) {
    *param_1 = plVar11;
    lVar8 = puVar15[1];
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01f87080:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) {
LAB_01f86bac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    goto LAB_01f870c0;
  }
  plVar10 = (long *)*plVar10;
  goto joined_r0x01f86fac;
LAB_01f86b28:
  *param_1 = 0;
LAB_01f86b2c:
  lVar8 = puVar15[1];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f86d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return;
  }
  if (sVar9 != 0) {
    return;
  }
LAB_01f86b50:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


