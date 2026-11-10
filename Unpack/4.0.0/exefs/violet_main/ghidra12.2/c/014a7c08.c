/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a7c08; name: FUN_014a7c08
 */


void FUN_014a7c08(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  undefined8 *local_68 [3];
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar12 = *param_2;
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar14 = *(short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_014a7c78;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a7c78:
        bVar9 = false;
      }
      if (bVar9) {
        lVar12 = *(long *)(lVar12 + 0x10);
        plVar10 = (long *)(lVar12 + -0x28);
        if (lVar12 != 0) {
          lVar7 = FUN_0104cf4c(lVar12 + 0xe0,local_68);
          if (lVar7 == 0) goto LAB_014a7d00;
          FUN_0135d26c(local_68,param_3);
          FUN_01477928(local_48,lVar7,local_68);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x20))();
          }
          if (local_48[0] == (undefined8 *)0x0) goto LAB_014a7d00;
          if (*(short *)((long)local_48[0] + 0x1a) == 0) goto LAB_014a7dc0;
          if (local_48[0] == (undefined8 *)0x0) goto LAB_014a7d00;
          if (*(short *)((long)local_48[0] + 0x1a) == 0) goto LAB_014a7dc0;
          psVar1 = (short *)((long)local_48[0] + 0x1a);
          sVar14 = *(short *)((long)local_48[0] + 0x1a);
          goto LAB_014a7d8c;
        }
        break;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
  }
LAB_014a7c24:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_014a7d8c:
  sVar3 = *psVar1;
  if (sVar3 == sVar14) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_014a7db0;
    bVar9 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_014a7db0:
    bVar9 = false;
  }
  if (bVar9) {
    puVar11 = (undefined8 *)local_48[0][2];
    plVar13 = puVar11 + -5;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)();
      uVar8 = FUN_014789f0();
      if ((uVar8 & 1) != 0) {
        (**(code **)(*plVar13 + 0x20))(local_68,plVar13);
        *param_1 = 0;
        param_1[1] = 0;
        if (local_68[0] != (undefined8 *)0x0) {
          if ((local_68[0][1] != 0) && (uVar8 = FUN_014789f0(), (uVar8 & 1) != 0)) {
            FUN_010eb53c(param_1,local_68);
          }
          puVar5 = local_68[0];
          if (local_68[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_68[0] + 3);
            do {
              sVar14 = *psVar1;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar14 == 1) {
              piVar2 = (int *)((long)local_68[0] + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar7 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar7;
                local_38 = *puVar5;
                FUN_00c44438(lVar7 + 0x8040,&local_38);
              }
            }
            else if (sVar14 == 0) goto LAB_014a7f58;
          }
        }
        lVar7 = puVar11[1];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar14 == 0) goto LAB_014a7d28;
        if (local_48[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_48[0] + 3);
          do {
            sVar14 = *psVar1;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar14 == 1) {
            piVar2 = (int *)((long)local_48[0] + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar7 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar7;
              local_68[0] = (undefined8 *)*local_48[0];
              FUN_00c44438(lVar7 + 0x8040,local_68);
            }
          }
          else if (sVar14 == 0) goto LAB_014a7f58;
        }
        lVar12 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
          return;
        }
        if (sVar14 != 0) {
          return;
        }
LAB_014a7d28:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar7 = puVar11[1];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar14 == 0) goto LAB_014a7d28;
    }
    goto LAB_014a7dc0;
  }
  sVar14 = sVar3;
  if (sVar3 == 0) {
LAB_014a7dc0:
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_68[0] = (undefined8 *)*local_48[0];
          FUN_00c44438(lVar7 + 0x8040,local_68);
        }
      }
      else if (sVar14 == 0) {
LAB_014a7f58:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_014a7d00:
    lVar12 = *(long *)(lVar12 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar14 == 0) goto LAB_014a7d28;
    goto LAB_014a7c24;
  }
  goto LAB_014a7d8c;
}


