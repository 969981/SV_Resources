/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119f2f4; name: FUN_0119f2f4
 */


void FUN_0119f2f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  short sVar13;
  long *plVar14;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  long *local_40 [2];
  
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar13 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0119f364;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0119f364:
        bVar8 = false;
      }
      if (bVar8) {
        lVar11 = *(long *)(lVar11 + 0x10);
        plVar9 = (long *)(lVar11 + -0x28);
        if (lVar11 != 0) {
          lVar6 = FUN_0104cf4c(lVar11 + 0xe0,&local_60);
          if (lVar6 == 0) goto LAB_0119f428;
          plVar14 = (long *)*param_3;
          plVar12 = (long *)PTR_DAT_047d8b70;
          if (plVar14 != (long *)0x0) {
            plVar12 = plVar14 + 6;
          }
          local_60 = *plVar12;
          plVar12 = (long *)PTR_PTR_047d4508;
          if (plVar14 != (long *)0x0) {
            plVar12 = plVar14 + 7;
          }
          lStack_58 = *plVar12;
          if (plVar14 == (long *)0x0) {
            local_50 = 0;
          }
          else {
            local_50 = plVar14[8];
          }
          local_48 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          local_48 = plVar14;
          FUN_00f307f0(local_40,lVar6,&local_60);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (local_40[0] == (long *)0x0) goto LAB_0119f428;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_0119f504;
          if (local_40[0] == (long *)0x0) goto LAB_0119f428;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_0119f504;
          psVar1 = (short *)((long)local_40[0] + 0x1a);
          sVar13 = *(short *)((long)local_40[0] + 0x1a);
          goto LAB_0119f4d0;
        }
        break;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
LAB_0119f310:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0119f4d0:
  sVar3 = *psVar1;
  if (sVar3 == sVar13) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0119f4f4;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0119f4f4:
    bVar8 = false;
  }
  if (bVar8) {
    puVar10 = (undefined8 *)local_40[0][2];
    plVar12 = puVar10 + -5;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      uVar7 = FUN_01206218();
      if ((uVar7 & 1) != 0) {
        FUN_01205fec(param_1,plVar12);
        lVar6 = puVar10[1];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar13 == 0) goto LAB_0119f450;
        if (local_40[0] != (long *)0x0) {
          plVar12 = local_40[0] + 3;
          do {
            sVar13 = (short)*plVar12;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *(short *)plVar12 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            piVar2 = (int *)((long)local_40[0] + 0x1c);
            do {
              iVar5 = *piVar2;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
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
              lVar6 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar6;
              local_60 = *local_40[0];
              FUN_00c44438(lVar6 + 0x8040,&local_60);
            }
          }
          else if (sVar13 == 0) goto LAB_0119f640;
        }
        lVar11 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar13 != 0) {
          return;
        }
LAB_0119f450:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar6 = puVar10[1];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar13 == 0) goto LAB_0119f450;
    }
    goto LAB_0119f504;
  }
  sVar13 = sVar3;
  if (sVar3 == 0) {
LAB_0119f504:
    if (local_40[0] != (long *)0x0) {
      plVar12 = local_40[0] + 3;
      do {
        sVar13 = (short)*plVar12;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *(short *)plVar12 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_40[0] + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
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
          lVar6 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar6;
          local_60 = *local_40[0];
          FUN_00c44438(lVar6 + 0x8040,&local_60);
        }
      }
      else if (sVar13 == 0) {
LAB_0119f640:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_0119f428:
    lVar11 = *(long *)(lVar11 + 8);
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar13 == 0) goto LAB_0119f450;
    goto LAB_0119f310;
  }
  goto LAB_0119f4d0;
}


