/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2e4fc; name: FUN_01a2e4fc
 */


long FUN_01a2e4fc(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  lVar1 = param_1 + 0x140;
  if ((*(long *)(param_1 + 0x140) == 0) || (*(short *)(*(long *)(param_1 + 0x140) + 0x1a) == 0)) {
    plVar10 = (long *)FUN_00c73d48();
    if ((*plVar10 != 0) &&
       (((*(short *)(*plVar10 + 0x1a) != 0 && (lVar12 = *plVar10, lVar12 != 0)) &&
        (*(short *)(lVar12 + 0x1a) != 0)))) {
      psVar2 = (short *)(lVar12 + 0x1a);
      sVar13 = *(short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01a2e5a4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a2e5a4:
          bVar6 = false;
        }
        if (bVar6) {
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) {
            return lVar1;
          }
          local_60 = (undefined8 *)&DAT_afc4d6c05abef19e;
          pcStack_58 = "default";
          plVar10 = (long *)(lVar12 + -0x28);
          local_50 = 7;
          local_48 = (long *)0x0;
          lVar11 = FUN_01132f14(plVar10,&local_60);
          if (lVar11 == 0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_00f422c8(&local_68,lVar11,&local_78);
          }
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          plVar8 = local_68;
          if (local_68 != (long *)0x0) {
            local_60 = (undefined8 *)0x0;
            pcStack_58 = (char *)0x0;
            FUN_00c43ef0(&local_60,local_68 + 6);
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            if ((long *)local_60[2] == plVar8 + 5) {
              FUN_01e14ab0(&local_78,&local_60);
            }
            puVar7 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_60 + 3);
              do {
                sVar13 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar13 == 1) {
                piVar3 = (int *)((long)local_60 + 0x1c);
                do {
                  iVar9 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_28 = *puVar7;
                  FUN_00c44438(lVar11 + 0x8040,&local_28);
                }
              }
              else if (sVar13 == 0) goto LAB_01a2e720;
            }
            FUN_015b4c34(lVar1,&local_78);
            puVar7 = local_78;
            if (local_78 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_78 + 3);
              do {
                sVar13 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar13 == 1) {
                piVar3 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar9 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_60 = (undefined8 *)*puVar7;
                  FUN_00c44438(lVar11 + 0x8040,&local_60);
                }
              }
              else if (sVar13 == 0) {
LAB_01a2e720:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (local_68 != (long *)0x0) {
              lVar11 = local_68[6];
              psVar2 = (short *)(lVar11 + 0x1a);
              do {
                sVar13 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar13 == 1) {
                *(undefined8 *)(lVar11 + 0x10) = 0;
                (**(code **)(*local_68 + 0x50))();
              }
              else if (sVar13 == 0) goto LAB_01a2e6b4;
            }
          }
          lVar12 = *(long *)(lVar12 + 0x70);
          psVar2 = (short *)(lVar12 + 0x1a);
          do {
            sVar13 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
            return lVar1;
          }
          if (sVar13 != 0) {
            return lVar1;
          }
LAB_01a2e6b4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return lVar1;
}


