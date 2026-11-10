/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e3a90; name: FUN_005e3a90
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005e3a90(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 local_240 [2];
  ulong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  long *plStack_220;
  char local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  long local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined2 local_1cc [2];
  undefined8 local_1c8;
  long *local_1c0;
  byte *local_1b8;
  long *local_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined8 *******local_198;
  undefined8 *******local_190;
  long *plStack_188;
  char local_180 [8];
  undefined1 auStack_178 [8];
  undefined8 local_170;
  undefined1 auStack_158 [24];
  undefined **local_140;
  long local_138;
  undefined8 local_120;
  long *local_118;
  undefined4 local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined8 *******local_c8;
  undefined8 *******pppppppuStack_c0;
  undefined1 auStack_b0 [64];
  undefined **local_70;
  undefined8 uStack_68;
  
  lVar17 = *(long *)(param_1 + 0x100);
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = (long *)FUN_01cf7e20();
                    /* try { // try from 005e3ac4 to 005e3acf has its CatchHandler @ 005e44ac */
  FUN_00601218(&local_120,0);
  FUN_00213500(&local_1a8);
  pppppppuVar4 = (undefined8 *******)((ulong)&local_1a8 | 1);
  if (((ulong)local_1a8 & 1) != 0) {
    pppppppuVar4 = local_198;
  }
                    /* try { // try from 005e3af0 to 005e3af7 has its CatchHandler @ 005e43c8 */
  FUN_005e4590(&local_120,pppppppuVar4);
  if (((ulong)local_1a8 & 1) != 0) {
    (**(code **)((long)*local_190 + 0x18))
              (local_190,local_198,(ulong)local_1a8 & 0xfffffffffffffffe,1);
  }
  local_100 = (undefined4)*(undefined8 *)(param_1 + 0xd8);
  local_1c8 = 0;
  local_1c0 = (long *)0x0;
  FUN_005e4964(&local_1b8,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8),&local_120,&local_1c8);
  ppuVar1 = (undefined **)(PTR_DAT_047cbb30 + 0x10);
  local_c8 = &local_c8;
  local_d0 = PTR_DAT_047cbb38 + 0x10;
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_d8 = ppuVar1;
  pppppppuStack_c0 = local_c8;
  (**(code **)(*(long *)local_1b8 + 0x10))(local_1b8,auStack_b0);
  local_70 = &local_d0;
  thunk_FUN_006c4e40(&local_d8);
  local_d8 = ppuVar1;
  FUN_006c4274(&local_d0);
  plVar19 = local_1b0;
  pbVar14 = local_1b8;
  local_1b8 = (byte *)0x0;
  local_1b0 = (long *)0x0;
  (**(code **)(*(long *)pbVar14 + 0x30))(&local_1a8);
  if (plVar19 != (long *)0x0) {
    plVar2 = plVar19 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar19 = local_1b0 + 1;
    do {
      lVar13 = *plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1c0 != (long *)0x0) {
    plVar19 = local_1c0 + 1;
    do {
      lVar13 = *plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_1c0 + 0x10))(local_1c0);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x005e3dfc;
    }
  }
joined_r0x005e3dfc:
  if ((int)local_1a8 == 0) {
    plVar19 = (long *)0x0;
    if (local_138 != 0) {
      plVar19 = (long *)(local_138 + 8);
    }
    if ((int)local_140 != 0) {
      plVar2 = plVar19 + (int)local_140;
      do {
        uVar18 = local_f0;
        lVar13 = *plVar19;
        pbVar14 = *(byte **)(lVar13 + 0x20);
        if ((*pbVar14 & 1) == 0) {
          local_d8 = (undefined **)(pbVar14 + 1);
        }
        else {
          local_d8 = *(undefined ***)(pbVar14 + 0x10);
        }
        local_1cc[0] = (undefined2)*(undefined4 *)(lVar13 + 0x28);
        local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)(lVar13 + 0x2c));
        local_1b8 = *(byte **)(lVar13 + 0x18);
        if ((*local_1b8 & 1) == 0) {
          local_1b8 = local_1b8 + 1;
          if (local_e8 <= local_f0) goto LAB_005e3ef0;
LAB_005e3e58:
          FUN_005e60a8(&local_e0,local_f0,&local_d8,local_1cc,&local_1c8,&local_1b8);
          local_f0 = uVar18 + 0x48;
        }
        else {
          local_1b8 = *(byte **)(local_1b8 + 0x10);
          if (local_f0 < local_e8) goto LAB_005e3e58;
LAB_005e3ef0:
          lVar13 = (long)(local_f0 - local_f8) >> 3;
          uVar18 = lVar13 * -0x71c71c71c71c71c7 + 1;
          if (0x38e38e38e38e38e < uVar18) {
                    /* try { // try from 005e4384 to 005e438b has its CatchHandler @ 005e438c */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar12 = (long)(local_e8 - local_f8) >> 3;
          uVar15 = lVar12 * 0x1c71c71c71c71c72;
          if (uVar18 <= uVar15) {
            uVar18 = uVar15;
          }
          if (0x1c71c71c71c71c6 < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
            uVar18 = 0x38e38e38e38e38e;
          }
          if (uVar18 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = (**(code **)(*local_e0 + 0x10))(local_e0,uVar18 * 0x48,8);
          }
          uVar16 = lVar12 + lVar13 * 8;
          uVar18 = lVar12 + uVar18 * 0x48;
          FUN_005e60a8(&local_e0,uVar16,&local_d8,local_1cc,&local_1c8,&local_1b8);
          uVar10 = local_e8;
          uVar15 = local_f8;
          local_e8 = uVar18;
          uVar11 = uVar16 + 0x48;
          uVar18 = local_f8;
          if (local_f0 != local_f8) {
            lVar13 = 0;
            do {
              lVar12 = local_f0 + lVar13;
              uVar21 = *(undefined8 *)(lVar12 + -0x40);
              uVar20 = *(undefined8 *)(lVar12 + -0x48);
              uVar22 = *(undefined8 *)(lVar12 + -0x38);
              lVar3 = uVar16 + lVar13;
              lVar13 = lVar13 + -0x48;
              *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar12 + -0x30);
              *(undefined8 *)(lVar3 + -0x38) = uVar22;
              *(undefined8 *)(lVar3 + -0x40) = uVar21;
              *(undefined8 *)(lVar3 + -0x48) = uVar20;
              *(undefined8 *)(lVar12 + -0x40) = 0;
              *(undefined8 *)(lVar12 + -0x38) = 0;
              *(undefined8 *)(lVar12 + -0x48) = 0;
              *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar12 + -0x28);
              uVar20 = *(undefined8 *)(lVar12 + -0x20);
              uVar22 = *(undefined8 *)(lVar12 + -8);
              uVar21 = *(undefined8 *)(lVar12 + -0x10);
              *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
              *(undefined8 *)(lVar3 + -0x20) = uVar20;
              *(undefined8 *)(lVar3 + -8) = uVar22;
              *(undefined8 *)(lVar3 + -0x10) = uVar21;
              *(undefined8 *)(lVar12 + -0x20) = 0;
              *(undefined8 *)(lVar12 + -0x18) = 0;
              *(undefined8 *)(lVar12 + -0x10) = 0;
            } while (local_f8 - local_f0 != lVar13);
            uVar18 = local_f0;
            uVar16 = uVar16 + lVar13;
          }
          for (; local_f8 = uVar16, local_f0 = uVar11, uVar18 != uVar15; uVar18 = uVar18 - 0x48) {
            if ((*(byte *)(uVar18 - 0x20) & 1) == 0) {
              bVar5 = *(byte *)(uVar18 - 0x48);
            }
            else {
              (**(code **)(**(long **)(uVar18 - 8) + 0x18))
                        (*(long **)(uVar18 - 8),*(undefined8 *)(uVar18 - 0x10),
                         *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe,1);
              bVar5 = *(byte *)(uVar18 - 0x48);
            }
            if ((bVar5 & 1) != 0) {
              (**(code **)(**(long **)(uVar18 - 0x30) + 0x18))
                        (*(long **)(uVar18 - 0x30),*(undefined8 *)(uVar18 - 0x38),
                         *(ulong *)(uVar18 - 0x48) & 0xfffffffffffffffe,1);
            }
            uVar11 = local_f0;
            uVar16 = local_f8;
          }
          if (uVar15 != 0) {
            (**(code **)(*local_e0 + 0x18))(local_e0,uVar15,uVar10 - uVar15,8);
          }
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar2);
    }
    FUN_00601ce0(auStack_158);
    if (local_180[0] != '\0') {
      FUN_01cfa44c(auStack_178,local_170);
    }
    puVar9 = PTR_DAT_047cbb38;
    puVar8 = PTR_DAT_047cbb30;
    if (((ulong)local_1a0 & 1) != 0) {
      (**(code **)(*plStack_188 + 0x18))
                (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
    }
    FUN_00601270(&local_120);
    local_120 = *(undefined8 *)(param_1 + 200);
    local_118 = *(long **)(param_1 + 0xd0);
    if (local_118 == (long *)0x0) {
      local_118 = (long *)0x0;
    }
    else {
      plVar19 = local_118 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = *plVar19 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = *plVar19 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar13 = *plVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_005ebb70(&local_1b8,&local_120,&local_f8);
    local_198 = &local_198;
    local_1a0 = puVar9 + 0x10;
    local_140 = (undefined **)0x0;
    local_138 = 0;
    local_1a8 = (undefined **)(puVar8 + 0x10);
    local_190 = local_198;
    (**(code **)(*(long *)local_1b8 + 0x10))(local_1b8,local_180);
    local_140 = &local_1a0;
    thunk_FUN_006c4e40(&local_1a8);
    local_1a8 = (undefined **)(puVar8 + 0x10);
    FUN_006c4274(&local_1a0);
    plVar19 = local_1b0;
    pbVar14 = local_1b8;
    local_1b8 = (byte *)0x0;
    local_1b0 = (long *)0x0;
    (**(code **)(*(long *)pbVar14 + 0x30))(&local_d8);
    if (plVar19 != (long *)0x0) {
      plVar2 = plVar19 + 1;
      do {
        lVar13 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_1a0 = (undefined *)0x0;
    local_198 = (undefined8 *******)FUN_01cf7e20();
    local_190 = (undefined8 *******)0x0;
    local_1a8 = &local_1a0;
    FUN_005e6218(local_240,&local_d8,0,&DAT_03c886bc,&local_1a8);
    FUN_01cfa44c(&local_1a8,local_1a0);
    FUN_027c2bd0(&local_d8,local_d0);
    if (local_1b0 != (long *)0x0) {
      plVar19 = local_1b0 + 1;
      do {
        lVar13 = *plVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*local_1b0 + 0x10))(local_1b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_118 != (long *)0x0) {
      plVar19 = local_118 + 1;
      do {
        lVar13 = *plVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined8 *******)FUN_01cf7e20();
    pppppppuStack_c0 = (undefined8 *******)0x0;
    local_d8 = &local_d0;
    FUN_005e46b0(local_240,&local_1a8,&local_d8);
    FUN_027c2bd0(&local_d8,local_d0);
    FUN_00601ce0(auStack_158);
    if (local_180[0] != '\0') {
      FUN_01cfa44c(auStack_178,local_170);
    }
    if (((ulong)local_1a0 & 1) != 0) {
      (**(code **)(*plStack_188 + 0x18))
                (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
    }
    FUN_00601270(&local_120);
  }
  uVar15 = local_f8;
  uVar18 = local_f0;
  if (local_f8 != 0) {
    for (; uVar18 != uVar15; uVar18 = uVar18 - 0x48) {
      if ((*(byte *)(uVar18 - 0x20) & 1) == 0) {
        bVar5 = *(byte *)(uVar18 - 0x48);
      }
      else {
        (**(code **)(**(long **)(uVar18 - 8) + 0x18))
                  (*(long **)(uVar18 - 8),*(undefined8 *)(uVar18 - 0x10),
                   *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe,1);
        bVar5 = *(byte *)(uVar18 - 0x48);
      }
      if ((bVar5 & 1) != 0) {
        (**(code **)(**(long **)(uVar18 - 0x30) + 0x18))
                  (*(long **)(uVar18 - 0x30),*(undefined8 *)(uVar18 - 0x38),
                   *(ulong *)(uVar18 - 0x48) & 0xfffffffffffffffe,1);
      }
    }
    local_f0 = uVar15;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  nn::os::LockMutex((MutexType *)(lVar17 + 0x38));
  *(undefined4 *)(lVar17 + 0x58) = local_240[0];
  *(undefined8 *)(lVar17 + 0x68) = uStack_230;
  *(ulong *)(lVar17 + 0x60) = local_238;
  *(long **)(lVar17 + 0x78) = plStack_220;
  *(undefined8 *)(lVar17 + 0x70) = local_228;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  *(undefined1 *)(lVar17 + 0x80) = 0;
  if (local_218 != '\0') {
    *(undefined8 **)(lVar17 + 0x88) = local_210;
    *(undefined8 *)(lVar17 + 0x98) = uStack_200;
    *(undefined8 *)(lVar17 + 0x90) = local_208;
    plVar19 = (long *)(lVar17 + 0x90);
    *(long *)(lVar17 + 0xa0) = local_1f8;
    if (local_1f8 == 0) {
      *(long **)(lVar17 + 0x88) = plVar19;
    }
    else {
      *(long **)(*plVar19 + 0x10) = plVar19;
      local_210 = &local_208;
      local_208 = 0;
      local_1f8 = 0;
    }
    *(undefined1 *)(lVar17 + 0x80) = 1;
  }
  *(undefined8 **)(lVar17 + 0xa8) = local_1f0;
  *(undefined8 *)(lVar17 + 0xb8) = uStack_1e0;
  *(undefined8 *)(lVar17 + 0xb0) = local_1e8;
  plVar19 = (long *)(lVar17 + 0xb0);
  *(long *)(lVar17 + 0xc0) = local_1d8;
  if (local_1d8 == 0) {
    *(long **)(lVar17 + 0xa8) = plVar19;
  }
  else {
    *(long **)(*plVar19 + 0x10) = plVar19;
    local_1f0 = &local_1e8;
    local_1e8 = 0;
    local_1d8 = 0;
  }
  *(undefined1 *)(lVar17 + 200) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar17 + 0x38));
  FUN_027c2bd0(&local_1f0,local_1e8);
  if (local_218 != '\0') {
    FUN_01cfa44c(&local_210,local_208);
  }
  if ((local_238 & 1) != 0) {
    (**(code **)(*plStack_220 + 0x18))(plStack_220,local_228,local_238 & 0xfffffffffffffffe,1);
  }
  return 1;
}


