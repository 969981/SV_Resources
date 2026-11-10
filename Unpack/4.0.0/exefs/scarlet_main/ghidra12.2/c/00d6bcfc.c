/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6bcfc; name: FUN_00d6bcfc
 */


void FUN_00d6bcfc(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if ((*(long *)(param_2 + 0x170) == 0) || (*(short *)(*(long *)(param_2 + 0x170) + 0x1a) == 0)) {
    plVar8 = (long *)FUN_00d63f6c();
    lVar9 = *plVar8;
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
          if (cVar4 != '\0') goto LAB_00d6bd9c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d6bd9c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 != 0) {
            plVar12 = (long *)(lVar9 + -0x28);
            plVar8 = (long *)FUN_015a8a54(plVar12);
            plVar8 = (long *)*plVar8;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x18))(local_58);
              local_68 = (undefined8 *)0x0;
              uStack_60 = 0;
              if ((long *)local_58[0][2] == plVar8 + 5) {
                FUN_01d579d8(&local_68,local_58);
              }
              puVar6 = local_58[0];
              if (local_58[0] != (undefined8 *)0x0) {
                psVar1 = (short *)(local_58[0] + 3);
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
                  piVar2 = (int *)((long)local_58[0] + 0x1c);
                  do {
                    iVar7 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
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
                    local_48 = *puVar6;
                    FUN_00c44438(lVar10 + 0x8040,&local_48);
                  }
                }
                else if (sVar11 == 0) goto LAB_00d6beac;
              }
              FUN_016ae5cc(param_2 + 0x170,&local_68);
              puVar6 = local_68;
              if (local_68 != (undefined8 *)0x0) {
                psVar1 = (short *)(local_68 + 3);
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
                  piVar2 = (int *)((long)local_68 + 0x1c);
                  do {
                    iVar7 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
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
                    local_58[0] = (undefined8 *)*puVar6;
                    FUN_00c44438(lVar10 + 0x8040,local_58);
                  }
                }
                else if (sVar11 == 0) {
LAB_00d6beac:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
            }
            lVar9 = *(long *)(lVar9 + 0x70);
            psVar1 = (short *)(lVar9 + 0x1a);
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
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))(plVar12);
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d6c024(param_1,param_2 + 0x170);
  return;
}


