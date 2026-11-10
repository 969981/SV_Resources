/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0aca4; name: FUN_01a0aca4
 */


void FUN_01a0aca4(long param_1)

{
  short *psVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  char *pcVar17;
  undefined8 *local_80;
  undefined8 uStack_78;
  char local_70 [2];
  undefined2 local_6e;
  undefined8 local_68;
  
  puVar10 = PTR_LAB_047d3de8;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  pcVar17 = *(char **)(param_1 + 0xd0);
  pcVar3 = *(char **)(param_1 + 0xd8);
  if (pcVar17 != pcVar3) {
    do {
      if ((*pcVar17 == '\0') && (FUN_01077654(local_70), local_70[0] != '\0')) {
        if (*pcVar17 == '\0') {
          *(undefined2 *)(pcVar17 + 2) = local_6e;
          *pcVar17 = '\x01';
        }
        else {
          *(undefined2 *)(pcVar17 + 2) = local_6e;
        }
        if (((pcVar17[0x19] != '\0') && (lVar14 = *(long *)(pcVar17 + 8), lVar14 != 0)) &&
           (*(short *)(lVar14 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar14 + 0x1a);
          sVar16 = *(short *)(lVar14 + 0x1a);
          do {
            sVar5 = *psVar1;
            if (sVar5 == sVar16) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_01a0adc0;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01a0adc0:
              bVar7 = false;
            }
            if (bVar7) {
              lVar14 = *(long *)(lVar14 + 0x10);
              if (lVar14 != 0) {
                local_80 = (undefined8 *)0x0;
                uStack_78 = 0;
                FUN_00ca1a48(&local_80);
                bVar4 = pcVar17[0x18];
                if (bVar4 < 4) {
                  uVar13 = *(undefined4 *)(&DAT_03cac010 + (long)(char)bVar4 * 4);
                }
                else {
                  uVar13 = 5;
                  if (9 < bVar4) {
                    if (bVar4 != 10) {
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl
                                ("0","ToObjectType",
                                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mo/network_player_manager.cpp"
                                 ,0x97,"ObjectTemplateIndex %u");
                    }
                    uVar13 = 6;
                  }
                }
                FUN_01833968((ulong)local_70 | 2,&local_80,uVar13);
                puVar11 = local_80;
                if (local_80 != (undefined8 *)0x0) {
                  psVar1 = (short *)(local_80 + 3);
                  do {
                    sVar16 = *psVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar16 == 1) {
                    piVar2 = (int *)((long)local_80 + 0x1c);
                    do {
                      iVar12 = *piVar2;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar7) {
                        *piVar2 = -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar12 != -1) {
                      if (((*puVar8 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                        FUN_00100190(puVar10,puVar9,&PTR_LOOP_04483000);
                        __cxa_guard_release(puVar8);
                      }
                      lVar15 = *(long *)puVar9;
                      *(long *)PTR_DAT_047d3918 = lVar15;
                      local_68 = *puVar11;
                      FUN_00c44438(lVar15 + 0x8040,&local_68);
                    }
                  }
                  else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
                FUN_01ea9888(param_1,pcVar17);
                lVar15 = *(long *)(lVar14 + 8);
                psVar1 = (short *)(lVar15 + 0x1a);
                do {
                  sVar16 = *psVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar7) {
                    *psVar1 = sVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar16 == 1) {
                  *(undefined8 *)(lVar15 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))((long *)(lVar14 + -0x28));
                }
                else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar16 = sVar5;
          } while (sVar5 != 0);
        }
        if (local_70[0] != '\0') {
          local_70[0] = '\0';
        }
      }
      pcVar17 = pcVar17 + 0x20;
    } while (pcVar17 != pcVar3);
  }
  return;
}


