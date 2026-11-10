/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018994ac; name: FUN_018994ac
 */


void FUN_018994ac(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  for (plVar15 = *(long **)(param_1 + 0x148); plVar15 != (long *)(param_1 + 0x140);
      plVar15 = (long *)plVar15[1]) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00f351dc(&local_78,plVar15[2] + 0x58);
    if ((local_78 != (undefined8 *)0x0) && (*(short *)((long)local_78 + 0x1a) != 0)) {
      psVar1 = (short *)((long)local_78 + 0x1a);
      sVar12 = *(short *)((long)local_78 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_018997b0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_018997b0:
          bVar5 = false;
        }
        if (bVar5) {
          if (local_78[2] != 0) {
            plVar14 = (long *)(local_78[2] + -0x28);
            FUN_013e0f3c(plVar14);
            (**(code **)(*plVar14 + 0x60))(plVar14);
          }
          break;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00ca1a48(&local_88,plVar15[2] + 0x48);
    puVar8 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      sVar12 = *(short *)((long)local_88 + 0x1a);
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar6);
            }
            lVar11 = *(long *)puVar7;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68 = *puVar8;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_018995f0;
      }
      if (sVar12 != 0) {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_00ca1a48(&local_88,plVar15[2] + 0x48);
        puVar8 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          if (*(short *)((long)local_88 + 0x1a) != 0) {
            psVar1 = (short *)((long)local_88 + 0x1a);
            sVar12 = *(short *)((long)local_88 + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar12) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01899820;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01899820:
                bVar5 = false;
              }
              if (bVar5) {
                plVar14 = (long *)0x0;
                if (local_88[2] != 0) {
                  plVar14 = (long *)(local_88[2] + -0x28);
                }
                goto LAB_01899848;
              }
              sVar12 = sVar3;
            } while (sVar3 != 0);
          }
          plVar14 = (long *)0x0;
LAB_01899848:
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_88 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != -1) {
              if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar6);
              }
              lVar11 = *(long *)puVar7;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_68 = *puVar8;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
          else if (sVar12 == 0) goto LAB_018995f0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x120))(plVar14,1);
            lVar11 = plVar14[6];
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar11 + 0x10) = 0;
              (**(code **)(*plVar14 + 0x50))(plVar14);
            }
            else if (sVar12 == 0) goto LAB_018998a4;
          }
        }
      }
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          lVar11 = *(long *)puVar7;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_88 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_88);
        }
      }
      else if (sVar12 == 0) {
LAB_018995f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar11 = *(long *)(param_1 + 0x140);
    plVar15 = *(long **)(param_1 + 0x148);
    *(undefined8 *)(*plVar15 + 8) = *(undefined8 *)(lVar11 + 8);
    **(long **)(lVar11 + 8) = *plVar15;
    *(undefined8 *)(param_1 + 0x150) = 0;
    while (plVar15 != (long *)(param_1 + 0x140)) {
      plVar14 = (long *)plVar15[1];
      plVar13 = (long *)plVar15[2];
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
        else if (sVar12 == 0) {
LAB_018998a4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar13 = *(long **)(param_1 + 0x158);
      uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar15,0x18,8);
        plVar15 = plVar14;
      }
      else {
        FUN_00c48fe8(plVar13,plVar15,0x18,8);
        plVar15 = plVar14;
      }
    }
  }
  return;
}


