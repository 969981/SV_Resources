/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01767ce4; name: FUN_01767ce4
 */


void FUN_01767ce4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01767d4c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01767d4c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        lVar10 = *(long *)(param_1 + 0x18);
        if (((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) &&
           (lVar10 = FUN_00ded3a0(lVar9 + 0xe0,&local_48), lVar10 != 0)) {
          local_48 = (undefined8 *)0x0;
          uStack_40 = 0;
          FUN_00c43ef0(&local_48,lVar10 + 0x98);
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          if (local_48[2] == lVar10 + 0x28) {
            FUN_00ded5e0(&local_58,&local_48);
          }
          puVar7 = local_48;
          if (local_48 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_48 + 3);
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
              piVar2 = (int *)((long)local_48 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_38 = *puVar7;
                FUN_00c44438(lVar10 + 0x8040,&local_38);
              }
            }
            else if (sVar11 == 0) goto LAB_01767f40;
          }
          FUN_00d95f1c((long *)(param_1 + 0x18),&local_58);
          puVar7 = local_58;
          if (local_58 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_58 + 3);
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
              piVar2 = (int *)((long)local_58 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_48 = (undefined8 *)*puVar7;
                FUN_00c44438(lVar10 + 0x8040,&local_48);
              }
            }
            else if (sVar11 == 0) goto LAB_01767f40;
          }
        }
        lVar10 = *(long *)(param_1 + 0x28);
        if (((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) &&
           (FUN_01f96ce0(&local_60,param_1), plVar6 = local_60, local_60 != (long *)0x0)) {
          local_48 = (undefined8 *)0x0;
          uStack_40 = 0;
          FUN_00c43ef0(&local_48,local_60 + 0x13);
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          if ((long *)local_48[2] == plVar6 + 5) {
            FUN_010c5cc0(&local_58,&local_48);
          }
          puVar7 = local_48;
          if (local_48 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_48 + 3);
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
              piVar2 = (int *)((long)local_48 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_38 = *puVar7;
                FUN_00c44438(lVar10 + 0x8040,&local_38);
              }
            }
            else if (sVar11 == 0) goto LAB_01767f40;
          }
          FUN_011307b8((long *)(param_1 + 0x28),&local_58);
          puVar7 = local_58;
          if (local_58 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_58 + 3);
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
              piVar2 = (int *)((long)local_58 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_48 = (undefined8 *)*puVar7;
                FUN_00c44438(lVar10 + 0x8040,&local_48);
              }
            }
            else if (sVar11 == 0) {
LAB_01767f40:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          if (local_60 != (long *)0x0) {
            lVar10 = local_60[0x13];
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
              (**(code **)(*local_60 + 0x50))();
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        return;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


