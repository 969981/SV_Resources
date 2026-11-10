/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03210a10; name: FUN_03210a10
 */


long * FUN_03210a10(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  ThreadType *pTVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  int iVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  byte *local_208;
  long local_200;
  ulong local_1f8;
  byte *local_1f0;
  byte *pbStack_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  byte *local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0 [256];
  byte *local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  for (pbVar12 = (byte *)param_2[1]; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
  }
  switch(*(uint *)(pbVar12 + 0x10) & 0x1f) {
  case 0:
    break;
  case 1:
    pbVar12 = (byte *)param_3[1];
    plVar8 = param_1;
    if (pbVar12 == (byte *)0x0) {
LAB_0321151c:
      uVar17 = 0;
LAB_03211520:
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_032118e8;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a94c0,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_032118e8:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a94c0,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          pbVar12 = local_78;
          if (((ulong)local_78 & 1) != 0) goto LAB_03212054;
        }
      }
    }
    else {
      for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 1) goto LAB_0321151c;
      lVar19 = *param_3;
      uVar17 = param_3[2];
      if ((uVar17 & 1) != 0) {
        piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar17 = param_3[2];
      }
      if (lVar19 == 0) goto LAB_03211520;
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_0321303c;
        goto LAB_03212514;
      }
      if (DAT_046aaf68 == '\0') {
        local_1f0 = (byte *)0x0;
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1c8 = (byte *)0x0;
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        FUN_0322c554(&local_1f0,"Cannot clone an object of type Opaque",PTR_DAT_047d1b38);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1b0 = 0x20d;
        plVar8 = (long *)FUN_0322c8e0(&local_1f0);
      }
      else {
LAB_0321303c:
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0[0] = 0;
        pbStack_1e8 = (byte *)0x10000000000;
        local_1f0 = local_1a0;
        local_1c8 = local_1a0;
        plVar8 = (long *)FUN_0322c554(&local_1f0,"Cannot clone an object of type Opaque",
                                      PTR_DAT_047d1b38);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1b0 = 0x20d;
        if (local_1a0[0] != 0) {
          sVar9 = strlen((char *)local_1a0);
          (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
          (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
          printf("%s",local_1a0);
          uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar8 = (long *)(ulong)uVar6;
        }
      }
      pbVar12 = local_1c8;
      if (((ulong)local_1c8 & 1) == 0) goto LAB_03212514;
LAB_03212054:
      plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,pbVar12 + -1,0);
    }
LAB_03212514:
    *(undefined4 *)(param_1 + 1) = 0x80040200;
    if ((uVar17 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 2:
    pbVar12 = (byte *)param_3[1];
    if (pbVar12 == (byte *)0x0) {
LAB_0321124c:
      uVar17 = 0;
LAB_03211250:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_03211820;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9658,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_03211820:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9658,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          pbVar12 = local_78;
          if (((ulong)local_78 & 1) != 0) {
LAB_03212660:
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,pbVar12 + -1,0);
          }
        }
      }
LAB_03212ac8:
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      pbVar15 = pbVar12;
      if ((*pbVar12 & 1) == 0) {
        do {
          pbVar15 = *(byte **)(pbVar15 + 8);
        } while ((*pbVar15 & 1) == 0);
      }
      if ((*(ulong *)(pbVar15 + 0x10) & 0x1f) != 2) goto LAB_0321124c;
      lVar19 = *param_3;
      uVar17 = param_3[2];
      if ((uVar17 & 1) != 0) {
        piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar17 = param_3[2];
      }
      if (lVar19 == 0) goto LAB_03211250;
      local_220 = (ulong *)((ulong)local_220 & 0xffffffffffffff00);
      plVar8 = (long *)(**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                                 ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
                                  &local_220);
      if ((int)plVar8 < 0) {
        if (1 < DAT_04884f08) {
          if (DAT_046aaf68 == '\0') {
            local_1f0 = (byte *)0x0;
            local_1e0 = &DAT_04884eb8;
            local_1d8 = 2;
            pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
            local_1d0 = nn::os::GetThreadId(pTVar7);
            local_1c8 = (byte *)0x0;
            local_1c0 = 0;
            local_1b8 = (char *)0x0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",&DAT_046a97f0,param_2);
            local_1b0 = 0x1ed;
LAB_0321264c:
            local_1b8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            plVar8 = (long *)FUN_0322c8e0(&local_1f0);
            goto LAB_03212658;
          }
LAB_03212880:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1f0 = local_1a0;
          local_1c8 = local_1a0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",
                                        &DAT_046a97f0,param_2);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1b0 = 0x1ed;
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
            goto LAB_032132f8;
          }
          goto LAB_03212658;
        }
        if (DAT_046aaf68 != '\0') goto LAB_03212880;
        goto LAB_03212ac8;
      }
      plVar8 = (long *)(**(code **)(*(long *)(uVar17 & 0xfffffffffffffffe) + 0x30))
                                 ((long *)(uVar17 & 0xfffffffffffffffe),lVar19,pbVar12,
                                  (ulong)local_220 & 0xff);
      if ((int)plVar8 < 0) {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_03212ac8;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1f0 = (byte *)0x0;
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c8 = (byte *)0x0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_a0 = (byte *)param_2[1];
          local_208 = pbVar12;
          FUN_0322c554(&local_1f0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                       &DAT_046a9800,param_2,&local_a0,&local_208);
          local_1b0 = 0x1f2;
          goto LAB_0321264c;
        }
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        pbStack_1e8 = (byte *)0x10000000000;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0[0] = 0;
        local_210 = (ulong *)param_2[1];
        local_218 = pbVar12;
        local_1f0 = local_1a0;
        local_1c8 = local_1a0;
        plVar8 = (long *)FUN_0322c554(&local_1f0,
                                      "Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                                      &DAT_046a9800,param_2,&local_210,&local_218);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1b0 = 0x1f2;
        if (local_1a0[0] != 0) {
          sVar9 = strlen((char *)local_1a0);
          pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
LAB_032132f8:
          pbVar12[0x50] = 10;
          pbVar12[0x51] = 0;
          printf("%s",local_1a0);
          uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar8 = (long *)(ulong)uVar6;
        }
LAB_03212658:
        pbVar12 = local_1c8;
        if (((ulong)local_1c8 & 1) == 0) goto LAB_03212ac8;
        goto LAB_03212660;
      }
    }
    if ((uVar17 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 3:
    puVar14 = (ulong *)param_3[1];
    if (puVar14 == (ulong *)0x0) {
LAB_032112b4:
      uVar17 = 0;
LAB_032112b8:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_03211884;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9820,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_03211884:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9820,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          if (((ulong)local_78 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 + -1,0);
          }
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      puVar13 = puVar14;
      if ((*puVar14 & 1) == 0) {
        do {
          puVar13 = (ulong *)puVar13[1];
        } while ((*puVar13 & 1) == 0);
      }
      if ((puVar13[2] & 0x1f) != 3) goto LAB_032112b4;
      lVar19 = *param_3;
      uVar17 = param_3[2];
      if ((uVar17 & 1) != 0) {
        piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar17 = param_3[2];
      }
      if (lVar19 == 0) goto LAB_032112b8;
      if (((puVar14 < (ulong *)0x2) || (uVar6 = (uint)*puVar14, (uVar6 >> 0x11 & 1) == 0)) ||
         (uVar16 = CONCAT44(uVar6,uVar6) & 0x1ffff0001ffff,
         (puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                               POPCOUNT((char)(uVar16 >> 0x10))) + 2] & 0x300000) == 0 ||
         (puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                               POPCOUNT((char)(uVar16 >> 0x10))) + 2] & 0x400000) == 0)) {
        uVar16 = uVar17;
        if ((uVar17 & 1) != 0) {
          piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        puVar14 = (ulong *)puVar14[1];
        puVar13 = puVar14;
        if ((*puVar14 & 1) == 0) {
          do {
            puVar13 = (ulong *)puVar13[1];
          } while ((*puVar13 & 1) == 0);
        }
        if ((puVar13[2] & 0x1f) != 3) {
          puVar14 = (ulong *)0x0;
        }
        if (puVar14 != (ulong *)0x0) {
          puVar13 = puVar14;
          do {
            uVar16 = *puVar13;
            if (((uint)uVar16 >> 2 & 1) != 0) {
              uVar16 = puVar13[(uVar16 >> 1 & 1) + (uVar16 & 1) + 2];
              goto LAB_03212be4;
            }
            puVar13 = (ulong *)puVar13[1];
          } while (puVar13 != (ulong *)0x0);
        }
        uVar16 = 0;
LAB_03212be4:
        if ((uVar16 & 1) != 0) {
          piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      local_a0 = (byte *)0x0;
      plVar8 = (long *)(**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                                 ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
                                  &local_a0);
      if ((int)plVar8 < 0) {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_0321290c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1f0 = (byte *)0x0;
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c8 = (byte *)0x0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",&DAT_046a99b8,param_2);
          local_1b0 = 0x1ed;
LAB_032126ec:
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          plVar8 = (long *)FUN_0322c8e0(&local_1f0);
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        else {
LAB_0321290c:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1f0 = local_1a0;
          local_1c8 = local_1a0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",
                                        &DAT_046a99b8,param_2);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1b0 = 0x1ed;
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
LAB_03212af8:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
      }
      else {
        plVar8 = (long *)(**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x30))
                                   ((long *)(uVar16 & 0xfffffffffffffffe),lVar19,puVar14,local_a0);
        if ((int)plVar8 < 0) {
          if (DAT_04884f08 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_03212af8;
          }
          else if (DAT_046aaf68 == '\0') {
            local_1f0 = (byte *)0x0;
            local_1e0 = &DAT_04884eb8;
            local_1d8 = 2;
            pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
            local_1d0 = nn::os::GetThreadId(pTVar7);
            local_1c8 = (byte *)0x0;
            local_1c0 = 0;
            local_1b8 = (char *)0x0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_208 = (byte *)param_2[1];
            local_210 = puVar14;
            FUN_0322c554(&local_1f0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                         &DAT_046a99c8,param_2,&local_208,&local_210);
            local_1b0 = 0x1f2;
            goto LAB_032126ec;
          }
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0[0] = 0;
          local_218 = (byte *)param_2[1];
          local_220 = puVar14;
          local_1f0 = local_1a0;
          local_1c8 = local_1a0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'"
                                        ,&DAT_046a99c8,param_2,&local_218,&local_220);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1b0 = 0x1f2;
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
          goto LAB_03212af8;
        }
      }
      if ((uVar16 & 1) != 0) {
        plVar8 = (long *)(uVar16 & 0xfffffffffffffffe);
        plVar10 = plVar8 + 1;
        do {
          lVar19 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
          plVar8 = (long *)(**(code **)(*plVar8 + 8))();
        }
      }
    }
    if ((uVar17 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 4:
    puVar14 = (ulong *)param_3[1];
    if (puVar14 == (ulong *)0x0) {
LAB_032111e4:
      uVar17 = 0;
LAB_032111e8:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_032117bc;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a99e8,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_032117bc:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a99e8,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          pbVar12 = local_78;
          if (((ulong)local_78 & 1) != 0) {
LAB_032125c0:
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,pbVar12 + -1,0);
          }
        }
      }
LAB_03212a98:
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      puVar13 = puVar14;
      if ((*puVar14 & 1) == 0) {
        do {
          puVar13 = (ulong *)puVar13[1];
        } while ((*puVar13 & 1) == 0);
      }
      if ((puVar13[2] & 0x1f) != 4) goto LAB_032111e4;
      lVar19 = *param_3;
      uVar17 = param_3[2];
      if ((uVar17 & 1) != 0) {
        piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar17 = param_3[2];
      }
      if (lVar19 == 0) goto LAB_032111e8;
      local_a0 = (byte *)0x0;
      local_98 = 0;
      plVar8 = (long *)(**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                                 ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
                                  &local_a0);
      if ((int)plVar8 < 0) {
        if (1 < DAT_04884f08) {
          if (DAT_046aaf68 == '\0') {
            local_1f0 = (byte *)0x0;
            local_1e0 = &DAT_04884eb8;
            local_1d8 = 2;
            pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
            local_1d0 = nn::os::GetThreadId(pTVar7);
            local_1c8 = (byte *)0x0;
            local_1c0 = 0;
            local_1b8 = (char *)0x0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",&DAT_046a9b80,param_2);
            local_1b0 = 0x1ed;
LAB_032125ac:
            local_1b8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            plVar8 = (long *)FUN_0322c8e0(&local_1f0);
            goto LAB_032125b8;
          }
LAB_032127f4:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1f0 = local_1a0;
          local_1c8 = local_1a0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",
                                        &DAT_046a9b80,param_2);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1b0 = 0x1ed;
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
            goto LAB_03213230;
          }
          goto LAB_032125b8;
        }
        if (DAT_046aaf68 != '\0') goto LAB_032127f4;
        goto LAB_03212a98;
      }
      pbStack_1e8 = (byte *)CONCAT71(uStack_97,local_98);
      local_1f0 = local_a0;
      plVar8 = (long *)(**(code **)(*(long *)(uVar17 & 0xfffffffffffffffe) + 0x30))
                                 ((long *)(uVar17 & 0xfffffffffffffffe),lVar19,puVar14,&local_1f0);
      if ((int)plVar8 < 0) {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_03212a98;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1f0 = (byte *)0x0;
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c8 = (byte *)0x0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_2[1];
          local_210 = puVar14;
          FUN_0322c554(&local_1f0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                       &DAT_046a9b90,param_2,&local_208,&local_210);
          local_1b0 = 0x1f2;
          goto LAB_032125ac;
        }
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        pbStack_1e8 = (byte *)0x10000000000;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0[0] = 0;
        local_218 = (byte *)param_2[1];
        local_220 = puVar14;
        local_1f0 = local_1a0;
        local_1c8 = local_1a0;
        plVar8 = (long *)FUN_0322c554(&local_1f0,
                                      "Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                                      &DAT_046a9b90,param_2,&local_218,&local_220);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1b0 = 0x1f2;
        if (local_1a0[0] != 0) {
          sVar9 = strlen((char *)local_1a0);
          pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
LAB_03213230:
          pbVar12[0x50] = 10;
          pbVar12[0x51] = 0;
          printf("%s",local_1a0);
          uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar8 = (long *)(ulong)uVar6;
        }
LAB_032125b8:
        pbVar12 = local_1c8;
        if (((ulong)local_1c8 & 1) == 0) goto LAB_03212a98;
        goto LAB_032125c0;
      }
    }
    if ((uVar17 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 5:
    puVar14 = (ulong *)param_3[1];
    if (puVar14 == (ulong *)0x0) {
LAB_0321131c:
      uVar17 = 0;
LAB_03211320:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_03211a14;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9bb0,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_03211a14:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9bb0,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          pbVar12 = local_78;
          if (((ulong)local_78 & 1) != 0) {
LAB_032127a0:
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,pbVar12 + -1,0);
          }
        }
      }
LAB_03212b40:
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      puVar13 = puVar14;
      if ((*puVar14 & 1) == 0) {
        do {
          puVar13 = (ulong *)puVar13[1];
        } while ((*puVar13 & 1) == 0);
      }
      if ((puVar13[2] & 0x1f) != 5) goto LAB_0321131c;
      lVar19 = *param_3;
      uVar17 = param_3[2];
      if ((uVar17 & 1) != 0) {
        piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar17 = param_3[2];
      }
      if (lVar19 == 0) goto LAB_03211320;
      local_a0 = (byte *)0x0;
      plVar8 = (long *)(**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                                 ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],
                                  &local_a0);
      if ((int)plVar8 < 0) {
        if (1 < DAT_04884f08) {
          if (DAT_046aaf68 == '\0') {
            local_1f0 = (byte *)0x0;
            local_1e0 = &DAT_04884eb8;
            local_1d8 = 2;
            pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
            local_1d0 = nn::os::GetThreadId(pTVar7);
            local_1c8 = (byte *)0x0;
            local_1c0 = 0;
            local_1b8 = (char *)0x0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",&DAT_046a9d48,param_2);
            local_1b0 = 0x1ed;
LAB_0321278c:
            local_1b8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            plVar8 = (long *)FUN_0322c8e0(&local_1f0);
            goto LAB_03212798;
          }
LAB_032129ec:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1f0 = local_1a0;
          local_1c8 = local_1a0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,"Failed to get value from Var \'{}\'",
                                        &DAT_046a9d48,param_2);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1b0 = 0x1ed;
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
            goto LAB_032134b4;
          }
          goto LAB_03212798;
        }
        if (DAT_046aaf68 != '\0') goto LAB_032129ec;
        goto LAB_03212b40;
      }
      plVar8 = (long *)(**(code **)(*(long *)(uVar17 & 0xfffffffffffffffe) + 0x30))
                                 (local_a0,(long *)(uVar17 & 0xfffffffffffffffe),lVar19,puVar14);
      if ((int)plVar8 < 0) {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_03212b40;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1f0 = (byte *)0x0;
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1c8 = (byte *)0x0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_2[1];
          local_210 = puVar14;
          FUN_0322c554(&local_1f0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                       &DAT_046a9d58,param_2,&local_208,&local_210);
          local_1b0 = 0x1f2;
          goto LAB_0321278c;
        }
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        pbStack_1e8 = (byte *)0x10000000000;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0[0] = 0;
        local_218 = (byte *)param_2[1];
        local_220 = puVar14;
        local_1f0 = local_1a0;
        local_1c8 = local_1a0;
        plVar8 = (long *)FUN_0322c554(&local_1f0,
                                      "Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                                      &DAT_046a9d58,param_2,&local_218,&local_220);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1b0 = 0x1f2;
        if (local_1a0[0] != 0) {
          sVar9 = strlen((char *)local_1a0);
          pbVar12 = local_1a0 + (long)(int)((int)sVar9 - (uint)((int)sVar9 == 0xff)) + -0x50;
LAB_032134b4:
          pbVar12[0x50] = 10;
          pbVar12[0x51] = 0;
          printf("%s",local_1a0);
          uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar8 = (long *)(ulong)uVar6;
        }
LAB_03212798:
        pbVar12 = local_1c8;
        if (((ulong)local_1c8 & 1) == 0) goto LAB_03212b40;
        goto LAB_032127a0;
      }
    }
    if ((uVar17 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 6:
    pbVar12 = (byte *)param_3[1];
    if (pbVar12 == (byte *)0x0) {
LAB_03211384:
      puVar18 = (undefined8 *)0x0;
LAB_03211388:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_03211a78;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = (byte *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9d78,&local_1f0,&local_208,&local_210,&local_218);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar5 = &local_60;
          bVar4 = true;
        }
        else {
LAB_03211a78:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_208 = (byte *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                               0xffffffff0000001f);
          for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9d78,&local_a0,&local_208,&local_210,&local_218);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar5 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar5 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          if (((ulong)local_78 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 + -1,0);
          }
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
      uVar17 = (ulong)puVar18 & 1;
    }
    else {
      pbVar15 = pbVar12;
      if ((*pbVar12 & 1) == 0) {
        do {
          pbVar15 = *(byte **)(pbVar15 + 8);
        } while ((*pbVar15 & 1) == 0);
      }
      if ((*(ulong *)(pbVar15 + 0x10) & 0x1f) != 6) goto LAB_03211384;
      pbVar15 = (byte *)*param_3;
      puVar18 = (undefined8 *)param_3[2];
      if (((ulong)puVar18 & 1) != 0) {
        piVar1 = (int *)(((ulong)puVar18 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar18 = (undefined8 *)param_3[2];
      }
      if (pbVar15 == (byte *)0x0) goto LAB_03211388;
      if (((ulong)puVar18 & 1) != 0) {
        piVar1 = (int *)(((ulong)puVar18 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_1d8 = *param_2;
      local_1d0 = param_2[1];
      local_1c8 = (byte *)param_2[2];
      if (((ulong)local_1c8 & 1) != 0) {
        piVar1 = (int *)(((ulong)local_1c8 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_1f0 = pbVar15;
      pbStack_1e8 = pbVar12;
      local_1e0 = puVar18;
      plVar8 = (long *)FUN_03213968(param_1,&local_1f0,1);
      if (((ulong)local_1c8 & 1) != 0) {
        plVar8 = (long *)((ulong)local_1c8 & 0xfffffffffffffffe);
        plVar10 = plVar8 + 1;
        do {
          lVar19 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
          plVar8 = (long *)(**(code **)(*plVar8 + 8))();
        }
      }
      uVar17 = (ulong)puVar18 & 1;
      if (((ulong)local_1e0 & 1) != 0) {
        plVar8 = (long *)((ulong)local_1e0 & 0xfffffffffffffffe);
        plVar10 = plVar8 + 1;
        do {
          lVar19 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
          plVar8 = (long *)(**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (uVar17 == 0) {
      return plVar8;
    }
    plVar10 = (long *)((ulong)puVar18 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 7:
    local_200 = 0;
    local_1f8 = 0;
    local_208 = (byte *)0x0;
    pbVar12 = (byte *)param_3[1];
    if (pbVar12 == (byte *)0x0) {
LAB_032115e0:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_0321194c;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_210 = (ulong *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          for (puVar14 = local_210; (*puVar14 & 1) == 0; puVar14 = (ulong *)puVar14[1]) {
          }
          local_220 = (ulong *)(CONCAT44(local_220._4_4_,(int)puVar14[2]) & 0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9f70,&local_1f0,&local_210,&local_218,&local_220);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_0321194c:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_210 = (ulong *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          for (puVar14 = local_210; (*puVar14 & 1) == 0; puVar14 = (ulong *)puVar14[1]) {
          }
          local_220 = (ulong *)(CONCAT44(local_220._4_4_,(int)puVar14[2]) & 0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046a9f70,&local_a0,&local_210,&local_218,&local_220);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          if (((ulong)local_78 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 + -1,0);
          }
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 7) goto LAB_032115e0;
      local_208 = (byte *)*param_3;
      local_200 = param_3[1];
      local_1f8 = param_3[2];
      if ((local_1f8 & 1) != 0) {
        piVar1 = (int *)((local_1f8 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_1f8 = param_3[2];
      }
      if (local_208 == (byte *)0x0) goto LAB_032115e0;
      plVar8 = (long *)FUN_03214908(param_1,param_2,&local_208);
    }
    if ((local_1f8 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(local_1f8 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  case 8:
    local_200 = 0;
    local_1f8 = 0;
    local_208 = (byte *)0x0;
    pbVar12 = (byte *)param_3[1];
    if (pbVar12 == (byte *)0x0) {
LAB_03211180:
      if (DAT_04884f08 < 2) {
        plVar8 = param_1;
        if (DAT_046aaf68 != '\0') goto LAB_032119b0;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_a0 = (byte *)0x0;
          local_90 = &DAT_04884eb8;
          uStack_88 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = (byte *)0x0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_210 = (ulong *)param_3[1];
          local_1f0 = (byte *)param_2[1];
          for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          for (puVar14 = local_210; (*puVar14 & 1) == 0; puVar14 = (ulong *)puVar14[1]) {
          }
          local_220 = (ulong *)(CONCAT44(local_220._4_4_,(int)puVar14[2]) & 0xffffffff0000001f);
          plVar8 = (long *)FUN_0322c554(&local_a0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046aa108,&local_1f0,&local_210,&local_218,&local_220);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x14c);
          puVar18 = &local_60;
          bVar4 = true;
        }
        else {
LAB_032119b0:
          local_1e0 = &DAT_04884eb8;
          local_1d8 = 2;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d0 = nn::os::GetThreadId(pTVar7);
          local_1f0 = local_1a0;
          local_1c0 = 0;
          local_1b8 = (char *)0x0;
          local_1a0[0] = 0;
          pbStack_1e8 = (byte *)0x10000000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_210 = (ulong *)param_3[1];
          local_a0 = (byte *)param_2[1];
          for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                              0xffffffff0000001f);
          for (puVar14 = local_210; (*puVar14 & 1) == 0; puVar14 = (ulong *)puVar14[1]) {
          }
          local_220 = (ulong *)(CONCAT44(local_220._4_4_,(int)puVar14[2]) & 0xffffffff0000001f);
          local_1c8 = local_1f0;
          plVar8 = (long *)FUN_0322c554(&local_1f0,
                                        "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                        ,&DAT_046aa108,&local_a0,&local_210,&local_218,&local_220);
          local_1b8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          bVar4 = false;
          local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
          puVar18 = &local_1b0;
          bVar3 = true;
        }
        *(undefined4 *)((long)puVar18 + 4) = 0;
        if (bVar3) {
          if (local_1a0[0] != 0) {
            sVar9 = strlen((char *)local_1a0);
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
            (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
            printf("%s",local_1a0);
            uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar8 = (long *)(ulong)uVar6;
          }
          if (((ulong)local_1c8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
          }
        }
        if (bVar4) {
          plVar8 = (long *)FUN_0322c8e0(&local_a0);
          if (((ulong)local_78 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 + -1,0);
          }
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 8) goto LAB_03211180;
      local_208 = (byte *)*param_3;
      local_200 = param_3[1];
      local_1f8 = param_3[2];
      if ((local_1f8 & 1) != 0) {
        piVar1 = (int *)((local_1f8 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_1f8 = param_3[2];
      }
      if (local_208 == (byte *)0x0) goto LAB_03211180;
      plVar8 = (long *)FUN_03218750(param_1,param_2,&local_208);
    }
    if ((local_1f8 & 1) == 0) {
      return plVar8;
    }
    plVar10 = (long *)(local_1f8 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      iVar11 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_03212b68;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch");
  }
  pbVar12 = (byte *)param_3[1];
  plVar8 = param_1;
  if (pbVar12 == (byte *)0x0) {
LAB_032113f8:
    uVar17 = 0;
LAB_032113fc:
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_03211650;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_a0 = (byte *)0x0;
        local_90 = &DAT_04884eb8;
        uStack_88 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_80 = nn::os::GetThreadId(pTVar7);
        local_78 = (byte *)0x0;
        local_70 = 0;
        local_68 = (char *)0x0;
        local_60 = 0;
        uStack_58 = 0;
        local_208 = (byte *)param_3[1];
        local_1f0 = (byte *)param_2[1];
        for (pbVar12 = local_1f0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
        }
        local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                             0xffffffff0000001f);
        for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
        }
        local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                            0xffffffff0000001f);
        plVar8 = (long *)FUN_0322c554(&local_a0,
                                      "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                      ,&DAT_046a9258,&local_1f0,&local_208,&local_210,&local_218);
        local_68 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        bVar3 = false;
        local_60 = CONCAT44(local_60._4_4_,0x14c);
        puVar18 = &local_60;
        bVar4 = true;
      }
      else {
LAB_03211650:
        local_1e0 = &DAT_04884eb8;
        local_1d8 = 2;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1d0 = nn::os::GetThreadId(pTVar7);
        local_1f0 = local_1a0;
        local_1c0 = 0;
        local_1b8 = (char *)0x0;
        local_1a0[0] = 0;
        pbStack_1e8 = (byte *)0x10000000000;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_208 = (byte *)param_3[1];
        local_a0 = (byte *)param_2[1];
        for (pbVar12 = local_a0; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
        }
        local_210 = (ulong *)(CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                             0xffffffff0000001f);
        for (pbVar12 = local_208; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
        }
        local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar12 + 0x10)) &
                            0xffffffff0000001f);
        local_1c8 = local_1f0;
        plVar8 = (long *)FUN_0322c554(&local_1f0,
                                      "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                                      ,&DAT_046a9258,&local_a0,&local_208,&local_210,&local_218);
        local_1b8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        bVar4 = false;
        local_1b0 = CONCAT44(local_1b0._4_4_,0x14c);
        puVar18 = &local_1b0;
        bVar3 = true;
      }
      *(undefined4 *)((long)puVar18 + 4) = 0;
      if (bVar3) {
        if (local_1a0[0] != 0) {
          sVar9 = strlen((char *)local_1a0);
          (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
          (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
          printf("%s",local_1a0);
          uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar8 = (long *)(ulong)uVar6;
        }
        if (((ulong)local_1c8 & 1) != 0) {
          plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1c8 + -1,0);
        }
      }
      if (bVar4) {
        plVar8 = (long *)FUN_0322c8e0(&local_a0);
        pbVar12 = local_78;
        if (((ulong)local_78 & 1) != 0) goto LAB_032124f0;
      }
    }
  }
  else {
    for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
    }
    if ((pbVar12[0x10] & 0x1f) != 0) goto LAB_032113f8;
    lVar19 = *param_3;
    uVar17 = param_3[2];
    if ((uVar17 & 1) != 0) {
      piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar17 = param_3[2];
    }
    if (lVar19 == 0) goto LAB_032113fc;
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_032130e8;
      goto LAB_032127c4;
    }
    if (DAT_046aaf68 == '\0') {
      local_1f0 = (byte *)0x0;
      local_1e0 = &DAT_04884eb8;
      local_1d8 = 2;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_1d0 = nn::os::GetThreadId(pTVar7);
      local_1c8 = (byte *)0x0;
      local_1c0 = 0;
      local_1b8 = (char *)0x0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      FUN_0322c554(&local_1f0,"Cannot clone an object of type void",PTR_DAT_047d1b38);
      local_1b8 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_1b0 = 0x212;
      plVar8 = (long *)FUN_0322c8e0(&local_1f0);
    }
    else {
LAB_032130e8:
      local_1e0 = &DAT_04884eb8;
      local_1d8 = 2;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_1d0 = nn::os::GetThreadId(pTVar7);
      local_1c0 = 0;
      local_1b8 = (char *)0x0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0[0] = 0;
      pbStack_1e8 = (byte *)0x10000000000;
      local_1f0 = local_1a0;
      local_1c8 = local_1a0;
      plVar8 = (long *)FUN_0322c554(&local_1f0,"Cannot clone an object of type void",
                                    PTR_DAT_047d1b38);
      local_1b8 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_1b0 = 0x212;
      if (local_1a0[0] != 0) {
        sVar9 = strlen((char *)local_1a0);
        (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = 10;
        (local_1a0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = 0;
        printf("%s",local_1a0);
        uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
        plVar8 = (long *)(ulong)uVar6;
      }
    }
    pbVar12 = local_1c8;
    if (((ulong)local_1c8 & 1) == 0) goto LAB_032127c4;
LAB_032124f0:
    plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,pbVar12 + -1,0);
  }
LAB_032127c4:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
  if ((uVar17 & 1) == 0) {
    return plVar8;
  }
  plVar10 = (long *)(uVar17 & 0xfffffffffffffffe);
  plVar8 = plVar10 + 1;
  do {
    iVar11 = (int)*plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_03212b68:
  if ((plVar10 != (long *)0x0) && (iVar11 == 1)) {
    plVar10 = (long *)(**(code **)(*plVar10 + 8))();
  }
  return plVar10;
}


