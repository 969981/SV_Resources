/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc624; name: FUN_01dcc624
 */


void FUN_01dcc624(long param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long local_118;
  undefined8 local_110 [3];
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  local_88 = (undefined1 *)0x826787f65639bc5f;
  pcStack_80 = "L_top_head_00";
  local_78 = 0xd;
  local_70 = (long *)0x0;
  lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_88);
  *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uVar14 = FUN_01870d18(&local_98,param_1 + 0xa8);
  FUN_01870b64(uVar14,&local_98,0);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_98 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_88 = (undefined1 *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (*(int *)(param_1 + 0x284) == 3) {
    *(undefined4 *)(param_1 + 0x171c) = 1;
    uVar14 = FUN_01dccf78(*(undefined8 *)(param_1 + 8));
    FUN_01dcd0a0(local_110,uVar14);
    local_88 = *(undefined1 **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    FUN_01993214(&local_88);
    uVar14 = local_110[0];
    local_110[0] = 0;
    *(undefined8 *)(param_1 + 0x1c8) = uVar14;
    FUN_01993214(local_110);
    local_88 = (undefined1 *)0x5e9f6925ef3bd2e5;
    pcStack_80 = "N_poke_change_00";
    local_78 = 0x10;
    local_70 = (long *)0x0;
    lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_88);
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
    local_88 = (undefined1 *)0xc0af4d0f05d27bab;
    pcStack_80 = "N_change_00";
    local_78 = 0xb;
    local_70 = (long *)0x0;
    lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_88);
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
    local_b8 = 0x308f9083268a97a0;
    pcStack_b0 = "T_trdplayer_00";
    local_a8 = 0xe;
    local_a0 = (long *)0x0;
    local_c8 = 3;
    uStack_c0 = 0;
    local_f8 = 0x69bb3bcd1460e220;
    pcStack_f0 = "msg_ui_box_trdplayer_00";
    local_d8 = &DAT_e6b50e272d8cd992;
    puStack_d0 = &DAT_03c3b7e8;
    local_e8 = 0x17;
    local_e0 = (long *)0x0;
    FUN_014a9284(param_1,&local_b8,&local_d8,&local_f8);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    FUN_011722d4(local_110,1);
    uVar15 = FUN_019c7a40(local_110);
    if ((uVar15 & 1) != 0) {
      lVar13 = FUN_019965ec(local_110);
      uVar10 = FUN_01419468(local_110);
      local_88 = *(undefined1 **)(param_1 + 8);
      plVar16 = (long *)FUN_01409590(&local_118,local_88,&local_88);
      if (plVar16 != (long *)0x0) {
        lVar23 = plVar16[6];
        if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
          *(undefined8 *)(lVar23 + 8) = uVar14;
          *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) {
          pcVar17 = "count != 0";
          pcVar18 = "AddReference";
          pcVar19 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
          pcVar20 = "Reference counter overflows.";
LAB_01dccdc0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar17,pcVar18,pcVar19,0x58,pcVar20);
        }
      }
      if ((uVar10 & 0xffff) != 0) {
        uVar22 = 0;
        do {
          local_118 = FUN_01dcd15c(local_110,uVar22);
          if ((local_118 != lVar13) && (lVar23 = FUN_017691a4(&local_118), lVar23 != 0)) {
            FUN_01920084(&local_120);
            uVar11 = FUN_0194ef24(lVar23);
            uVar9 = FUN_0194f034(lVar23);
            if (local_120 != (long *)0x0) {
              local_128 = local_120;
              plVar2 = local_120 + 5;
              do {
                lVar23 = *plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = (int)lVar23 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((int)lVar23 == -1) goto LAB_01dccde8;
              FUN_011b86d8(plVar16,0,&local_128,uVar11,uVar9);
              if (local_128 != (long *)0x0) {
                plVar2 = local_128 + 5;
                do {
                  lVar23 = *plVar2;
                  iVar12 = (int)lVar23 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *(int *)plVar2 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar12 == 0) {
                  (**(code **)(*local_128 + 0x10))();
                  goto LAB_01dcc93c;
                }
                if ((int)lVar23 != 0) goto LAB_01dcc93c;
LAB_01dccda0:
                pcVar17 = "count != std::numeric_limits<uint32_t>::max()";
                pcVar18 = "DecrementReferenceInternal";
                pcVar19 = 
                "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                ;
                pcVar20 = "Reference counter underflows.";
                goto LAB_01dccdc0;
              }
LAB_01dcc93c:
              if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d8ac0);
              }
              uVar14 = *(undefined8 *)PTR_DAT_047d8ac8;
              local_88 = &DAT_e6b50e272d8cd992;
              pcStack_80 = "box";
              *(undefined8 *)PTR_DAT_047d8ad0 = uVar14;
              local_78 = 3;
              local_70 = (long *)0x0;
              local_138 = 0x69bb3ccd1460e3d3;
              FUN_00f1203c(&local_130,uVar14,&local_88,&local_138,0);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              plVar2 = local_130;
              local_158 = 0x536f7461542f7ed4;
              pcStack_150 = "T_trdplayer_name_00";
              local_148 = 0x13;
              local_140 = (long *)0x0;
              if (local_130 != (long *)0x0) {
                plVar21 = local_130 + 5;
                do {
                  lVar23 = *plVar21;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar7) {
                    *(int *)plVar21 = (int)lVar23 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((int)lVar23 == -1) goto LAB_01dccde8;
              }
              lVar23 = plVar16[0x23];
              *(undefined4 *)((long)plVar16 + 0xcc) = 0;
              *(undefined2 *)(plVar16 + 0x1a) = 0;
              *(undefined4 *)((long)plVar16 + 0xd4) = 0;
              *(undefined4 *)((long)plVar16 + 0xdc) = 0;
              FUN_0109c76c(plVar16,local_130);
              if (*(char *)(lVar23 + 0x54) != '\0') {
                **(undefined2 **)(lVar23 + 0x30) = 0;
                *(undefined2 *)(lVar23 + 0x52) = 0;
              }
              FUN_0109c334(plVar16,lVar23,plVar2,0,0);
              plVar21 = (long *)plVar16[0x23];
              local_160 = plVar21;
              if (plVar21 == (long *)0x0) {
                FUN_014e4b9c(param_1,&local_158,&local_160);
              }
              else {
                plVar3 = plVar21 + 5;
                do {
                  lVar23 = *plVar3;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar7) {
                    *(int *)plVar3 = (int)lVar23 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((int)lVar23 == -1) {
LAB_01dccde8:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","IncrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                             ,0x53,"Reference counter overflows.");
                }
                FUN_014e4b9c(param_1,&local_158,&local_160);
                if (plVar21 != (long *)0x0) {
                  plVar3 = plVar21 + 5;
                  do {
                    lVar23 = *plVar3;
                    iVar12 = (int)lVar23 + -1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar7) {
                      *(int *)plVar3 = iVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar12 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                  else if ((int)lVar23 == 0) goto LAB_01dccda0;
                }
              }
              plVar21 = plVar2 + 5;
              do {
                lVar23 = *plVar21;
                iVar12 = (int)lVar23 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar7) {
                  *(int *)plVar21 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
              else if ((int)lVar23 == 0) goto LAB_01dccda0;
              if (local_140 != (long *)0x0) {
                (**(code **)(*local_140 + 0x20))();
              }
              if (local_130 != (long *)0x0) {
                plVar2 = local_130 + 5;
                do {
                  lVar23 = *plVar2;
                  iVar12 = (int)lVar23 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *(int *)plVar2 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar12 == 0) {
                  (**(code **)(*local_130 + 0x10))();
                }
                else if ((int)lVar23 == 0) goto LAB_01dccda0;
              }
              if (local_120 != (long *)0x0) {
                plVar2 = local_120 + 5;
                do {
                  lVar23 = *plVar2;
                  iVar12 = (int)lVar23 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *(int *)plVar2 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar12 == 0) {
                  (**(code **)(*local_120 + 0x10))();
                }
                else if ((int)lVar23 == 0) goto LAB_01dccda0;
              }
            }
          }
          uVar22 = uVar22 + 1;
        } while ((uVar22 & 0xffff) < (uVar10 & 0xffff));
      }
      if (plVar16 != (long *)0x0) {
        lVar13 = plVar16[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    FUN_00d8e444(local_110);
  }
  return;
}


