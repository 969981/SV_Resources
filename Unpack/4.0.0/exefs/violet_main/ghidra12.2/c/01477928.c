/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01477928; name: FUN_01477928
 */


void FUN_01477928(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_01477f24(&local_58);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_58 + 0x1a);
      sVar12 = *(short *)((long)local_58 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01477a6c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01477a6c:
          bVar5 = false;
        }
        if (bVar5) {
          plVar13 = (long *)0x0;
          if (local_58[2] != 0) {
            plVar13 = (long *)(local_58[2] + -0x28);
          }
          goto LAB_01477a94;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    plVar13 = (long *)0x0;
LAB_01477a94:
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar12 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar12 == 0) goto LAB_014779b0;
    if (plVar13 != (long *)0x0) {
      plVar14 = (long *)plVar13[8];
      if (plVar14 == (long *)0x0) {
        plVar8 = (long *)FUN_015d7000(0,*(undefined8 *)(param_2 + 8),param_3);
      }
      else {
        lVar11 = plVar14[6];
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar10;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar8 = (long *)FUN_015d7000(plVar14,*(undefined8 *)(param_2 + 8),param_3);
        lVar11 = plVar14[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar12 == 0) goto LAB_01477bac;
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(&local_58,plVar8);
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        if (local_58 != (undefined8 *)0x0) {
          if ((local_58[1] != 0) && (uVar9 = FUN_014789f0(), (uVar9 & 1) != 0)) {
            FUN_010eb53c(&local_68,&local_58);
          }
          puVar6 = local_58;
          if (local_58 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_58 + 3);
            do {
              sVar12 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              piVar1 = (int *)((long)local_58 + 0x1c);
              do {
                iVar7 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_48 = *puVar6;
                FUN_00c44438(lVar11 + 0x8040,&local_48);
              }
            }
            else if (sVar12 == 0) goto LAB_014779b0;
          }
        }
        *param_1 = 0;
        param_1[1] = 0;
        FUN_01478080(param_1,&local_68);
        puVar6 = local_68;
        if (local_68 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_68 + 3);
          do {
            sVar12 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar1 = (int *)((long)local_68 + 0x1c);
            do {
              iVar7 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_58 = (undefined8 *)*puVar6;
              FUN_00c44438(lVar11 + 0x8040,&local_58);
            }
          }
          else if (sVar12 == 0) goto LAB_014779b0;
        }
        lVar11 = plVar13[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
          return;
        }
        if (sVar12 != 0) {
          return;
        }
LAB_01477bac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar11 = plVar13[6];
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar12 == 0) goto LAB_01477bac;
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01478080(param_1,&local_58);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar12 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar12 == 0) {
LAB_014779b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


