/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221cbb0; name: FUN_0221cbb0
 */


void FUN_0221cbb0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5,undefined8 param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ThreadType *pTVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong *local_2f8;
  ulong *local_2f0;
  undefined8 uStack_2e8;
  undefined8 *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  ulong *local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  ulong local_2a0 [32];
  ulong *local_1a0;
  long local_198;
  ulong *local_190;
  ulong local_188;
  undefined1 auStack_180 [8];
  long *local_178;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  long local_88;
  long *local_80;
  ulong *local_78;
  ulong *local_70 [2];
  
  lVar18 = tpidr_el0;
  lVar14 = *(long *)(lVar18 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar14;
  }
  plVar21 = *(long **)(lVar14 + 0x3e0);
  if (plVar21 != (long *)0x0) {
    lVar14 = *plVar21;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("hkSerialize::Load::toVar",0x18,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar2 = (undefined8 *)plVar21[2];
    uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar21[3]) && (plVar21[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TthkSerialize::Load::toVar";
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar2 = (undefined8 *)plVar21[2];
      uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar21[3]) && (plVar21[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
  }
  FUN_0320afbc(param_2[3]);
  plVar10 = (long *)FUN_033b87e4(param_2,param_3,param_4,param_6);
  if (plVar10 == (long *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    goto LAB_0221d54c;
  }
  lVar14 = *(long *)(lVar18 + 0x1000b8);
  local_78 = param_5;
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar14;
  }
  plVar20 = *(long **)(lVar14 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))
                ("Clone to native (hkReflect::Var)",0x20,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar2 = (undefined8 *)plVar20[2];
    uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar20[3]) && (plVar20[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtClone to native (hkReflect::Var)";
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar2 = (undefined8 *)plVar20[2];
      uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar20[3]) && (plVar20[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  local_80 = plVar20;
  FUN_0320afbc(param_2[3]);
  puVar6 = PTR_DAT_047d1a08;
  local_2f0 = (ulong *)&DAT_000000c0;
  lVar14 = (**(code **)PTR_DAT_047d1a08)(0,&local_2f0,0);
  if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
    (**(code **)(puVar6 + 0x10))(lVar14,"CloneImpl");
  }
  FUN_00cb44e4(lVar14);
  local_98 = &DAT_03d7702c;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_88 = lVar14;
  iVar8 = FUN_033b9be0(plVar10,&local_88,&local_a8);
  if (iVar8 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    FUN_033ba284(auStack_180,plVar10,param_2[4],*param_2,&local_88,&local_a8,param_2[6],
                 *(undefined1 *)(param_2 + 5));
    (**(code **)(*plVar10 + 0x10))(&local_198,plVar10);
    if (param_5 == (ulong *)0x0) {
LAB_0221d0d4:
      if (local_198 == 0) goto LAB_0221d338;
      lVar14 = *(long *)(lVar18 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar18 + 0x1000b8) = lVar14;
      }
      puVar19 = *(ulong **)(lVar14 + 0x3e0);
      if (puVar19 != (ulong *)0x0) {
        uVar15 = *puVar19;
        if (*(code **)(uVar15 + 0x18) != (code *)0x0) {
          (**(code **)(uVar15 + 0x18))("Clone",5,*(undefined8 *)(uVar15 + 0x28));
        }
        puVar2 = (undefined8 *)puVar19[2];
        uVar16 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= puVar19[3]) && (puVar19[2] = uVar16, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = "TtClone";
          uVar9 = nn::os::GetSystemTick();
          puVar2[1] = uVar9;
        }
        if (((*(byte *)(uVar15 + 0x38) & 1) != 0) && (puVar19[6] != 0)) {
          puVar2 = (undefined8 *)puVar19[2];
          uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= puVar19[3]) && (puVar19[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = &DAT_03c4e575;
            puVar2[1] = *(undefined8 *)(puVar19[6] + 8);
          }
        }
      }
      local_70[0] = puVar19;
      FUN_0320b0e8(param_1,param_2[3],&local_198,auStack_180);
      if (*param_1 == 0) {
        if (DAT_0488e610 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_0221d658;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_2f0 = (ulong *)0x0;
            local_2e0 = &DAT_0488e5c0;
            uStack_2d8 = 2;
            pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
            local_2d0 = nn::os::GetThreadId(pTVar11);
            local_2c8 = (ulong *)0x0;
            local_2c0 = 0;
            local_2b8 = (char *)0x0;
            local_2b0 = 0;
            uStack_2a8 = 0;
            FUN_0322c554(&local_2f0,"Unable to clone contents",PTR_DAT_047d1b38);
            local_2b8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
            ;
            local_2b0 = 0x361;
            FUN_0322c8e0(&local_2f0);
          }
          else {
LAB_0221d658:
            local_2f0 = (ulong *)0x0;
            local_2e0 = &DAT_0488e5c0;
            uStack_2d8 = 2;
            pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
            local_2d0 = nn::os::GetThreadId(pTVar11);
            local_2c0 = 0;
            local_2b8 = (char *)0x0;
            local_2b0 = 0;
            uStack_2a8 = 0;
            local_2a0[0]._0_1_ = '\0';
            uStack_2e8 = 0x10000000000;
            local_2f0 = local_2a0;
            local_2c8 = local_2a0;
            FUN_0322c554(&local_2f0,"Unable to clone contents",PTR_DAT_047d1b38);
            local_2b8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
            ;
            local_2b0 = 0x361;
            if ((char)local_2a0[0] != '\0') {
              sVar13 = strlen((char *)local_2a0);
              *(undefined2 *)
               ((long)local_2a0 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
              printf("%s",local_2a0);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_2c8 & 1) != 0) {
            (**(code **)(puVar6 + 8))(0,(byte *)((long)local_2c8 + -1),0);
          }
        }
        if ((param_1[2] & 1U) != 0) {
          plVar12 = (long *)(param_1[2] & 0xfffffffffffffffe);
          plVar10 = plVar12 + 1;
          do {
            lVar18 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *(int *)plVar10 = (int)lVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar4 = true;
          if ((plVar12 == (long *)0x0) || ((int)lVar18 != 1)) goto LAB_0221d2a0;
          (**(code **)(*plVar12 + 8))();
        }
        bVar4 = true;
      }
      else {
        (**(code **)(*plVar10 + 0x28))(plVar10);
        bVar4 = false;
      }
LAB_0221d2a0:
      if (puVar19 != (ulong *)0x0) {
        uVar15 = *puVar19;
        if (((*(byte *)(uVar15 + 0x38) & 1) != 0) && (puVar19[6] != 0)) {
          puVar2 = (undefined8 *)puVar19[2];
          uVar16 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= puVar19[3]) && (puVar19[2] = uVar16, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = &DAT_03c4e575;
            puVar2[1] = *(undefined8 *)(puVar19[6] + 8);
          }
        }
        puVar2 = (undefined8 *)puVar19[2];
        uVar16 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= puVar19[3]) && (puVar19[2] = uVar16, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = &DAT_03c2d363;
          uVar9 = nn::os::GetSystemTick();
          puVar2[1] = uVar9;
        }
        if (*(code **)(uVar15 + 0x20) != (code *)0x0) {
          (**(code **)(uVar15 + 0x20))(*(undefined8 *)(uVar15 + 0x28));
        }
      }
      if (bVar4) goto LAB_0221d338;
    }
    else {
      local_1a0 = (ulong *)(**(code **)(*local_178 + 0x28))(local_178,local_190);
      if (local_1a0 == (ulong *)0x0) {
        if (DAT_0488e610 < 2) {
          if (DAT_046aaf68 != '\0') {
LAB_0221cf20:
            local_2f0 = (ulong *)0x0;
            local_2e0 = &DAT_0488e5c0;
            uStack_2d8 = 2;
            pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
            local_2d0 = nn::os::GetThreadId(pTVar11);
            local_2f0 = local_2a0;
            local_2c0 = 0;
            local_2b8 = (char *)0x0;
            uStack_2e8 = 0x10000000000;
            local_2a0[0]._0_1_ = '\0';
            local_2f8 = local_190;
            local_2b0 = 0;
            uStack_2a8 = 0;
            local_2c8 = local_2f0;
            FUN_0322c554(&local_2f0,
                         "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                         ,&DAT_047b4818,&local_2f8,&local_78);
            local_2b0 = 0x351;
            goto LAB_0221d770;
          }
          goto LAB_0221d338;
        }
        if (DAT_046aaf68 != '\0') goto LAB_0221cf20;
        local_2f0 = (ulong *)0x0;
        local_2e0 = &DAT_0488e5c0;
        uStack_2d8 = 2;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        local_2d0 = nn::os::GetThreadId(pTVar11);
        local_2c8 = (ulong *)0x0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        uStack_2a8 = 0;
        local_70[0] = local_190;
        FUN_0322c554(&local_2f0,
                     "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                     ,&DAT_047b4818,local_70,&local_78);
        local_2b0 = 0x351;
LAB_0221d080:
        local_2b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
        ;
        FUN_0322c8e0(&local_2f0);
      }
      else {
        if (local_1a0 == param_5) goto LAB_0221d0d4;
        local_2f0 = local_1a0;
        do {
          uVar17 = (uint)*local_2f0;
          if ((uVar17 >> 0xd & 1) != 0) {
            uVar15 = CONCAT44(uVar17,uVar17) & 0x1fff00001fff;
            local_2f0 = local_2f0 +
                        (ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8))) + 2;
            goto LAB_0221cfb8;
          }
        } while (((*local_2f0 & 1) == 0) &&
                (local_2f0 = (ulong *)local_2f0[1], local_2f0 != (ulong *)0x0));
        local_2f0 = (ulong *)0x0;
LAB_0221cfb8:
        local_70[0] = param_5;
        while( true ) {
          uVar17 = (uint)*local_70[0];
          if ((uVar17 >> 0xd & 1) != 0) break;
          if (((*local_70[0] & 1) != 0) ||
             (local_70[0] = (ulong *)local_70[0][1], local_70[0] == (ulong *)0x0))
          goto LAB_0221d0ac;
        }
        if (local_70[0] != (ulong *)0x0) {
          uVar15 = CONCAT44(uVar17,uVar17) & 0x1fff00001fff;
          local_70[0] = local_70[0] +
                        (ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8))) + 2;
          if (local_2f0 == (ulong *)0x0) goto LAB_0221d0b0;
          uVar15 = FUN_031dd354(&local_2f0,local_70);
          if ((uVar15 & 1) != 0) goto LAB_0221d0d4;
          goto LAB_0221d010;
        }
LAB_0221d0ac:
        local_70[0] = (ulong *)0x0;
LAB_0221d0b0:
        do {
          puVar19 = local_1a0;
          if ((*param_5 & 1) != 0) break;
          param_5 = (ulong *)param_5[1];
        } while (param_5 != (ulong *)0x0);
        do {
          if (puVar19 == param_5) goto LAB_0221d0d4;
          puVar1 = puVar19 + 1;
          puVar19 = (ulong *)*puVar1;
        } while ((ulong *)*puVar1 != (ulong *)0x0);
LAB_0221d010:
        if (DAT_0488e610 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_0221d338;
        }
        else if (DAT_046aaf68 == '\0') {
          local_2f0 = (ulong *)0x0;
          local_2e0 = &DAT_0488e5c0;
          uStack_2d8 = 2;
          pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
          local_2d0 = nn::os::GetThreadId(pTVar11);
          local_2c8 = (ulong *)0x0;
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          local_2b0 = 0;
          uStack_2a8 = 0;
          FUN_0322c554(&local_2f0,
                       "Loaded type mismatch, requested type {} from a stream containing {}",
                       &DAT_047b4818,&local_78,&local_1a0);
          local_2b0 = 0x353;
          goto LAB_0221d080;
        }
        local_2f0 = (ulong *)0x0;
        local_2e0 = &DAT_0488e5c0;
        uStack_2d8 = 2;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        local_2d0 = nn::os::GetThreadId(pTVar11);
        local_2f0 = local_2a0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2a0[0]._0_1_ = '\0';
        local_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2e8 = 0x10000000000;
        local_2c8 = local_2f0;
        FUN_0322c554(&local_2f0,
                     "Loaded type mismatch, requested type {} from a stream containing {}",
                     &DAT_047b4818,&local_78,&local_1a0);
        local_2b0 = 0x353;
LAB_0221d770:
        local_2b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
        ;
        if ((char)local_2a0[0] != '\0') {
          sVar13 = strlen((char *)local_2a0);
          *(undefined2 *)((long)local_2a0 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))
               = 10;
          printf("%s",local_2a0);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_2c8 & 1) != 0) {
        (**(code **)(puVar6 + 8))(0,(byte *)((long)local_2c8 + -1),0);
      }
LAB_0221d338:
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if ((local_188 & 1) != 0) {
      plVar12 = (long *)(local_188 & 0xfffffffffffffffe);
      plVar10 = plVar12 + 1;
      do {
        lVar18 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar18 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    FUN_033ba3f0(auStack_180);
  }
  if ((local_98 != (undefined *)0x0) && (*(int *)(local_98 + 4) != -2)) {
    (**(code **)(puVar6 + 8))(PTR_PTR_047d1a50[8],local_98,0);
    local_98 = &DAT_03d7702c;
    local_90 = 0;
  }
  lVar18 = local_a8;
  puVar7 = PTR_PTR_047d1a50;
  if ((int)local_a0 != 0) {
    lVar14 = local_a8 + (long)(int)local_a0 * 0x18;
    do {
      if (*(int *)(lVar14 + -8) != 0) {
        lVar22 = *(long *)(lVar14 + -0x10);
        lVar23 = lVar22 + (long)*(int *)(lVar14 + -8) * 0x18;
        do {
          puVar19 = (ulong *)(lVar23 + -8);
          lVar23 = lVar23 + -0x18;
          if ((*puVar19 & 1) != 0) {
            plVar12 = (long *)(*puVar19 & 0xfffffffffffffffe);
            plVar10 = plVar12 + 1;
            do {
              lVar5 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *(int *)plVar10 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        } while (lVar23 != lVar22);
      }
      lVar22 = lVar14 + -0x18;
      *(undefined4 *)(lVar14 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar14 + -4)) && (*(long *)(lVar14 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*(long *)(lVar14 + -0x10),(ulong)*(uint *)(lVar14 + -4) * 0x18);
      }
      *(undefined8 *)(lVar14 + -0x10) = 0;
      *(undefined4 *)(lVar14 + -4) = 0x80000000;
      lVar14 = lVar22;
    } while (lVar22 != lVar18);
  }
  lVar18 = local_a0;
  uVar15 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar15 * 0x18);
  }
  lVar18 = local_88;
  if (local_88 != 0) {
    FUN_00cb4718(local_88);
    (**(code **)(puVar6 + 8))(0,lVar18,0);
  }
  if (plVar20 != (long *)0x0) {
    lVar18 = *plVar20;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar2 = (undefined8 *)plVar20[2];
      uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar20[3]) && (plVar20[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar20[2];
    uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar20[3]) && (plVar20[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
LAB_0221d54c:
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar2 = (undefined8 *)plVar21[2];
      uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar21[3]) && (plVar21[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar21[2];
    uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar21[3]) && (plVar21[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return;
}


