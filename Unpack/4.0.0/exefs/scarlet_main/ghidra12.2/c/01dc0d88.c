/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc0d88; name: FUN_01dc0d88
 */


void FUN_01dc0d88(undefined1 param_1 [16],float param_2,long param_3,int param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,int param_9)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  int local_20c;
  long local_1f8;
  long *local_1e0;
  long *local_1d8;
  long *local_1d0;
  long *local_1c8;
  char *local_1c0;
  long local_1b8;
  long *local_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long *local_190;
  long local_188;
  long lStack_180;
  long local_178;
  long *local_170;
  long local_168;
  long lStack_160;
  long local_158;
  long *local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long *local_130;
  long local_128;
  long lStack_120;
  long local_118;
  long *local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  long *local_78;
  
  plVar21 = (long *)PTR_DAT_047d8b70;
  plVar22 = (long *)PTR_PTR_047d4508;
  if (param_4 == 2) {
    plVar18 = *(long **)(param_3 + 0x6b30);
    plVar20 = (long *)PTR_DAT_047d8b70;
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 6;
    }
    local_168 = *plVar20;
    plVar20 = (long *)PTR_PTR_047d4508;
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 7;
    }
    lStack_160 = *plVar20;
    if (plVar18 == (long *)0x0) {
      local_158 = 0;
    }
    else {
      local_158 = plVar18[8];
    }
    local_150 = (long *)0x0;
    if (plVar18 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar18 + 0x18))(plVar18);
      plVar20 = *(long **)(param_3 + 0x6b30);
    }
    plVar5 = plVar21;
    if (plVar20 != (long *)0x0) {
      plVar5 = plVar20 + 6;
    }
    local_188 = *plVar5;
    plVar5 = plVar22;
    if (plVar20 != (long *)0x0) {
      plVar5 = plVar20 + 7;
    }
    lStack_180 = *plVar5;
    if (plVar20 == (long *)0x0) {
      local_178 = 0;
    }
    else {
      local_178 = plVar20[8];
    }
    local_170 = (long *)0x0;
    local_150 = plVar18;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    plVar18 = *(long **)(param_3 + 0x6b38);
    if (plVar18 != (long *)0x0) {
      plVar22 = plVar18 + 7;
      plVar21 = plVar18 + 6;
    }
    local_1a8 = *plVar21;
    lStack_1a0 = *plVar22;
    if (plVar18 == (long *)0x0) {
      local_198 = 0;
    }
    else {
      local_198 = plVar18[8];
    }
    local_190 = (long *)0x0;
    local_170 = plVar20;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    local_190 = plVar18;
    fVar23 = (float)FUN_01dc1a58(param_3,&local_168,&local_188,&local_1a8);
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x20))();
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    local_1f8 = 0x68f8;
  }
  else {
    if (param_4 != 1) {
      if (param_4 != 0) {
        return;
      }
      plVar18 = *(long **)(param_3 + 0x6920);
      plVar20 = (long *)PTR_DAT_047d8b70;
      if (plVar18 != (long *)0x0) {
        plVar20 = plVar18 + 6;
      }
      local_a8 = *plVar20;
      plVar20 = (long *)PTR_PTR_047d4508;
      if (plVar18 != (long *)0x0) {
        plVar20 = plVar18 + 7;
      }
      lStack_a0 = *plVar20;
      if (plVar18 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar18[8];
      }
      local_90 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      plVar19 = *(long **)(param_3 + 0x6928);
      plVar20 = plVar22;
      plVar5 = plVar21;
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 7;
        plVar5 = plVar19 + 6;
      }
      local_c8 = *plVar5;
      lStack_c0 = *plVar20;
      if (plVar19 == (long *)0x0) {
        local_b8 = 0;
      }
      else {
        local_b8 = plVar19[8];
      }
      local_b0 = (long *)0x0;
      local_90 = plVar18;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar20 = *(long **)(param_3 + 0x6950);
      if (plVar20 != (long *)0x0) {
        plVar22 = plVar20 + 7;
        plVar21 = plVar20 + 6;
      }
      local_e8 = *plVar21;
      lStack_e0 = *plVar22;
      if (plVar20 == (long *)0x0) {
        local_d8 = 0;
      }
      else {
        local_d8 = plVar20[8];
      }
      local_d0 = (long *)0x0;
      local_b0 = plVar19;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      local_d0 = plVar20;
      fVar23 = (float)FUN_01dc1a58(param_3,&local_a8,&local_c8,&local_e8);
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      local_1f8 = param_3 + 0x68bc;
      uVar15 = 0;
      if (param_6 < 7) {
        uVar15 = param_6;
      }
      uVar17 = 6 - uVar15;
      if (uVar15 + param_8 < 7) {
        uVar17 = param_8;
      }
      uVar16 = 0;
      if (param_7 < 6) {
        uVar16 = param_7;
      }
      iVar14 = 5 - uVar16;
      bVar1 = 5 < uVar16 + param_9;
      goto LAB_01dc112c;
    }
    plVar18 = *(long **)(param_3 + 0x6b00);
    plVar20 = (long *)PTR_DAT_047d8b70;
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 6;
    }
    local_108 = *plVar20;
    plVar20 = (long *)PTR_PTR_047d4508;
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 7;
    }
    lStack_100 = *plVar20;
    if (plVar18 == (long *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = plVar18[8];
    }
    local_f0 = (long *)0x0;
    if (plVar18 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar18 + 0x18))(plVar18);
      plVar20 = *(long **)(param_3 + 0x6b00);
    }
    plVar5 = plVar21;
    if (plVar20 != (long *)0x0) {
      plVar5 = plVar20 + 6;
    }
    local_128 = *plVar5;
    plVar5 = plVar22;
    if (plVar20 != (long *)0x0) {
      plVar5 = plVar20 + 7;
    }
    lStack_120 = *plVar5;
    if (plVar20 == (long *)0x0) {
      local_118 = 0;
    }
    else {
      local_118 = plVar20[8];
    }
    local_110 = (long *)0x0;
    local_f0 = plVar18;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    plVar18 = *(long **)(param_3 + 0x6b08);
    if (plVar18 != (long *)0x0) {
      plVar22 = plVar18 + 7;
      plVar21 = plVar18 + 6;
    }
    local_148 = *plVar21;
    lStack_140 = *plVar22;
    if (plVar18 == (long *)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = plVar18[8];
    }
    local_130 = (long *)0x0;
    local_110 = plVar20;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    local_130 = plVar18;
    fVar23 = (float)FUN_01dc1a58(param_3,&local_108,&local_128,&local_148);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    local_1f8 = 0x68b0;
  }
  uVar15 = 0;
  local_1f8 = param_3 + local_1f8;
  uVar16 = 0;
  if (param_7 < 7) {
    uVar16 = param_7;
  }
  iVar14 = 6 - uVar16;
  bVar1 = 6 < uVar16 + param_9;
  uVar17 = 1;
LAB_01dc112c:
  if (!bVar1) {
    iVar14 = param_9;
  }
  puVar3 = (uint *)(param_3 + 0x6904);
  *(int *)(param_3 + 0x6c38) = param_4;
  local_20c = iVar14 + -1;
  *puVar3 = 0;
  *(uint *)(param_3 + 0x6c3c) =
       iVar14 << 0x1a | (uVar17 & 0x3f) << 0x14 | (uVar16 & 0x3f) << 0xe |
       param_5 & 0xff | (uVar15 & 0x3f) << 8;
  if (-1 < local_20c) {
    do {
      if (-1 < (int)(uVar17 - 1)) {
        iVar14 = uVar17 - 1;
        do {
          uVar2 = iVar14 + local_20c * uVar17;
          plVar22 = *(long **)(param_3 + 0x6cd0);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x58))(plVar22);
          }
          pbVar4 = (byte *)(param_3 + (ulong)uVar2 + 0x68da);
          plVar21 = *(long **)(param_3 + (ulong)*pbVar4 * 0x98 + 0x30);
          local_1c8 = (long *)PTR_DAT_047d8b70;
          if (plVar21 != (long *)0x0) {
            local_1c8 = plVar21 + 6;
          }
          local_1c8 = (long *)*local_1c8;
          plVar20 = (long *)PTR_PTR_047d4508;
          if (plVar21 != (long *)0x0) {
            plVar20 = plVar21 + 7;
          }
          local_1c0 = (char *)*plVar20;
          if (plVar21 == (long *)0x0) {
            local_1b8 = 0;
          }
          else {
            local_1b8 = plVar21[8];
            local_1b0 = (long *)0x0;
            (**(code **)(*plVar21 + 0x18))(plVar21);
          }
          local_1b0 = plVar21;
          if (plVar22 == (long *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar10 = FUN_00c8c7b4(plVar22[0x2e],&local_1c8);
          }
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x60))(plVar22);
          }
          if (lVar10 != 0) {
            iVar8 = FUN_01dc1b60(param_4,iVar14 + uVar15,local_20c + uVar16);
            plVar22 = *(long **)(param_3 + 0x6cd0);
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x58))(plVar22);
            }
            plVar21 = *(long **)(param_3 + (ulong)*(byte *)(local_1f8 + iVar8) * 0x98 + 0x30);
            local_1c8 = (long *)PTR_DAT_047d8b70;
            if (plVar21 != (long *)0x0) {
              local_1c8 = plVar21 + 6;
            }
            local_1c8 = (long *)*local_1c8;
            plVar20 = (long *)PTR_PTR_047d4508;
            if (plVar21 != (long *)0x0) {
              plVar20 = plVar21 + 7;
            }
            local_1c0 = (char *)*plVar20;
            if (plVar21 == (long *)0x0) {
              local_1b8 = 0;
            }
            else {
              local_1b8 = plVar21[8];
              local_1b0 = (long *)0x0;
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            local_1b0 = plVar21;
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x58))(plVar22);
              lVar11 = FUN_00c8c7b4(plVar22[0x2e],&local_1c8);
              (**(code **)(*plVar22 + 0x60))(plVar22);
              if (lVar11 != 0) {
                *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
              }
            }
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))(plVar21);
            }
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x60))(plVar22);
            }
            FUN_01dc0268(&local_1c8);
            plVar22 = (long *)thunk_FUN_010f26f8(local_1c8,param_4,param_5,iVar8);
            FUN_0149c1c0(&local_1c8);
            if (plVar22 != (long *)0x0) {
              plVar21 = *(long **)(param_3 + 0x6cd0);
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x58))(plVar21);
              }
              plVar20 = *(long **)(param_3 + (ulong)*pbVar4 * 0x98 + 0x30);
              local_1c8 = (long *)PTR_DAT_047d8b70;
              if (plVar20 != (long *)0x0) {
                local_1c8 = plVar20 + 6;
              }
              local_1c8 = (long *)*local_1c8;
              plVar18 = (long *)PTR_PTR_047d4508;
              if (plVar20 != (long *)0x0) {
                plVar18 = plVar20 + 7;
              }
              local_1c0 = (char *)*plVar18;
              if (plVar20 == (long *)0x0) {
                local_1b8 = 0;
              }
              else {
                local_1b8 = plVar20[8];
                local_1b0 = (long *)0x0;
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
              local_1b0 = plVar20;
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x58))(plVar21);
                lVar11 = FUN_00c8c7b4(plVar21[0x2e],&local_1c8);
                (**(code **)(*plVar21 + 0x60))(plVar21);
                if (lVar11 != 0) {
                  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
                }
              }
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x60))(plVar21);
              }
              plVar21 = plVar22 + 5;
              do {
                lVar11 = *plVar21;
                cVar7 = '\x01';
                bVar1 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar1) {
                  *(int *)plVar21 = (int)lVar11 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              local_78 = plVar22;
              if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              pcVar12 = (char *)FUN_013f728c(&local_78);
              if (local_78 != (long *)0x0) {
                plVar22 = local_78 + 5;
                do {
                  lVar11 = *plVar22;
                  iVar9 = (int)lVar11 + -1;
                  cVar7 = '\x01';
                  bVar1 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar1) {
                    *(int *)plVar22 = iVar9;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar9 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
                else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint32_t>::max()",
                             "DecrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                             ,0x58,"Reference counter underflows.");
                }
              }
              bVar6 = *pbVar4;
              local_1d0 = (long *)0x0;
              if (*pcVar12 == '\0') {
                plVar22 = (long *)FUN_00d44228();
                if (plVar22 != (long *)0x0) {
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                }
                if (local_1d0 != (long *)0x0) {
                  lVar11 = *local_1d0;
                  local_1d0 = plVar22;
                  (**(code **)(lVar11 + 0x20))();
                  plVar22 = local_1d0;
                }
              }
              else {
                if (((*PTR_DAT_047d4240 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d4240);
                }
                uVar13 = *(undefined8 *)PTR_DAT_047d4248;
                *(undefined8 *)PTR_DAT_047d4250 = uVar13;
                FUN_00cf9884(&local_1c8,uVar13,pcVar12);
                plVar22 = local_1d0;
                local_1d0 = (long *)0x0;
                if (plVar22 != (long *)0x0) {
                  (**(code **)(*plVar22 + 0x20))();
                }
                local_1d0 = local_1c8;
                plVar22 = local_1d0;
              }
              local_1d0 = plVar22;
              FUN_01dc1b80(bVar6,&local_1d0);
              if (local_1d0 != (long *)0x0) {
                (**(code **)(*local_1d0 + 0x20))();
              }
              bVar6 = *pbVar4;
              local_1d8 = (long *)0x0;
              if (*pcVar12 == '\0') {
                plVar22 = (long *)FUN_00d44228();
                if (plVar22 != (long *)0x0) {
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                }
                if (local_1d8 != (long *)0x0) {
                  lVar11 = *local_1d8;
                  local_1d8 = plVar22;
                  (**(code **)(lVar11 + 0x20))();
                  plVar22 = local_1d8;
                }
              }
              else {
                if (((*PTR_DAT_047d4240 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d4240);
                }
                uVar13 = *(undefined8 *)PTR_DAT_047d4248;
                *(undefined8 *)PTR_DAT_047d4250 = uVar13;
                FUN_00cf9884(&local_1c8,uVar13,pcVar12);
                plVar22 = local_1d8;
                local_1d8 = (long *)0x0;
                if (plVar22 != (long *)0x0) {
                  (**(code **)(*plVar22 + 0x20))();
                }
                local_1d8 = local_1c8;
                plVar22 = local_1d8;
              }
              local_1d8 = plVar22;
              FUN_01dc1b80(bVar6 + 0x1e,&local_1d8);
              if (local_1d8 != (long *)0x0) {
                (**(code **)(*local_1d8 + 0x20))();
              }
              lVar11 = FUN_01dc1c4c(lVar10);
              if (lVar11 != 0) {
                FUN_01dc1c58(lVar11,lVar10);
              }
              local_1e0 = *(long **)(param_3 + 0x6cd0);
              if (local_1e0 != (long *)0x0) {
                (**(code **)(*local_1e0 + 0x58))();
              }
              local_1b0 = (long *)0x0;
              local_1c8 = (long *)0xa73aa1e8d11550c6;
              local_1c0 = "N_cursor_poke_pos_00";
              local_1b8 = 0x14;
              FUN_01dc1c68(&local_1e0,&local_1c8,lVar10);
              if (local_1b0 != (long *)0x0) {
                (**(code **)(*local_1b0 + 0x20))();
              }
              if (local_1e0 != (long *)0x0) {
                (**(code **)(*local_1e0 + 0x60))();
              }
              bVar6 = *(byte *)(lVar10 + 0x58);
              *(undefined4 *)(lVar10 + 0x38) = 0;
              *(byte *)(lVar10 + 0x58) = bVar6 | 0x10;
              *(float *)(lVar10 + 0x30) = fVar23 * (float)iVar14;
              *(float *)(lVar10 + 0x34) = param_2 * (float)local_20c;
              if ((bVar6 & 1) != 0) {
                *puVar3 = *puVar3 | 1 << (ulong)(uVar2 & 0x1f);
              }
              FUN_014e5cb0(param_3,param_4,iVar8,1);
            }
          }
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
      local_20c = local_20c + -1;
    } while (-1 < local_20c);
  }
  return;
}


