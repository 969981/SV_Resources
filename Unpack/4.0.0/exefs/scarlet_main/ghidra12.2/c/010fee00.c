/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010fee00; name: FUN_010fee00
 */


long FUN_010fee00(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long unaff_x21;
  long lVar13;
  bool bVar14;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00d391ac(&local_50,param_1 + 0x208);
  puVar6 = local_50;
  if (local_50 == (undefined8 *)0x0) {
LAB_010fee34:
    if (((*(int *)(param_1 + 0x148) == 1) || (*(int *)(param_1 + 0x148) == 3)) &&
       (plVar12 = *(long **)(*(long *)(param_1 + 0x1e8) + 0x15e0), plVar12 != (long *)0x0)) {
      unaff_x21 = plVar12[6];
      if (*(long *)(unaff_x21 + 0x10) == 0) {
LAB_010ff2c0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(unaff_x21 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(unaff_x21 + 0x10))();
        *(undefined8 *)(unaff_x21 + 8) = uVar8;
        *(undefined4 *)(unaff_x21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar11 == -1) {
LAB_010ff2e0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      bVar14 = *(char *)((long)plVar12 + 0x165) == '\0';
      if (bVar14) {
        unaff_x21 = *(long *)(param_1 + 0x1e8) + 0x15e0;
      }
      lVar10 = plVar12[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
        local_58 = (long *)0x0;
        if (bVar14) {
          return unaff_x21;
        }
      }
      else {
        if (sVar11 == 0) goto LAB_010fef0c;
        if (bVar14) {
          return unaff_x21;
        }
        local_58 = (long *)0x0;
      }
    }
    else {
      local_58 = (long *)0x0;
    }
LAB_010feeb4:
    bVar14 = true;
  }
  else {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar11 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_010fefe8;
          bVar14 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_010fefe8:
          bVar14 = false;
        }
        if (bVar14) {
          local_58 = (long *)0x0;
          if (local_50[2] != 0) {
            local_58 = (long *)(local_50[2] + -0x28);
          }
          goto LAB_010ff014;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    local_58 = (long *)0x0;
LAB_010ff014:
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) goto LAB_010ff3c8;
    if (local_58 == (long *)0x0) goto LAB_010fee34;
    FUN_010ff478(&local_50,local_58);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      if (*(short *)((long)local_50 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_50 + 0x1a);
        sVar11 = *(short *)((long)local_50 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar14) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_010ff0fc;
            bVar14 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_010ff0fc:
            bVar14 = false;
          }
          if (bVar14) {
            plVar12 = (long *)0x0;
            if (local_50[2] != 0) {
              plVar12 = (long *)(local_50[2] + -0x28);
            }
            goto LAB_010ff124;
          }
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      plVar12 = (long *)0x0;
LAB_010ff124:
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) {
LAB_010ff3c8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar12 == (long *)0x0) goto LAB_010ff050;
      plVar9 = plVar12 + 0x22;
      lVar13 = *plVar9;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar13) {
        lVar10 = nn::os::GetCurrentThread();
LAB_010ff164:
        if (*plVar9 == 0) goto code_r0x010ff16c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x23));
        do {
          if (*plVar9 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x23));
              while (*plVar9 == 0) {
                cVar4 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar14) {
                  *plVar9 = lVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_010ff174;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar14) {
            *plVar9 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_010ff174:
        unaff_x21 = 0;
        goto LAB_010ff178;
      }
      unaff_x21 = 1;
LAB_010ff178:
      plVar9 = (long *)FUN_01fa0d10(plVar12[0x25],plVar12[0x26]);
      if (((long *)plVar12[0x26] == plVar9) || (*plVar9 == 0)) {
        plVar9 = (long *)FUN_01fa0d10(plVar12[0x2c],plVar12[0x2d]);
        if ((long *)plVar12[0x2d] == plVar9) {
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
      if ((int)unaff_x21 == 0) {
        plVar12[0x22] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x23));
      }
      if ((lVar10 == 0) || (plVar9 = *(long **)(lVar10 + 0x1e8), plVar9 == (long *)0x0)) {
        bVar14 = true;
      }
      else {
        lVar10 = plVar9[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_010ff2c0;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar8;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar11 == -1) goto LAB_010ff2e0;
        unaff_x21 = FUN_010ff46c(plVar9);
        lVar10 = plVar9[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar11 == 0) goto LAB_010fef0c;
        bVar14 = false;
      }
      lVar10 = plVar12[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar11 == 0) goto LAB_010fef0c;
      if (!bVar14) goto LAB_010ff05c;
      goto LAB_010feeb4;
    }
LAB_010ff050:
    unaff_x21 = FUN_010ff46c(*(undefined8 *)(param_1 + 0x1e8));
LAB_010ff05c:
    bVar14 = false;
  }
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar11 == 0) {
LAB_010fef0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (bVar14) {
    unaff_x21 = *(long *)(param_1 + 0x1e8) + 0x15d0;
  }
  return unaff_x21;
code_r0x010ff16c:
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar14) {
    *plVar9 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_010ff174;
  goto LAB_010ff164;
}


