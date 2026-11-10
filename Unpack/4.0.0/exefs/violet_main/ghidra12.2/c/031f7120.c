/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f7120; name: FUN_031f7120
 */


/* WARNING: Removing unreachable block (ram,0x031f7afc) */

void FUN_031f7120(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  ThreadType *pTVar12;
  char *pcVar13;
  size_t sVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
  ulong *puVar25;
  int *piVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong *puVar30;
  undefined8 uVar31;
  long local_220;
  undefined8 local_218;
  long *local_210;
  undefined8 local_208;
  long local_200;
  long *local_1f8;
  ulong local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  ulong local_1d0;
  undefined8 *local_1c8;
  char *local_1c0;
  long local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char local_188 [260];
  int local_84;
  ulong local_80;
  undefined8 local_78;
  long local_70 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 6));
  uVar5 = *(uint *)((long)param_1 + 0x8c);
  plVar18 = param_1 + 0x10;
  if (-1 < (int)uVar5) {
    if (uVar5 == 0) {
      uVar19 = 0;
    }
    else {
      lVar20 = 0;
      uVar19 = 0;
      do {
        *(undefined8 *)(*plVar18 + lVar20) = 0xffffffffffffffff;
        uVar19 = uVar19 + 2;
        lVar16 = *plVar18 + lVar20;
        lVar20 = lVar20 + 0x20;
        *(undefined8 *)(lVar16 + 0x10) = 0xffffffffffffffff;
      } while (((ulong)uVar5 + 1 & 0xfffffffe) != uVar19);
      if (((ulong)uVar5 + 1 & 1) == 0) goto LAB_031f71ac;
    }
    *(undefined8 *)(*plVar18 + uVar19 * 0x10) = 0xffffffffffffffff;
  }
LAB_031f71ac:
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0x80000000;
  puVar9 = PTR_DAT_047e5db8;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar8) {
      *(long *)puVar9 = *(long *)puVar9 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_84 = (int)param_1[0x22];
  uVar5 = local_84 + 1U & 3;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x22) = uVar5;
  if (DAT_04884ce8 < 4) {
    if (DAT_046aaf68 != '\0') goto LAB_031f7d40;
  }
  else {
    if (DAT_046aaf68 == '\0') {
      local_1d8 = (char *)0x0;
      local_1c8 = &DAT_04884c98;
      local_1c0 = (char *)0x4;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar12);
      local_1b0 = (char *)0x0;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      local_210 = (long *)CONCAT44(local_210._4_4_,(int)param_1[5]);
      FUN_0322c554(&local_1d8,"Inheritance State changing from {} to {} [{} lists]",PTR_DAT_047e5540
                   ,&local_84,param_1 + 0x22,&local_210);
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      local_198 = 0x4af;
      FUN_0322c8e0(&local_1d8);
    }
    else {
LAB_031f7d40:
      local_1c8 = &DAT_04884c98;
      local_1c0 = (char *)0x4;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar12);
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      local_1d0 = 0x10000000000;
      local_188[0] = '\0';
      local_80 = CONCAT44(local_80._4_4_,(int)param_1[5]);
      local_1d8 = local_188;
      local_1b0 = local_188;
      FUN_0322c554(&local_1d8,"Inheritance State changing from {} to {} [{} lists]",PTR_DAT_047e5540
                   ,&local_84,param_1 + 0x22,&local_80);
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      local_198 = 0x4af;
      if (local_188[0] != '\0') {
        sVar14 = strlen(local_188);
        (local_188 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
        (local_188 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
        printf("%s",local_188);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    if (((ulong)local_1b0 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1b0 + -1,0);
    }
  }
  local_1e8 = (undefined8 *)0x0;
  local_1e0 = 0x8000000000000000;
  iVar10 = (int)param_1[5];
  if (iVar10 < 1) {
    bVar8 = false;
    puVar27 = (undefined8 *)0x0;
    uVar19 = 0;
  }
  else {
    puVar15 = (undefined8 *)0x0;
    uVar19 = 0;
    lVar20 = 0;
    do {
      puVar30 = *(ulong **)(param_1[4] + lVar20 * 8);
      if (puVar30 != (ulong *)0x0) {
        do {
          if (puVar30[1] != 0) {
            uVar5 = (int)uVar19 + 1;
            if ((int)(local_1e0._4_4_ & 0x7fffffff) <= (int)uVar19) {
              FUN_031f9bc4(&local_1e8,(long)(int)uVar5);
              uVar19 = local_1e0 & 0xffffffff;
              puVar15 = local_1e8;
            }
            puVar25 = puVar15 + (long)(int)uVar19 * 4;
            *puVar25 = (ulong)puVar30;
            *(int *)(puVar25 + 1) = (int)lVar20;
            puVar21 = (ulong *)puVar30[1];
            puVar23 = puVar21;
            do {
              uVar19 = *puVar23;
              if (((uint)uVar19 >> 3 & 1) != 0) {
                if (puVar23 != (ulong *)0x0) {
                  puVar23 = (ulong *)puVar23[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
                }
                break;
              }
              if ((uVar19 & 1) != 0) {
                puVar23 = (ulong *)0x0;
                break;
              }
              puVar23 = (ulong *)puVar23[1];
            } while (puVar23 != (ulong *)0x0);
            do {
              uVar24 = (uint)*puVar21;
              if ((uVar24 >> 0xf & 1) != 0) {
                uVar24 = uVar24 & 0x7fff;
                uVar19 = puVar21[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                              POPCOUNT((char)(uVar24 >> 8))) + 2];
                goto LAB_031f73a4;
              }
              if ((*puVar21 & 9) != 0) {
                uVar19 = 0;
                goto LAB_031f73a4;
              }
              puVar21 = (ulong *)puVar21[1];
            } while (puVar21 != (ulong *)0x0);
            uVar19 = 0;
LAB_031f73a4:
            puVar25[2] = (ulong)puVar23;
            puVar25[3] = uVar19;
            local_1e0 = CONCAT44(local_1e0._4_4_,uVar5);
            if ((*(byte *)puVar30[1] >> 3 & 1) == 0) {
              CallSupervisor(0x26);
            }
            uVar19 = (ulong)uVar5;
          }
          puVar30 = (ulong *)(*puVar30 & 0xfffffffffffffffc);
        } while (puVar30 != (ulong *)0x0);
        iVar10 = (int)param_1[5];
      }
      puVar27 = local_1e8;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar10);
    if ((int)uVar19 < 2) {
      bVar8 = false;
    }
    else {
      FUN_031f9d40(local_1e8,0,(int)uVar19 + -1);
      bVar8 = true;
    }
  }
  local_210 = (long *)0x0;
  local_208 = 0x8000000000000000;
  lVar20 = tpidr_el0;
  lVar16 = *(long *)(lVar20 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar16;
  }
  local_200 = *(long *)(*(long *)(lVar16 + 0x3d0) + 0x10);
  if (*(long *)(local_200 + 8) != 0) {
    local_200 = 0;
  }
  local_1f0 = -(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
  local_80 = local_1f0;
  if (local_200 == 0) {
    local_1f8 = (long *)(**(code **)PTR_DAT_047d1a08)(1,&local_80,0x40);
  }
  else {
    local_1d8 = (char *)(local_1f0 + 0x3f & 0xffffffffffffffc0);
    if (local_1d8 <= *(char **)(local_200 + 0x28)) {
      local_1f8 = *(long **)(local_200 + 0x38);
      if (local_1d8 + (long)local_1f8 <= *(char **)(local_200 + 0x40)) {
        *(char **)(local_200 + 0x38) = local_1d8 + (long)local_1f8;
        goto LAB_031f74b4;
      }
    }
    local_1f8 = (long *)FUN_031cf3b4(local_200,&local_1d8);
  }
LAB_031f74b4:
  uVar24 = (uint)uVar19;
  local_208 = CONCAT44(uVar24,(int)local_208) | 0x8000000000000000;
  uVar5 = uVar24;
  if ((int)uVar24 < 0) {
    uVar5 = uVar24 + 1;
  }
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  iVar10 = 8;
  do {
    bVar1 = iVar10 < (int)(uVar5 & 0xfffffffe);
    iVar10 = iVar10 << 1;
  } while (bVar1);
  local_210 = local_1f8;
  FUN_02ef5fd4(&local_220,PTR_PTR_047d1a50 + 0x20);
  if (uVar24 != 0) {
    lVar16 = (long)(int)local_208;
    puVar30 = (ulong *)*puVar27;
    uVar29 = puVar27[2];
    uVar31 = puVar27[3];
    if ((int)(local_208._4_4_ & 0x7fffffff) <= (int)local_208) {
      FUN_031f9ab0(&local_210,lVar16 + 1);
    }
    local_210[(int)local_208] = (long)puVar30;
    local_208 = CONCAT44(local_208._4_4_,(int)(lVar16 + 1));
    if (bVar8) {
      lVar16 = 1;
      puVar2 = PTR_PTR_047d1a50 + 0x20;
      do {
        puVar27 = puVar27 + lVar16 * 4;
        puVar25 = (ulong *)*puVar27;
        uVar3 = puVar27[2];
        uVar4 = puVar27[3];
        if (puVar25[1] == puVar30[1]) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_031e2760(uVar3,uVar4,uVar29,uVar31);
        }
        *puVar25 = *puVar25 & 0xfffffffffffffffc | *puVar25 & 1 | (ulong)(iVar10 == 0) << 1;
        if (iVar10 == 0) {
          uVar19 = puVar30[1];
          uVar28 = puVar25[1];
          FUN_031c5630(plVar18,uVar19,uVar28);
          if ((int)local_218._4_4_ < (int)local_218 * 2) {
            FUN_02ef5fd4(&local_220,puVar2,local_218._4_4_ * 2 + 2);
          }
          uVar5 = (int)uVar28 * -0x61c8864f;
          uVar24 = (int)(uVar28 >> 0x20) * -0x61c8864f;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = uVar6 + (uVar6 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5;
          while( true ) {
            uVar5 = local_218._4_4_ & uVar5;
            uVar22 = *(ulong *)(local_220 + (ulong)uVar5 * 0x10);
            if (uVar22 == 0xffffffffffffffff) break;
            if (uVar22 == uVar28) {
              iVar10 = 0;
              goto LAB_031f7690;
            }
            uVar5 = uVar5 + 1;
          }
          iVar10 = 1;
LAB_031f7690:
          local_218 = CONCAT44(local_218._4_4_,(int)local_218 + iVar10);
          *(ulong *)(local_220 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4))
               = uVar28;
          *(ulong *)(local_220 + (long)(int)uVar5 * 0x10 + 8) = uVar19;
        }
        else {
          lVar17 = (long)(int)local_208;
          if ((int)(local_208._4_4_ & 0x7fffffff) <= (int)local_208) {
            FUN_031f9ab0(&local_210,lVar17 + 1);
          }
          local_210[(int)local_208] = (long)puVar25;
          local_208 = CONCAT44(local_208._4_4_,(int)(lVar17 + 1));
          puVar30 = puVar25;
          uVar29 = uVar3;
          uVar31 = uVar4;
        }
        lVar16 = lVar16 + 1;
        if ((int)local_1e0 <= lVar16) break;
        puVar27 = local_1e8;
      } while( true );
    }
  }
  lVar16 = FUN_031f8280(&local_210,0,(int)local_208 + -1);
  param_1[3] = lVar16;
  uVar5 = *(uint *)(param_1 + 0x22);
  iVar10 = (int)local_208;
  lVar17 = (long)(int)local_208;
  local_1d8 = (char *)0x0;
  local_1d0 = 0x8000000000000000;
  lVar16 = *(long *)(lVar20 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar16;
  }
  puVar2 = PTR_PTR_047d1a50;
  local_1c8 = *(undefined8 **)(*(long *)(lVar16 + 0x3d0) + 0x10);
  if (*(long *)((long)local_1c8 + 8) != 0) {
    local_1c8 = (undefined8 *)0x0;
  }
  local_1b8 = lVar17 * 0x18;
  local_70[0] = local_1b8;
  if (local_1c8 == (undefined8 *)0x0) {
    pcVar13 = (char *)(**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
  }
  else {
    local_80 = local_1b8 + 0x3fU & 0xffffffffffffffc0;
    if (local_80 <= *(ulong *)((long)local_1c8 + 0x28)) {
      pcVar13 = *(char **)((long)local_1c8 + 0x38);
      if (pcVar13 + local_80 <= *(char **)((long)local_1c8 + 0x40)) {
        *(char **)((long)local_1c8 + 0x38) = pcVar13 + local_80;
        goto LAB_031f7790;
      }
    }
    pcVar13 = (char *)FUN_031cf3b4(local_1c8,&local_80);
  }
LAB_031f7790:
  local_1d0 = CONCAT44(iVar10,(int)local_1d0) | 0x8000000000000000;
  local_80 = 0;
  local_78 = 0xffffffff00000000;
  iVar10 = 8;
  do {
    bVar8 = iVar10 < (int)local_208 * 2;
    iVar10 = iVar10 << 1;
  } while (bVar8);
  local_1d8 = pcVar13;
  local_1c0 = pcVar13;
  FUN_02ef5fd4(&local_80,puVar2 + 0x20);
  if (0 < (int)local_208) {
    lVar20 = 0;
    do {
      FUN_031f8810(*(undefined8 *)(local_210[lVar20] + 8),&local_1d8,&local_80,&local_220);
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)local_208);
    uVar19 = local_1d0 & 0xffffffff;
    if (0 < (int)local_1d0) {
      uVar28 = 0;
      uVar11 = 0;
      piVar26 = (int *)(local_1d8 + 8);
      do {
        if (*piVar26 == -1) {
          uVar11 = FUN_031f8b30(uVar28 & 0xffffffff,&local_1d8,uVar11,uVar5);
        }
        uVar28 = uVar28 + 1;
        piVar26 = piVar26 + 6;
      } while (uVar19 != uVar28);
    }
  }
  if ((int)local_208 != 0) {
    plVar18 = local_210;
LAB_031f7874:
    puVar30 = *(ulong **)(*plVar18 + 8);
    puVar25 = puVar30;
    while( true ) {
      uVar24 = (uint)*puVar25;
      if ((uVar24 >> 0xd & 1) != 0) break;
      if (((*puVar25 & 1) != 0) || (puVar25 = (ulong *)puVar25[1], puVar25 == (ulong *)0x0))
      goto LAB_031f79e4;
    }
    if ((puVar25 != (ulong *)0x0) &&
       (uVar19 = CONCAT44(uVar24,uVar24) & 0x1fff00001fff,
       uVar19 = (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))),
       ((uint)puVar25[uVar19 + 2] & 3) != uVar5)) goto joined_r0x031f78cc;
    goto LAB_031f79e4;
  }
LAB_031f79f0:
  if (0 < (int)local_78._4_4_) {
    lVar16 = 0;
    lVar20 = (ulong)local_78._4_4_ + 1;
    do {
      if (*(long *)(local_80 + lVar16) != -1) {
        *(undefined8 *)(local_80 + lVar16) = 0xffffffffffffffff;
      }
      lVar20 = lVar20 + -1;
      lVar16 = lVar16 + 0x10;
    } while (lVar20 != 0);
  }
  iVar10 = (int)local_78;
  local_78 = local_78 & 0xffffffff80000000;
  if ((-1 < iVar10) && (local_80 != 0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))
              (puVar2 + 0x20,local_80,(long)(int)local_78._4_4_ * 0x10 + 0x10);
  }
  pcVar13 = local_1d8;
  if (local_1c0 == local_1d8) {
    local_1d0 = local_1d0 & 0xffffffff00000000;
  }
  if (local_1c8 == (undefined8 *)0x0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar19 = local_1b8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)((long)local_1c8 + 0x28) < uVar19) ||
       (*(char **)((long)local_1c8 + 0x38) != local_1c0 + uVar19)) {
      if (local_1c0 != (char *)0x0) {
        if (*(ulong *)((long)local_1c8 + 0x28) < uVar19 + 0x40) {
          *(int *)(*(long *)((long)local_1c8 + 0x30) + 0x20) =
               *(int *)(*(long *)((long)local_1c8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)((long)local_1c8 + 0x10) + 0x18))
                    (*(long **)((long)local_1c8 + 0x10),
                     (long)local_1c0 - (long)*(int *)(local_1c0 + -4),uVar19 + 0x44);
        }
        else {
          if (*(char **)((long)local_1c8 + 0x38) == local_1c0 + uVar19) {
            *(char **)((long)local_1c8 + 0x38) = local_1c0;
            goto LAB_031f7b40;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(char **)((long)local_1c8 + 0x38) = local_1c0;
      if (*(char **)((long)local_1c8 + 0x48) == local_1c0) {
LAB_031f7b40:
        FUN_031cf578();
      }
    }
  }
  uVar28 = local_1d0;
  uVar19 = local_1d0 >> 0x20;
  local_1d0 = uVar19 << 0x20;
  if ((pcVar13 != (char *)0x0) && (-1 < (long)uVar28)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,pcVar13,uVar19 * 0x18);
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar8) {
      *(long *)puVar9 = *(long *)puVar9 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  (**(code **)(*param_1 + 0x50))(param_1);
  if (0 < (int)local_218._4_4_) {
    lVar16 = 0;
    lVar20 = (ulong)local_218._4_4_ + 1;
    do {
      if (*(long *)(local_220 + lVar16) != -1) {
        *(undefined8 *)(local_220 + lVar16) = 0xffffffffffffffff;
      }
      lVar20 = lVar20 + -1;
      lVar16 = lVar16 + 0x10;
    } while (lVar20 != 0);
  }
  iVar10 = (int)local_218;
  local_218 = local_218 & 0xffffffff80000000;
  if ((-1 < iVar10) && (local_220 != 0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))
              (puVar2 + 0x20,local_220,(long)(int)local_218._4_4_ * 0x10 + 0x10);
  }
  if (local_1f8 == local_210) {
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_200 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_031f7cc8;
  }
  uVar19 = local_1f0 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_200 + 0x28) < uVar19) ||
     (*(long *)(local_200 + 0x38) != uVar19 + (long)local_1f8)) {
    if (local_1f8 == (long *)0x0) goto LAB_031f7cc8;
    if (*(ulong *)(local_200 + 0x28) < uVar19 + 0x40) {
      *(int *)(*(long *)(local_200 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_200 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_200 + 0x10) + 0x18))
                (*(long **)(local_200 + 0x10),(long)local_1f8 - (long)*(int *)((long)local_1f8 + -4)
                 ,uVar19 + 0x44);
      goto LAB_031f7cc8;
    }
    if (*(long *)(local_200 + 0x38) != uVar19 + (long)local_1f8) {
      FUN_031cf778();
      goto LAB_031f7cc8;
    }
    *(long **)(local_200 + 0x38) = local_1f8;
  }
  else {
    *(long **)(local_200 + 0x38) = local_1f8;
    if (*(long **)(local_200 + 0x48) != local_1f8) goto LAB_031f7cc8;
  }
  FUN_031cf578();
LAB_031f7cc8:
  uVar19 = local_208;
  uVar28 = (ulong)local_208._4_4_;
  local_208 = (ulong)local_208._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_210 != (long *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_210,uVar28 << 3);
  }
  uVar19 = local_1e0;
  uVar28 = (ulong)local_1e0._4_4_;
  local_1e0 = (ulong)local_1e0._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_1e8 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,local_1e8,uVar28 << 5);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 6));
  return;
joined_r0x031f78cc:
  for (; (puVar30 != (ulong *)0x0 && ((*puVar30 & 1) == 0)); puVar30 = (ulong *)puVar30[1]) {
  }
  puVar23 = puVar30;
  while( true ) {
    uVar24 = (uint)*puVar23;
    if ((uVar24 >> 0xf & 1) != 0) break;
    if (((*puVar23 & 9) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
    goto LAB_031f792c;
  }
  uVar24 = uVar24 & 0x7fff;
  if (((undefined8 *)
       puVar23[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))) + 2] !=
       (undefined8 *)0x0) &&
     (puVar23 = *(ulong **)
                 puVar23[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))) + 2],
     puVar23 != (ulong *)0x0)) goto LAB_031f7930;
LAB_031f792c:
  puVar23 = puVar30;
LAB_031f7930:
  if ((int)local_218._4_4_ < 1) goto LAB_031f79b0;
  uVar24 = (int)puVar23 * -0x61c8864f;
  uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
  uVar6 = uVar24 >> 0x10 | uVar24 << 0x10;
  uVar24 = (int)((ulong)puVar23 >> 0x20) * -0x61c8864f;
  uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
  uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
  uVar28 = (ulong)((uVar6 + (uVar6 >> 2) + uVar24 * 0x40 + 0x9e3779b9 ^ uVar24) & local_218._4_4_);
  puVar30 = *(ulong **)(local_220 + uVar28 * 0x10);
  if (puVar30 == (ulong *)0xffffffffffffffff) goto LAB_031f79b0;
  if (puVar30 != puVar23) {
    do {
      uVar28 = (ulong)((int)uVar28 + 1U & local_218._4_4_);
      puVar30 = *(ulong **)(local_220 + uVar28 * 0x10);
      if (puVar30 == (ulong *)0xffffffffffffffff) goto LAB_031f79b0;
    } while (puVar30 != puVar23);
  }
  puVar23 = (ulong *)(local_220 + uVar28 * 0x10);
  do {
    puVar23 = (ulong *)puVar23[1];
LAB_031f79b0:
    uVar24 = (uint)*puVar23;
  } while ((uVar24 >> 0xd & 1) == 0);
  uVar28 = CONCAT44(uVar24,uVar24) & 0x1fff00001fff;
  puVar25[uVar19 + 2] =
       (long)(int)puVar23[(ulong)(byte)(POPCOUNT((char)uVar28) + POPCOUNT((char)(uVar28 >> 8))) + 2]
  ;
LAB_031f79e4:
  plVar18 = plVar18 + 1;
  if (plVar18 == local_210 + (int)local_208) goto LAB_031f79f0;
  goto LAB_031f7874;
}


