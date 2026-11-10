/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d63ba4; name: FUN_00d63ba4
 */


long * FUN_00d63ba4(long param_1)

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
  long *plVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  plVar12 = (long *)(param_1 + 0xb0);
  if ((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) {
    plVar8 = (long *)FUN_00c73d48();
    if ((*plVar8 != 0) &&
       (((*(short *)(*plVar8 + 0x1a) != 0 && (lVar10 = *plVar8, lVar10 != 0)) &&
        (*(short *)(lVar10 + 0x1a) != 0)))) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d63c20;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d63c20:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return plVar12;
          }
          local_60 = (undefined8 *)&DAT_afc4d6c05abef19e;
          pcStack_58 = "default";
          plVar8 = (long *)(lVar10 + -0x28);
          local_50 = 7;
          local_48 = (long *)0x0;
          lVar9 = FUN_01132f14(plVar8,&local_60);
          if (lVar9 == 0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_011c6558(&local_68,lVar9,&local_78);
          }
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (local_68 != (long *)0x0) {
            plVar13 = local_68 + 5;
            (**(code **)(*local_68 + 0x18))(&local_60);
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            if ((long *)local_60[2] == plVar13) {
              FUN_00e14860(&local_78,&local_60);
            }
            puVar6 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_60 + 3);
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
                piVar2 = (int *)((long)local_60 + 0x1c);
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
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_28 = *puVar6;
                  FUN_00c44438(lVar9 + 0x8040,&local_28);
                }
              }
              else if (sVar11 == 0) goto LAB_00d63dc8;
            }
            FUN_0136345c(plVar12,&local_78);
            puVar6 = local_78;
            if (local_78 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_78 + 3);
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
                piVar2 = (int *)((long)local_78 + 0x1c);
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
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_60 = (undefined8 *)*puVar6;
                  FUN_00c44438(lVar9 + 0x8040,&local_60);
                }
              }
              else if (sVar11 == 0) {
LAB_00d63dc8:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (local_68 != (long *)0x0) {
              lVar9 = local_68[6];
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
                (**(code **)(*local_68 + 0x50))();
              }
              else if (sVar11 == 0) goto LAB_00d63d5c;
            }
          }
          lVar10 = *(long *)(lVar10 + 0x70);
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
            (**(code **)(*plVar8 + 0x50))(plVar8);
            return plVar12;
          }
          if (sVar11 != 0) {
            return plVar12;
          }
LAB_00d63d5c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return plVar12;
}


