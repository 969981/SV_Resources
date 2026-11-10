/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f3f08; name: FUN_031f3f08
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_031f3f08(long param_1,ulong *param_2,ulong *param_3)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ThreadType *pTVar6;
  long *plVar7;
  size_t sVar8;
  ulong extraout_x1;
  char *pcVar9;
  int iVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  undefined8 *local_238;
  ulong local_228;
  ulong uStack_220;
  ulong *local_218;
  ulong *puStack_210;
  undefined8 *local_208;
  undefined8 uStack_200;
  long local_1f8;
  ulong *local_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  ulong *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  ulong *local_90;
  undefined8 local_88;
  undefined *local_80;
  int local_78;
  int local_70 [4];
  
  if (param_2 == param_3) {
    return 0;
  }
  iVar4 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (1 < iVar4) {
    local_90 = (ulong *)0x0;
    local_88 = -0x8000000000000000;
    local_80 = &DAT_03d7702c;
    local_78 = 0;
    local_a0 = &DAT_03d7702c;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = -0x8000000000000000;
    FUN_031f8f54(&local_90,(ulong)((long)param_3 - (long)param_2) >> 3 & 0xffffffff);
    uVar12 = iVar4 + 1;
    uVar13 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1) +
             (long)(int)uVar12;
    if ((((uint)((long)local_78 << 1) < (uint)uVar13) && (-1 < local_78)) &&
       ((uVar13 | (long)local_78 << 1) >> 0x20 == 0)) {
      FUN_02e8d9d0(&local_80);
    }
    puVar24 = param_2;
LAB_031f3fbc:
    local_b8 = (ulong *)*puVar24;
    uVar13 = *local_b8;
    uVar12 = (uint)uVar13;
    if (((uVar12 >> 3 & 1) != 0) && (local_b8[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2] != 0)) {
      puVar16 = local_b8;
      uVar17 = uVar12;
      puVar14 = local_b8;
      if ((uVar12 >> 3 & 1) == 0) {
        uVar18 = uVar13;
        do {
          if (((uVar18 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0)) {
            local_218 = (ulong *)0x0;
            goto joined_r0x031f4038;
          }
          uVar18 = *puVar16;
          uVar17 = (uint)uVar18;
        } while ((uVar17 >> 3 & 1) == 0);
      }
      local_218 = (ulong *)puVar16[(ulong)(byte)POPCOUNT((byte)uVar17 & 7) + 2];
joined_r0x031f4038:
      do {
        if ((uVar12 >> 0xf & 1) != 0) goto LAB_031f4074;
        if ((uVar13 & 9) != 0) {
          puStack_210 = (ulong *)0x0;
          goto LAB_031f409c;
        }
        puVar14 = (ulong *)puVar14[1];
        puStack_210 = (ulong *)0x0;
        if (puVar14 == (ulong *)0x0) goto LAB_031f409c;
        uVar13 = *puVar14;
        uVar12 = (uint)uVar13;
      } while( true );
    }
    FUN_031f93a4(&local_b0,&local_b8);
    if ((extraout_x1 & 1) != 0) goto LAB_031f40b0;
    if (DAT_04884ce8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_031f4350;
    }
    else if (DAT_046aaf68 == '\0') {
      local_218 = (ulong *)0x0;
      local_208 = &DAT_04884c98;
      uStack_200 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_1f8 = nn::os::GetThreadId(pTVar6);
      local_1f0 = (ulong *)0x0;
      local_1e8 = 0;
      local_1e0 = (char *)0x0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      FUN_0322c554(&local_218,
                   "Duplicate unnamed type found in input list passed to type registry addMany().",
                   PTR_DAT_047d1b38);
      local_1d8 = 0xc1;
      goto LAB_031f4320;
    }
    local_218 = (ulong *)0x0;
    local_208 = &DAT_04884c98;
    uStack_200 = 1;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_1f8 = nn::os::GetThreadId(pTVar6);
    local_1e8 = 0;
    local_1e0 = (char *)0x0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8[0]._0_1_ = '\0';
    puStack_210 = (ulong *)0x10000000000;
    local_218 = local_1c8;
    local_1f0 = local_1c8;
    FUN_0322c554(&local_218,
                 "Duplicate unnamed type found in input list passed to type registry addMany().",
                 PTR_DAT_047d1b38);
    local_1e0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
    ;
    local_1d8 = 0xc1;
    if ((char)local_1c8[0] == '\0') goto LAB_031f432c;
    sVar8 = strlen((char *)local_1c8);
    pcVar9 = (char *)((long)local_1c8 + (long)(int)((int)sVar8 - (uint)((int)sVar8 == 0xff)) + -0x50
                     );
    goto LAB_031f4b1c;
  }
  goto LAB_031f4434;
LAB_031f4074:
  uVar13 = CONCAT44(uVar12,uVar12) & 0x7fff00007fff;
  puStack_210 = (ulong *)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                              POPCOUNT((char)(uVar13 >> 8))) + 2];
LAB_031f409c:
  uVar13 = FUN_031f90b0(&local_90,&local_218);
  if ((uVar13 & 1) == 0) {
    if (DAT_04884ce8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_031f4350;
    }
    else if (DAT_046aaf68 == '\0') {
      local_218 = (ulong *)0x0;
      local_208 = &DAT_04884c98;
      uStack_200 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_1f8 = nn::os::GetThreadId(pTVar6);
      local_1f0 = (ulong *)0x0;
      local_1e8 = 0;
      local_1e0 = (char *)0x0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      puVar24 = local_b8;
      goto LAB_031f417c;
    }
    local_218 = (ulong *)0x0;
    local_208 = &DAT_04884c98;
    uStack_200 = 1;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_1f8 = nn::os::GetThreadId(pTVar6);
    local_1e8 = 0;
    local_1e0 = (char *)0x0;
    local_1c8[0]._0_1_ = '\0';
    puStack_210 = (ulong *)0x10000000000;
    local_1d8 = 0;
    uStack_1d0 = 0;
    puVar24 = local_b8;
    goto LAB_031f4268;
  }
LAB_031f40b0:
  puVar24 = puVar24 + 1;
  if (puVar24 == param_3) goto code_r0x031f40bc;
  goto LAB_031f3fbc;
  while (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0) {
LAB_031f417c:
    uVar13 = *puVar24;
    puVar14 = local_b8;
    if (((uint)uVar13 >> 3 & 1) != 0) {
      local_c8 = (undefined8 *)0x0;
      if (puVar24 != (ulong *)0x0) {
        local_c8 = (undefined8 *)puVar24[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
      }
      goto LAB_031f42b0;
    }
    if ((uVar13 & 1) != 0) {
      local_c8 = (undefined8 *)0x0;
      goto LAB_031f42b0;
    }
  }
  local_c8 = (undefined8 *)0x0;
LAB_031f42b0:
  do {
    uVar12 = (uint)*puVar14;
    if ((uVar12 >> 0xf & 1) != 0) {
      uVar13 = CONCAT44(uVar12,uVar12) & 0x7fff00007fff;
      local_c0 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2];
      goto LAB_031f42f4;
    }
    if ((*puVar14 & 9) != 0) {
      local_c0 = 0;
      goto LAB_031f42f4;
    }
    puVar24 = puVar14 + 1;
    puVar14 = (ulong *)*puVar24;
  } while ((ulong *)*puVar24 != (ulong *)0x0);
  local_c0 = 0;
LAB_031f42f4:
  FUN_0322c554(&local_218,
               "Duplicate type \'{}\' found in input list passed to type registry addMany().",
               PTR_DAT_047e5db0,&local_c8);
  local_1d8 = 0xbb;
LAB_031f4320:
  local_1e0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
  ;
  FUN_0322c8e0(&local_218);
  goto LAB_031f432c;
code_r0x031f40bc:
  bVar3 = true;
  goto LAB_031f4360;
  while (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0) {
LAB_031f4268:
    uVar13 = *puVar24;
    puVar14 = local_b8;
    if (((uint)uVar13 >> 3 & 1) != 0) {
      local_228 = 0;
      if (puVar24 != (ulong *)0x0) {
        local_228 = puVar24[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
      }
      goto LAB_031f4a84;
    }
    if ((uVar13 & 1) != 0) {
      local_228 = 0;
      goto LAB_031f4a84;
    }
  }
  local_228 = 0;
LAB_031f4a84:
  do {
    uVar12 = (uint)*puVar14;
    if ((uVar12 >> 0xf & 1) != 0) {
      uVar13 = CONCAT44(uVar12,uVar12) & 0x7fff00007fff;
      uStack_220 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2
                          ];
      goto LAB_031f4ac8;
    }
    if ((*puVar14 & 9) != 0) {
      uStack_220 = 0;
      goto LAB_031f4ac8;
    }
    puVar24 = puVar14 + 1;
    puVar14 = (ulong *)*puVar24;
  } while ((ulong *)*puVar24 != (ulong *)0x0);
  uStack_220 = 0;
LAB_031f4ac8:
  local_218 = local_1c8;
  local_1f0 = local_1c8;
  FUN_0322c554(&local_218,
               "Duplicate type \'{}\' found in input list passed to type registry addMany().",
               PTR_DAT_047e5db0,&local_228);
  local_1e0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
  ;
  local_1d8 = 0xbb;
  if ((char)local_1c8[0] != '\0') {
    sVar8 = strlen((char *)local_1c8);
    pcVar9 = (char *)((long)local_1c8 + (long)(int)((int)sVar8 - (uint)((int)sVar8 == 0xff)) + -0x50
                     );
LAB_031f4b1c:
    pcVar9[0x50] = '\n';
    pcVar9[0x51] = '\0';
    printf("%s",local_1c8);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_031f432c:
  if (((ulong)local_1f0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1f0 + -1),0);
  }
LAB_031f4350:
  bVar3 = false;
  local_70[0] = -0x7ffbfda9;
LAB_031f4360:
  if ((local_a0 != (undefined *)0x0) && (*(int *)(local_a0 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_a0,0);
    local_a0 = &DAT_03d7702c;
    local_98 = 0;
  }
  lVar23 = local_a8;
  uVar13 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar23) && (local_b0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar13 << 3);
  }
  if ((local_80 != (undefined *)0x0) && (*(int *)(local_80 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_80,0);
    local_80 = &DAT_03d7702c;
    local_78 = 0;
  }
  lVar23 = local_88;
  uVar13 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar23) && (local_90 != (ulong *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar13 << 4);
  }
  if (bVar3) {
LAB_031f4434:
    nn::os::LockMutex((MutexType *)(param_1 + 0x30));
    puVar1 = PTR_DAT_047e5db8;
    puVar24 = param_2;
    do {
      puVar16 = (ulong *)*puVar24;
      uVar13 = 0;
      puVar14 = puVar16;
      do {
        uVar12 = (uint)*puVar14;
        if ((uVar12 >> 0x15 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = CONCAT44(uVar12,uVar12) & 0x1fffff001fffff;
          uVar18 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                        POPCOUNT((char)(uVar18 >> 0x10))) + 2];
        }
        uVar13 = uVar18 | uVar13;
      } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
      local_70[0] = -0x7ffbfda9;
      local_90 = puVar16;
      if (((uint)uVar13 >> 0xc & 1) != 0) {
        if (DAT_04884ce8 == '\0') goto LAB_031f4a28;
        local_218 = (ulong *)0x0;
        local_208 = &DAT_04884c98;
        uStack_200 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_1f8 = nn::os::GetThreadId(pTVar6);
        local_1e8 = 0;
        local_1e0 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        local_1f0 = (ulong *)0x0;
        local_1d8 = 0xcd;
        uStack_1d0 = 0;
        FUN_0322c554(&local_218,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5968,"isTemporary"
                     ,local_70);
        pcVar9 = "Cannot register temporary type {}";
LAB_031f4828:
        FUN_0322c554(&local_218,pcVar9,&DAT_046a7e88,&local_90);
        goto LAB_031f483c;
      }
      local_70[0] = -0x7ffbfe00;
      do {
        uVar13 = *(ulong *)puVar1;
        if ((uVar13 & 1) != 0) {
          uVar12 = 0;
          do {
            uVar13 = *(ulong *)puVar1;
            if (uVar12 != 0x1f) {
              iVar4 = (1 << (ulong)(uVar12 & 0x1f)) + 1;
              do {
                iVar4 = iVar4 + -1;
                DataMemoryBarrier(2,2);
                Yield();
              } while (1 < iVar4);
            }
            if (uVar12 < 8) {
              uVar12 = uVar12 + 1;
            }
          } while ((uVar13 & 1) != 0);
        }
        puVar14 = *(ulong **)(param_1 + 0x18);
        while (puVar14 != (ulong *)0x0) {
          iVar4 = FUN_031e29c0(puVar14[1],puVar16);
          if (iVar4 == 0) {
            uVar18 = puVar14[1];
            *puVar14 = *puVar14 | 1;
            goto LAB_031f4544;
          }
          puVar11 = puVar14 + 2;
          if (-1 < iVar4) {
            puVar11 = puVar14 + 3;
          }
          puVar14 = (ulong *)*puVar11;
        }
        uVar18 = 0;
LAB_031f4544:
        DataMemoryBarrier(2,1);
      } while (uVar13 != *(ulong *)puVar1);
      if (uVar18 != 0) {
        if ((local_70[0] < 0) && (DAT_04884ce8 != '\0')) {
          local_218 = (ulong *)0x0;
          local_208 = &DAT_04884c98;
          uStack_200 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_1f8 = nn::os::GetThreadId(pTVar6);
          local_1f0 = (ulong *)0x0;
          local_1e8 = 0;
          local_1e0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          local_1d8 = 0xce;
          uStack_1d0 = 0;
          FUN_0322c554(&local_218,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a7e98,
                       "treeTypeFromType(type) != nullptr",local_70);
          pcVar9 = "Cannot add type \'{}\' to registry (already in types tree)";
          goto LAB_031f4828;
        }
        goto LAB_031f4a28;
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != param_3);
    *(ulong **)(param_1 + 0x100) = param_2;
    *(ulong **)(param_1 + 0x108) = param_3;
    local_70[0] = FUN_0321b3d0(param_1 + 0x90,param_2,param_3);
    if (local_70[0] < 0) {
      if (DAT_04884ce8 != '\0') {
        local_218 = (ulong *)0x0;
        local_208 = &DAT_04884c98;
        uStack_200 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_1f8 = nn::os::GetThreadId(pTVar6);
        local_1f0 = (ulong *)0x0;
        local_1e8 = 0;
        local_1e0 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        local_1d8 = 0xd2;
        uStack_1d0 = 0;
        FUN_0322c554(&local_218,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_046a7e98,
                     "m_checker.addAndCheckTypes(types)",local_70);
        FUN_0322c554(&local_218,&DAT_03c886bc,PTR_DAT_047d1b38);
LAB_031f483c:
        FUN_0322c8e0(&local_218);
        if (((ulong)local_1f0 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1f0 + -1),0);
        }
      }
    }
    else {
      local_238 = (undefined8 *)0x0;
      lVar23 = 0;
      local_90 = (ulong *)0x0;
      local_88 = -0x8000000000000000;
      lVar20 = 0;
      iVar4 = 0;
      local_b0 = 0;
      local_a8 = 0x8000000000000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = -0x8000000000000000;
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      do {
        puVar24 = *(ulong **)(param_1 + 0x60);
        iVar5 = *(int *)(param_1 + 0x68);
        puVar14 = puVar24 + iVar5;
        uVar13 = *param_2;
        if (iVar5 != 0) {
          lVar22 = (long)iVar5 << 3;
          do {
            if (*puVar24 == uVar13) goto LAB_031f4674;
            iVar5 = FUN_031e29c0(*puVar24,uVar13);
            if (iVar5 == 0) {
              iVar5 = iVar4 + 1;
              iVar10 = iVar4;
              if ((int)(local_a8._4_4_ & 0x7fffffff) <= iVar4) {
                FUN_031f9550(&local_b0,(long)iVar5);
                lVar20 = local_b0;
                iVar10 = (int)local_a8;
              }
              puVar19 = (undefined8 *)(lVar20 + (long)iVar10 * 0x10);
              *puVar19 = 0;
              puVar19[1] = 0;
              local_a8 = CONCAT44(local_a8._4_4_,iVar5);
              puVar14 = (ulong *)(lVar20 + (long)iVar4 * 0x10);
              *puVar14 = *puVar24;
              puVar14[1] = uVar13;
              lVar23 = (long)(int)(uint)local_c0 + 1;
              if ((int)(local_c0._4_4_ & 0x7fffffff) <= (int)(uint)local_c0) {
                FUN_031f96ac(&local_c8,lVar23);
              }
              local_238 = local_c8;
              local_c8[(int)(uint)local_c0] = puVar24;
              local_c0 = CONCAT44(local_c0._4_4_,(int)lVar23);
              iVar4 = iVar5;
              goto LAB_031f4674;
            }
            puVar24 = puVar24 + 1;
            lVar22 = lVar22 + -8;
          } while (lVar22 != 0);
        }
        puVar24 = puVar14;
LAB_031f4674:
        if (puVar24 == (ulong *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x68) * 8)) {
          lVar22 = (long)(int)local_88;
          if ((int)(local_88._4_4_ & 0x7fffffff) <= (int)local_88) {
            FUN_031dee78(&local_90,puVar1,lVar22 + 1);
          }
          local_90[(int)local_88] = uVar13;
          local_88 = CONCAT44(local_88._4_4_,(int)(lVar22 + 1));
        }
        puVar24 = local_90;
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
      iVar2 = (int)local_88;
      lVar20 = (long)(int)local_88;
      iVar10 = *(int *)(param_1 + 0x68);
      iVar5 = iVar10 + (int)local_88;
      if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar5) {
        FUN_031f97c0((long *)(param_1 + 0x60),(long)iVar5);
      }
      lVar22 = local_b0;
      uVar12 = (uint)lVar23;
      if (iVar2 != 0) {
        uVar13 = lVar20 * 8 - 8;
        uVar12 = ((uint)(uVar13 >> 3) & 0x1fffffff) + 1;
        puVar14 = (ulong *)(*(long *)(param_1 + 0x60) + (long)iVar10 * 8);
        if ((uVar12 & 3) == 0) {
          puVar16 = puVar24;
        }
        else {
          lVar23 = -((ulong)uVar12 & 3);
          puVar11 = puVar14;
          puVar15 = puVar24;
          do {
            puVar16 = puVar15 + 1;
            bVar3 = lVar23 != -1;
            lVar23 = lVar23 + 1;
            puVar14 = puVar11 + 1;
            *puVar11 = *puVar15;
            puVar11 = puVar14;
            puVar15 = puVar16;
          } while (bVar3);
        }
        if (0x17 < uVar13) {
          do {
            *puVar14 = *puVar16;
            puVar14[1] = puVar16[1];
            puVar14[2] = puVar16[2];
            puVar11 = puVar16 + 3;
            puVar16 = puVar16 + 4;
            puVar14[3] = *puVar11;
            puVar14 = puVar14 + 4;
          } while (puVar16 != puVar24 + lVar20);
        }
        iVar4 = (int)local_a8;
        uVar12 = (uint)local_c0;
      }
      *(int *)(param_1 + 0x68) = iVar5;
      local_208 = (undefined8 *)0x0;
      uStack_200 = 0;
      puStack_210 = local_90 + (int)local_88;
      local_218 = local_90;
      local_1f0 = (ulong *)(local_b0 + (long)iVar4 * 0x10);
      local_1f8 = local_b0;
      FUN_031f4b48(param_1,&local_218);
      if (0 < (int)uVar12) {
        uVar13 = (ulong)uVar12;
        puVar19 = (undefined8 *)(lVar22 + 8);
        puVar21 = local_238;
        do {
          FUN_031d5408(*(undefined8 *)*puVar21);
          uVar13 = uVar13 - 1;
          *(undefined8 *)*puVar21 = *puVar19;
          puVar19 = puVar19 + 2;
          puVar21 = puVar21 + 1;
        } while (uVar13 != 0);
      }
      lVar23 = local_c0;
      puVar1 = PTR_PTR_047d1a50;
      local_70[0] = 0;
      uVar13 = (ulong)local_c0._4_4_;
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      if ((-1 < lVar23) && (local_238 != (undefined8 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_238,uVar13 << 3);
      }
      uVar18 = local_a8;
      uVar13 = local_a8 >> 0x20;
      local_a8 = uVar13 << 0x20;
      if ((lVar22 != 0) && (-1 < (long)uVar18)) {
        plVar7 = (long *)(puVar1 + 0x20);
        (**(code **)(*plVar7 + 0x20))(plVar7,lVar22,uVar13 << 4);
      }
      lVar23 = local_88;
      uVar13 = (ulong)local_88._4_4_;
      local_88 = (ulong)local_88._4_4_ << 0x20;
      if ((-1 < lVar23) && (local_90 != (ulong *)0x0)) {
        plVar7 = (long *)(puVar1 + 0x20);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_90,uVar13 << 3);
      }
    }
LAB_031f4a28:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  }
  return local_70[0];
}


