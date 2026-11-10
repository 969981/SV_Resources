/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1d8f0; name: FUN_00e1d8f0
 */


void FUN_00e1d8f0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar7 = PTR_DAT_047d6548;
  if ((*param_2 != 0) && (puVar14 = *(undefined8 **)(*param_2 + 8), puVar14 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d6540 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6540), iVar10 != 0)) {
      uVar11 = FUN_019dae00();
      *(undefined8 *)puVar7 = uVar11;
      __cxa_guard_release(PTR_DAT_047d6540);
    }
    do {
      if (puVar14 == (undefined8 *)puVar7) {
        plVar1 = param_2 + 1;
        do {
          lVar13 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar7 = PTR_DAT_047d3908;
        } while (cVar5 != '\0');
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar9 = PTR_DAT_047d3918;
        puVar8 = PTR_DAT_047d3910;
        uVar11 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar11;
        FUN_00c44204(&local_50,uVar11,lVar13);
        puVar14 = (undefined8 *)*param_2;
        *param_2 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar14 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar14 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_48 = *puVar14;
              FUN_00c44438(lVar12 + 0x8040,&local_48);
            }
          }
          else if (sVar4 == 0) goto LAB_00e1da60;
        }
        puVar14 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (local_50 == (undefined8 *)0x0) {
          if (puVar14 != (undefined8 *)0x0) {
            psVar2 = (short *)(puVar14 + 3);
            do {
              sVar4 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              piVar3 = (int *)((long)puVar14 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*puVar7 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)puVar8;
                *(long *)puVar9 = lVar13;
                local_48 = *puVar14;
                FUN_00c44438(lVar13 + 0x8040,&local_48);
              }
            }
            else if (sVar4 == 0) goto LAB_00e1da60;
          }
          lVar13 = 0;
        }
        else {
          if (puVar14 != (undefined8 *)0x0) {
            psVar2 = (short *)(puVar14 + 3);
            do {
              sVar4 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              piVar3 = (int *)((long)puVar14 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*puVar7 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar8;
                *(long *)puVar9 = lVar12;
                local_48 = *puVar14;
                FUN_00c44438(lVar12 + 0x8040,&local_48);
              }
            }
            else if (sVar4 == 0) goto LAB_00e1da60;
          }
          puVar14 = local_50;
          local_50 = (undefined8 *)0x0;
          *param_1 = puVar14;
        }
        puVar14 = local_50;
        param_1[1] = lVar13;
        if (local_50 == (undefined8 *)0x0) {
          return;
        }
        psVar2 = (short *)(local_50 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_50 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 == -1) {
            return;
          }
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_48 = *puVar14;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
          return;
        }
        if (sVar4 != 0) {
          return;
        }
        goto LAB_00e1da60;
      }
      puVar14 = (undefined8 *)*puVar14;
    } while (puVar14 != (undefined8 *)0x0);
  }
  puVar14 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar14 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_00e1da60:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  param_1[1] = 0;
  return;
}


