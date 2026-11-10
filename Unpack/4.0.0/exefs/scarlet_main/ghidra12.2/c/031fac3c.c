/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fac3c; name: FUN_031fac3c
 */


undefined8 FUN_031fac3c(char *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ThreadType *pTVar7;
  size_t sVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  char *local_208;
  undefined8 local_200;
  ulong *local_1f8;
  ulong *local_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char local_1b8 [256];
  undefined8 local_b8;
  ulong *local_b0;
  ulong *local_a8;
  char *local_a0 [2];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_208 = param_1;
  local_200 = param_2;
  local_1f8 = param_3;
  local_1f0 = param_4;
  if ((param_3 != (ulong *)0x0) || (*param_1 != '\0')) {
    FUN_031e1bb4(local_a0,param_4,PTR_DAT_047e5e00);
    if (((ulong)local_90 & 1) != 0) {
      plVar6 = (long *)((ulong)local_90 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar14 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (local_a0[0] == (char *)0x0) {
      iVar5 = FUN_031fb974(&local_208,param_4,0,param_3,0);
    }
    else {
      iVar5 = (**(code **)local_a0[0])(local_200,param_4,0,param_3,0);
    }
    if (iVar5 < 0) {
      return 0x80040200;
    }
  }
  local_b8 = param_2;
  local_b0 = param_4;
  local_a8 = param_3;
  local_a0[0] = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar14 = (long)*(int *)(param_1 + 0x10) << 3;
    puVar13 = *(undefined8 **)(param_1 + 8);
    do {
      iVar5 = (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,param_2,param_3,param_4);
      if (iVar5 < 0) {
        if ((byte)PTR_DAT_047e5e08[0x50] < 4) {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_90 = PTR_DAT_047e5e08;
          local_a0[0] = (char *)0x0;
          local_88 = 4;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_80 = nn::os::GetThreadId(pTVar7);
          local_78 = 0;
          local_70 = 0;
          local_68 = (char *)0x0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = param_1;
          FUN_0322c554(local_a0,"{}, Compiler could not convert types {}->{}, p = {}",&DAT_046a8348,
                       &local_208,&local_a8,&local_b0,&local_b8);
          local_68 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
          ;
          bVar3 = false;
          local_60 = CONCAT44(local_60._4_4_,0x179);
          puVar13 = &local_60;
          bVar4 = true;
          goto LAB_031fb034;
        }
        local_1f8 = (ulong *)PTR_DAT_047e5e08;
        local_208 = (char *)0x0;
        local_1f0 = (ulong *)0x4;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_1e8 = nn::os::GetThreadId(pTVar7);
        local_208 = local_1b8;
        local_1d8 = 0;
        local_1d0 = (char *)0x0;
        local_1b8[0] = '\0';
        local_200 = 0x10000000000;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1e0 = local_208;
        FUN_0322c554(&local_208,"{}, Compiler could not convert types {}->{}, p = {}",&DAT_046a8348,
                     local_a0,&local_a8,&local_b0,&local_b8);
        local_1d0 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        bVar4 = false;
        local_1c8 = CONCAT44(local_1c8._4_4_,0x179);
        puVar13 = &local_1c8;
        bVar3 = true;
LAB_031fb034:
        *(undefined4 *)((long)puVar13 + 4) = 0;
        if (bVar3) {
          if (local_1b8[0] != '\0') {
            sVar8 = strlen(local_1b8);
            (local_1b8 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[0] = '\n';
            (local_1b8 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[1] = '\0';
            printf("%s",local_1b8);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
          if (((ulong)local_1e0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1e0 + -1,0);
          }
        }
        if (bVar4) {
          FUN_0322c8e0(local_a0);
          if ((local_78 & 1) == 0) {
            return 0x80040200;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 - 1,0);
          return 0x80040200;
        }
        return 0x80040200;
      }
      lVar14 = lVar14 + -8;
      puVar13 = puVar13 + 1;
    } while (lVar14 != 0);
  }
  if (param_3 == (ulong *)0x0) {
LAB_031fada0:
    uVar9 = 0;
    puVar10 = param_4;
    do {
      uVar11 = (uint)*puVar10;
      if ((uVar11 >> 0x15 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = CONCAT44(uVar11,uVar11) & 0x1fffff001fffff;
        uVar12 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                                      POPCOUNT((char)(uVar12 >> 0x10))) + 2];
      }
      uVar9 = uVar12 | uVar9;
    } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
    if (((uint)uVar9 >> 0xc & 1) != 0) goto LAB_031fadec;
  }
  else {
    uVar9 = 0;
    puVar10 = param_3;
    do {
      uVar11 = (uint)*puVar10;
      if ((uVar11 >> 0x15 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = CONCAT44(uVar11,uVar11) & 0x1fffff001fffff;
        uVar12 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                                      POPCOUNT((char)(uVar12 >> 0x10))) + 2];
      }
      uVar9 = uVar12 | uVar9;
    } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
    if (((uint)uVar9 >> 0xc & 1) == 0) goto LAB_031fada0;
LAB_031fadec:
    iVar5 = *(int *)(param_1 + 0x60);
    lVar14 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) <= iVar5) {
      FUN_031fde54(param_1 + 0x58,lVar14 + 1);
      iVar5 = *(int *)(param_1 + 0x60);
    }
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 0x10);
    *puVar13 = param_3;
    puVar13[1] = param_4;
    *(int *)(param_1 + 0x60) = (int)(lVar14 + 1);
  }
  if ((byte)PTR_DAT_047e5e08[0x50] < 4) {
    if (DAT_046aaf68 == '\0') {
      return 0;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_90 = PTR_DAT_047e5e08;
    local_a0[0] = (char *)0x0;
    local_88 = 4;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_80 = nn::os::GetThreadId(pTVar7);
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x0;
    local_60 = 0;
    uStack_58 = 0;
    local_208 = param_1;
    FUN_0322c554(local_a0,"{} Type newly compiled {}->{}, p = {}",&DAT_046a8348,&local_208,&local_a8
                 ,&local_b0,&local_b8);
    local_68 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
    ;
    bVar3 = false;
    local_60 = CONCAT44(local_60._4_4_,0x183);
    puVar13 = &local_60;
    bVar4 = true;
    goto LAB_031faec0;
  }
  local_1f8 = (ulong *)PTR_DAT_047e5e08;
  local_208 = (char *)0x0;
  local_1f0 = (ulong *)0x4;
  pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
  local_1e8 = nn::os::GetThreadId(pTVar7);
  local_208 = local_1b8;
  local_1d8 = 0;
  local_1d0 = (char *)0x0;
  local_1b8[0] = '\0';
  local_200 = 0x10000000000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1e0 = local_208;
  FUN_0322c554(&local_208,"{} Type newly compiled {}->{}, p = {}",&DAT_046a8348,local_a0,&local_a8,
               &local_b0,&local_b8);
  local_1d0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
  ;
  bVar4 = false;
  local_1c8 = CONCAT44(local_1c8._4_4_,0x183);
  puVar13 = &local_1c8;
  bVar3 = true;
LAB_031faec0:
  *(undefined4 *)((long)puVar13 + 4) = 0;
  if (bVar3) {
    if (local_1b8[0] != '\0') {
      sVar8 = strlen(local_1b8);
      (local_1b8 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[0] = '\n';
      (local_1b8 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[1] = '\0';
      printf("%s",local_1b8);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
    if (((ulong)local_1e0 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1e0 + -1,0);
    }
  }
  if ((bVar4) && (FUN_0322c8e0(local_a0), (local_78 & 1) != 0)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 - 1,0);
  }
  return 0;
}


