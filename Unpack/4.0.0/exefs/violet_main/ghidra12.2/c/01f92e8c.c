/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f92e8c; name: FUN_01f92e8c
 */


undefined1  [16] FUN_01f92e8c(long *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 extraout_d0;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  uint uVar18;
  undefined1 in_q3 [16];
  undefined8 local_60;
  ulong uStack_58;
  long *local_50;
  long *local_48;
  
  uVar18 = in_q3._8_4_;
  uVar17 = in_q3._0_8_;
  lVar13 = *param_1;
  local_60 = 0;
  uStack_58 = 0;
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar10 = *(short *)(lVar13 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar10) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01f92f00;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f92f00:
        bVar8 = false;
      }
      if (bVar8) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          if (**(char **)(param_2 + 8) == '\0') {
            FUN_00c9e664(0,&local_50,lVar13 + 0xc0);
            lVar12 = (**(code **)(*(long *)local_48[9] + 0x68))();
            uStack_58 = *(ulong *)(lVar12 + 0x38);
            local_60 = *(undefined8 *)(lVar12 + 0x30);
            if (local_48 != (long *)0x0) {
              plVar14 = local_48 + 5;
              do {
                iVar11 = (int)*plVar14;
                iVar9 = iVar11 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar8) {
                  *(int *)plVar14 = iVar9;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_01f9304c:
              if (iVar9 == 0) {
                (**(code **)(*local_48 + 0x10))();
              }
              else if (iVar11 == 0) {
LAB_01f93240:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
            goto LAB_01f93054;
          }
          plVar14 = *(long **)(lVar13 + 0xf8);
          if (plVar14 == (long *)0x0) {
            FUN_00c9e664(0,&local_50,lVar13 + 0xc0);
            lVar12 = (**(code **)(*(long *)local_48[9] + 0x68))();
            uStack_58 = *(ulong *)(lVar12 + 0x38);
            local_60 = *(undefined8 *)(lVar12 + 0x30);
            if (local_48 != (long *)0x0) {
              plVar14 = local_48 + 5;
              do {
                iVar11 = (int)*plVar14;
                iVar9 = iVar11 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar8) {
                  *(int *)plVar14 = iVar9;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              goto LAB_01f9304c;
            }
LAB_01f93054:
            if (local_50 != (long *)0x0) {
              (**(code **)(*local_50 + 0x60))();
            }
            uStack_58 = uStack_58 & 0xffffffff;
          }
          else {
            plVar2 = plVar14 + 5;
            do {
              lVar12 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = (int)lVar12 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar12 == -1) {
LAB_01f93268:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            if (((*PTR_DAT_047daf58 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047daf58), local_60 = extraout_d0, iVar11 != 0)
               ) {
              FUN_00100190(&LAB_02a24fe4,PTR_DAT_047daf60,&PTR_LOOP_04483000);
              local_60 = __cxa_guard_release(PTR_DAT_047daf58);
            }
            puVar5 = (undefined8 *)PTR_DAT_047daf60;
            if (plVar14[0x18] != 0) {
              puVar5 = (undefined8 *)(plVar14[0x18] + 0x70);
            }
            plVar15 = (long *)*puVar5;
            if (plVar15 == (long *)0x0) {
              FUN_00c9e664(local_60,&local_50,lVar13 + 0xc0);
              lVar12 = (**(code **)(*(long *)local_48[9] + 0x68))();
              uStack_58 = *(ulong *)(lVar12 + 0x38);
              local_60 = *(undefined8 *)(lVar12 + 0x30);
              if (local_48 != (long *)0x0) {
                plVar15 = local_48 + 5;
                do {
                  lVar12 = *plVar15;
                  iVar11 = (int)lVar12 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *(int *)plVar15 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  (**(code **)(*local_48 + 0x10))();
                }
                else if ((int)lVar12 == 0) goto LAB_01f93240;
              }
              if (local_50 != (long *)0x0) {
                (**(code **)(*local_50 + 0x60))();
              }
              uStack_58 = uStack_58 & 0xffffffff;
            }
            else {
              plVar3 = plVar15 + 5;
              do {
                lVar12 = *plVar3;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = (int)lVar12 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((int)lVar12 == -1) goto LAB_01f93268;
              sVar10 = FUN_00c8ea20(plVar15,param_2);
              if (sVar10 < 0) {
                FUN_00c9e664(&local_50,lVar13 + 0xc0);
                lVar12 = (**(code **)(*(long *)local_48[9] + 0x68))();
                uStack_58 = *(ulong *)(lVar12 + 0x38);
                local_60 = *(undefined8 *)(lVar12 + 0x30);
                if (local_48 != (long *)0x0) {
                  plVar4 = local_48 + 5;
                  do {
                    lVar12 = *plVar4;
                    iVar11 = (int)lVar12 + -1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar8) {
                      *(int *)plVar4 = iVar11;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar11 == 0) {
                    (**(code **)(*local_48 + 0x10))();
                  }
                  else if ((int)lVar12 == 0) goto LAB_01f93240;
                }
                if (local_50 != (long *)0x0) {
                  (**(code **)(*local_50 + 0x60))();
                }
                uStack_58 = uStack_58 & 0xffffffff;
              }
              else {
                FUN_00d2cffc(plVar15);
                uStack_58 = (ulong)uVar18;
                local_60 = uVar17;
              }
              do {
                lVar12 = *plVar3;
                iVar11 = (int)lVar12 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
              else if ((int)lVar12 == 0) goto LAB_01f93240;
            }
            do {
              lVar12 = *plVar2;
              iVar11 = (int)lVar12 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = iVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
            else if ((int)lVar12 == 0) goto LAB_01f93240;
          }
          (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))();
        }
        break;
      }
      sVar10 = sVar6;
    } while (sVar6 != 0);
  }
  auVar16._8_8_ = uStack_58;
  auVar16._0_8_ = local_60;
  return auVar16;
}


