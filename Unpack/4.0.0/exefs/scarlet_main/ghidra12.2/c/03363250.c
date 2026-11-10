/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03363250; name: FUN_03363250
 */


undefined8
FUN_03363250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ThreadType *pTVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  char *local_250;
  undefined8 local_248;
  undefined8 *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  char local_200 [256];
  long *local_100;
  undefined8 local_f8;
  undefined2 *local_f0;
  ulong local_e8;
  undefined2 local_e0 [64];
  int local_60;
  undefined1 auStack_58 [8];
  
  local_60 = 1;
  local_f0 = local_e0;
  local_e8 = 0x8000008000000002;
  local_e0[0] = 0x23;
  pcVar17 = (char *)*param_4;
  if (pcVar17 != (char *)0x0) {
    iVar6 = *(int *)(param_4 + 1) - (int)pcVar17;
    if (iVar6 < 0) {
      sVar7 = strlen(pcVar17);
      iVar6 = (int)sVar7;
    }
    iVar13 = 0x7f;
    if (iVar6 + 1 < 0x7f) {
      iVar13 = iVar6 + 1;
    }
    if (local_60 != 0) {
      iVar13 = iVar6 + 1;
    }
    iVar6 = iVar13 + 1;
    if (iVar13 < 0x80) {
      iVar14 = 2;
    }
    else {
      FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
      iVar14 = (int)local_e8;
    }
    if ((iVar14 <= iVar13) || (iVar6 < iVar14)) {
      local_e8 = CONCAT44(local_e8._4_4_,iVar6);
    }
    *(undefined1 *)((long)local_f0 + (long)iVar13) = 0;
    memmove((void *)((long)local_f0 + 1),pcVar17,(long)((int)local_e8 + -2));
  }
  puVar8 = (undefined2 *)FUN_031e1c40(param_3,local_f0,0);
  if (puVar8 < (undefined2 *)0x2) {
    FUN_031ca554(&local_250,*param_4,param_4[1]);
    pcVar17 = local_250;
    uVar10 = FUN_031e1c40(param_3,(ulong)local_250 & 0xfffffffffffffffe,0);
    if (((ulong)pcVar17 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,pcVar17 + -1,0);
    }
    if (uVar10 < 2) {
      uVar9 = 0x80040200;
      if (DAT_0488d8c8 == 0) {
        if (DAT_046aaf68 == '\0') goto LAB_03363690;
LAB_033636dc:
        local_240 = &DAT_0488d878;
        uStack_238 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_230 = nn::os::GetThreadId(pTVar12);
        local_220 = 0;
        local_218 = (char *)0x0;
        local_200[0] = '\0';
        local_210 = 0;
        uStack_208 = 0;
        local_248 = 0x10000000000;
        local_250 = local_200;
        local_228 = local_200;
        FUN_0322c554(&local_250,
                     "Field {} not found applying patch {}. This often indicates version mismatches or missing patches."
                     ,&DAT_047ad350,param_4,param_1);
        local_218 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
        ;
        local_210 = 0x9b1;
        uStack_238 = CONCAT44(0xa71bbc08,(undefined4)uStack_238);
        if (local_200[0] != '\0') {
          sVar7 = strlen(local_200);
          (local_200 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
          (local_200 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
          printf("%s",local_200);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      else {
        if (DAT_046aaf68 != '\0') goto LAB_033636dc;
        local_250 = (char *)0x0;
        local_240 = &DAT_0488d878;
        uStack_238 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_230 = nn::os::GetThreadId(pTVar12);
        local_228 = (char *)0x0;
        local_220 = 0;
        local_218 = (char *)0x0;
        local_210 = 0;
        uStack_208 = 0;
        FUN_0322c554(&local_250,
                     "Field {} not found applying patch {}. This often indicates version mismatches or missing patches."
                     ,&DAT_047ad350,param_4,param_1);
        local_218 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
        ;
        local_210 = 0x9b1;
        uStack_238 = CONCAT44(0xa71bbc08,(undefined4)uStack_238);
        FUN_0322c8e0(&local_250);
      }
      if (((ulong)local_228 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_228 + -1,0);
      }
      goto LAB_03363690;
    }
    if (DAT_0488d8c8 < 4) {
      if (DAT_046aaf68 == '\0') goto LAB_0336368c;
LAB_0336379c:
      local_240 = &DAT_0488d878;
      uStack_238 = 4;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_230 = nn::os::GetThreadId(pTVar12);
      local_220 = 0;
      local_218 = (char *)0x0;
      local_200[0] = '\0';
      local_210 = 0;
      uStack_208 = 0;
      local_248 = 0x10000000000;
      local_250 = local_200;
      local_228 = local_200;
      FUN_0322c554(&local_250,
                   "Field {} was already present when applying patch {}. This often indicates version mismatches or missing patches."
                   ,&DAT_047ad350,param_4,param_1);
      local_218 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
      ;
      local_210 = 0x9ac;
      if (local_200[0] != '\0') {
        sVar7 = strlen(local_200);
        (local_200 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
        (local_200 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
        printf("%s",local_200);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_0336379c;
      local_250 = (char *)0x0;
      local_240 = &DAT_0488d878;
      uStack_238 = 4;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_230 = nn::os::GetThreadId(pTVar12);
      local_228 = (char *)0x0;
      local_220 = 0;
      local_218 = (char *)0x0;
      local_210 = 0;
      uStack_208 = 0;
      FUN_0322c554(&local_250,
                   "Field {} was already present when applying patch {}. This often indicates version mismatches or missing patches."
                   ,&DAT_047ad350,param_4,param_1);
      local_218 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
      ;
      local_210 = 0x9ac;
      FUN_0322c8e0(&local_250);
    }
    if (((ulong)local_228 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_228 + -1,0);
    }
  }
  else {
    uVar9 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_4,
                         *(int *)(param_4 + 1) - (int)*param_4,1);
    *(undefined8 *)
     (puVar8 + (ulong)(byte)(POPCOUNT((char)*puVar8) + POPCOUNT((char)((ushort)*puVar8 >> 8))) * 4 +
               8) = uVar9;
    local_100 = (long *)0x0;
    local_f8 = -0x8000000000000000;
    FUN_033691e0(param_2,&local_100);
    if ((int)local_f8 != 0) {
      plVar16 = local_100 + (long)(int)local_f8 * 3;
      plVar15 = local_100;
      do {
        if ((*plVar15 == 0) || (uVar10 = FUN_031e198c(plVar15[1],*param_4,param_4[1],1), uVar10 < 2)
           ) {
          local_248 = 0;
          local_240 = (undefined8 *)0x0;
          local_250 = (char *)0x0;
        }
        else {
          FUN_031e32f0(&local_250,plVar15,uVar10);
          if (local_250 != (char *)0x0) {
            FUN_031e66c8(auStack_58,&local_250,1);
          }
        }
        if (((ulong)local_240 & 1) != 0) {
          plVar11 = (long *)((ulong)local_240 & 0xfffffffffffffffe);
          plVar2 = plVar11 + 1;
          do {
            lVar5 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        plVar2 = local_100;
        plVar15 = plVar15 + 3;
      } while (plVar15 != plVar16);
      if ((int)local_f8 != 0) {
        plVar15 = local_100 + (long)(int)local_f8 * 3;
        do {
          puVar1 = (ulong *)(plVar15 + -1);
          plVar15 = plVar15 + -3;
          if ((*puVar1 & 1) != 0) {
            plVar11 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar16 = plVar11 + 1;
            do {
              lVar5 = *plVar16;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *(int *)plVar16 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        } while (plVar15 != plVar2);
      }
    }
    lVar5 = local_f8;
    uVar10 = (ulong)local_f8._4_4_;
    local_f8 = (ulong)local_f8._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_100 != (long *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_100,uVar10 * 0x18);
    }
  }
LAB_0336368c:
  uVar9 = 0;
LAB_03363690:
  uVar10 = local_e8;
  local_e8 = local_e8 & 0xffffffff00000000;
  if ((-1 < (long)uVar10) && (local_f0 != (undefined2 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return uVar9;
}


