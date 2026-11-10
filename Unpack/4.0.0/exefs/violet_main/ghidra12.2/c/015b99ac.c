/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b99ac; name: FUN_015b99ac
 */


void FUN_015b99ac(long param_1)

{
  short *psVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined4 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  pcVar13 = *(char **)(param_1 + 0xd0);
  pcVar3 = *(char **)(param_1 + 0xd8);
  if (pcVar13 != pcVar3) {
    do {
      if (pcVar13[0x19] == '\0') {
        lVar15 = *(long *)(pcVar13 + 8);
        if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar15 + 0x1a);
          sVar16 = *(short *)(lVar15 + 0x1a);
          do {
            sVar5 = *psVar1;
            if (sVar5 == sVar16) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_015b9a88;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_015b9a88:
              bVar7 = false;
            }
            if (bVar7) {
              lVar15 = *(long *)(lVar15 + 0x10);
              if (lVar15 != 0) {
                uVar11 = (**(code **)(*(long *)(lVar15 + -0x28) + 0xd8))();
                if (((uVar11 & 1) != 0) && (pcVar13[0x19] = '\x01', *pcVar13 != '\0')) {
                  FUN_01ea9888(param_1,pcVar13);
                  local_78 = (undefined8 *)0x0;
                  uStack_70 = 0;
                  FUN_00ca1a48(&local_78,pcVar13 + 8);
                  bVar4 = pcVar13[0x18];
                  if (bVar4 < 4) {
                    uVar12 = *(undefined4 *)(&DAT_03cac010 + (long)(char)bVar4 * 4);
                  }
                  else {
                    uVar12 = 5;
                    if (9 < bVar4) {
                      if (bVar4 != 10) {
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl
                                  ("0","ToObjectType",
                                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mo/network_player_manager.cpp"
                                   ,0x97,"ObjectTemplateIndex %u");
                      }
                      uVar12 = 6;
                    }
                  }
                  FUN_01833968(pcVar13 + 2,&local_78,uVar12);
                  puVar9 = local_78;
                  if (local_78 != (undefined8 *)0x0) {
                    psVar1 = (short *)(local_78 + 3);
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
                        lVar14 = *(long *)PTR_DAT_047d3910;
                        *(long *)puVar8 = lVar14;
                        local_68 = *puVar9;
                        FUN_00c44438(lVar14 + 0x8040,&local_68);
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
                }
                lVar14 = *(long *)(lVar15 + 8);
                psVar1 = (short *)(lVar14 + 0x1a);
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
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
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
      }
      pcVar13 = pcVar13 + 0x20;
    } while (pcVar13 != pcVar3);
  }
  return;
}


