/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01172cf0; name: FUN_01172cf0
 */


void FUN_01172cf0(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  short sVar17;
  long *plVar18;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  lVar3 = *(long *)(param_1 + 0x100);
  lVar4 = *(long *)(param_1 + 0x108);
  do {
    if (lVar3 == lVar4) {
      return;
    }
    if (*(char *)(lVar3 + 0x40) == '\0') {
      plVar18 = (long *)(lVar3 + 8);
      lVar16 = *plVar18;
      if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar16 + 0x1a);
        sVar17 = *(short *)(lVar16 + 0x1a);
LAB_01172d80:
        sVar5 = *psVar1;
        if (sVar5 == sVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01172dbc;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01172dbc:
          bVar7 = false;
        }
        if (!bVar7) break;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          uVar11 = (**(code **)(*(long *)(lVar16 + -0x28) + 0xd8))();
          if ((uVar11 & 1) != 0) {
            *(undefined1 *)(lVar3 + 0x40) = 1;
            lVar12 = FUN_01eadd4c(*(undefined8 *)(param_1 + 8),plVar18);
            if (lVar12 != 0) {
              FUN_01837a80(lVar12);
            }
            plVar13 = *(long **)(lVar3 + 0x18);
            *(undefined8 *)(lVar3 + 0x18) = 0;
            if (plVar13 != (long *)0x0) {
              lVar15 = plVar13[6];
              psVar1 = (short *)(lVar15 + 0x1a);
              do {
                sVar17 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar17 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))();
              }
              else if (sVar17 == 0) goto LAB_01172f50;
            }
            *(long *)(lVar3 + 0x18) = lVar12;
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            FUN_00ca1a48(&local_78,plVar18);
            uVar14 = 3;
            if (*(int *)(lVar3 + 0x20) != 1) {
              uVar14 = 4;
            }
            FUN_015bb800(lVar3,&local_78,uVar14);
            puVar9 = local_78;
            if (local_78 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_78 + 3);
              do {
                sVar17 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar17 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar17 == 1) {
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar10 = *piVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar8 = lVar12;
                  local_68 = *puVar9;
                  FUN_00c44438(lVar12 + 0x8040,&local_68);
                }
              }
              else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (*(long *)(lVar3 + 0x18) != 0) {
              FUN_01837b34(*(long *)(lVar3 + 0x18),0);
            }
          }
          lVar12 = *(long *)(lVar16 + 8);
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar17 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar17 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
          }
          else if (sVar17 == 0) {
LAB_01172f50:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
LAB_01172d60:
    lVar3 = lVar3 + 0x48;
  } while( true );
  sVar17 = sVar5;
  if (sVar5 == 0) goto LAB_01172d60;
  goto LAB_01172d80;
}


