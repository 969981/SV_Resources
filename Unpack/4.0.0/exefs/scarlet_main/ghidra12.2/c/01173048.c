/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01173048; name: FUN_01173048
 */


void FUN_01173048(long param_1)

{
  short *psVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
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
  long *plVar19;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  pcVar3 = *(char **)(param_1 + 200);
  pcVar4 = *(char **)(param_1 + 0xd0);
  do {
    if (pcVar3 == pcVar4) {
      return;
    }
    if (pcVar3[0x60] == '\0') {
      plVar18 = (long *)(pcVar3 + 8);
      lVar16 = *plVar18;
      if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar16 + 0x1a);
        sVar17 = *(short *)(lVar16 + 0x1a);
LAB_011730dc:
        sVar5 = *psVar1;
        if (sVar5 == sVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01173114;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01173114:
          bVar7 = false;
        }
        if (!bVar7) break;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          plVar19 = (long *)(lVar16 + -0x28);
          uVar11 = (**(code **)(*plVar19 + 0xd8))(plVar19);
          if ((uVar11 & 1) != 0) {
            pcVar3[0x60] = '\x01';
            lVar12 = FUN_01eadd4c(*(undefined8 *)(param_1 + 8),plVar18);
            if (lVar12 != 0) {
              FUN_01837a80(lVar12);
            }
            plVar13 = *(long **)(pcVar3 + 0x18);
            pcVar3[0x18] = '\0';
            pcVar3[0x19] = '\0';
            pcVar3[0x1a] = '\0';
            pcVar3[0x1b] = '\0';
            pcVar3[0x1c] = '\0';
            pcVar3[0x1d] = '\0';
            pcVar3[0x1e] = '\0';
            pcVar3[0x1f] = '\0';
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
              else if (sVar17 == 0) goto LAB_011732c8;
            }
            *(long *)(pcVar3 + 0x18) = lVar12;
            if (*pcVar3 != '\0') {
              FUN_01eaba98(param_1,pcVar3);
              local_78 = (undefined8 *)0x0;
              uStack_70 = 0;
              FUN_00ca1a48(&local_78,plVar18);
              uVar14 = 3;
              if (*(int *)(pcVar3 + 0x40) != 1) {
                uVar14 = 4;
              }
              FUN_01833968(pcVar3 + 2,&local_78,uVar14);
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
              if (*(long *)(pcVar3 + 0x18) != 0) {
                FUN_01837b34(*(long *)(pcVar3 + 0x18),1);
              }
            }
          }
          lVar16 = *(long *)(lVar16 + 8);
          psVar1 = (short *)(lVar16 + 0x1a);
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
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*plVar19 + 0x50))(plVar19);
          }
          else if (sVar17 == 0) {
LAB_011732c8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
LAB_011730b8:
    pcVar3 = pcVar3 + 0x68;
  } while( true );
  sVar17 = sVar5;
  if (sVar5 == 0) goto LAB_011730b8;
  goto LAB_011730dc;
}


