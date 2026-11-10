/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334b1cc; name: FUN_0334b1cc
 */


long FUN_0334b1cc(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ThreadType *pTVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150 [32];
  
  lVar11 = *(long *)PTR_DAT_047ddc48;
  if (param_3 != 0) {
    lVar11 = param_3;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  if (param_4 == 0) {
    param_4 = *(long *)PTR_DAT_047e61d8;
    if (lVar14 != 0) {
      param_4 = lVar14;
    }
  }
  else if ((lVar14 != 0) && (lVar14 != param_4)) {
    if (DAT_0488d828 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return 0;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1a0 = (long *)0x0;
      local_190 = &DAT_0488d7d8;
      uStack_188 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar7);
      local_178 = (long *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Two different patch registries used with the same Patcher",
                   PTR_DAT_047d1b38);
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectVersionPatcher.cpp"
      ;
      local_160 = 0x8a;
      FUN_0322c8e0(&local_1a0);
      goto LAB_0334b28c;
    }
    local_190 = &DAT_0488d7d8;
    uStack_188 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar7);
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0]._0_1_ = '\0';
    local_198 = 0x10000000000;
    local_1a0 = local_150;
    local_178 = local_150;
    FUN_0322c554(&local_1a0,"Two different patch registries used with the same Patcher",
                 PTR_DAT_047d1b38);
    local_168 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectVersionPatcher.cpp"
    ;
    local_160 = 0x8a;
    if ((char)local_150[0] != '\0') {
      sVar13 = strlen((char *)local_150);
      *(undefined2 *)((long)local_150 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10
      ;
      FUN_0322f020(local_150);
    }
LAB_0334b28c:
    if (((ulong)local_178 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_178 + -1),0);
    }
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_4 + 0x18));
  *(int *)(param_4 + 0x80) = *(int *)(param_4 + 0x80) + 1;
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x18));
  puVar5 = PTR_DAT_047d1a08;
  if (*(long *)(param_1 + 0x20) == 0) {
    local_1a0 = (long *)&DAT_00000058;
    plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_1a0,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar8,"PatchInfoCache");
    }
    *plVar8 = (long)(PTR_DAT_047e6750 + 0x10);
    plVar8[1] = 0xffffffff;
    plVar8[2] = 1;
    plVar8[3] = 0;
    plVar8[4] = -0x8000000000000000;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 8) = 0;
    plVar8[6] = -0x8000000000000000;
    plVar8[7] = (long)&DAT_03d7702c;
    plVar8[9] = 0;
    plVar8[10] = -0x8000000000000000;
    plVar9 = *(long **)(param_1 + 0x20);
    if (((plVar9 != plVar8) && (*(long **)(param_1 + 0x20) = plVar8, plVar9 != (long *)0x0)) &&
       (plVar9[1] != 0)) {
      plVar8 = plVar9 + 2;
      do {
        lVar14 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  puVar5 = PTR_DAT_047d1a08;
  lVar14 = *(long *)(param_1 + 0x28);
  if (lVar14 == 0) {
    local_1a0 = (long *)0x80;
    plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_1a0,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar8,"PatchSet");
    }
    FUN_033468cc(plVar8,param_4,lVar11,*(undefined8 *)(param_1 + 0x20),0);
    plVar9 = *(long **)(param_1 + 0x28);
    if ((plVar9 != plVar8) && (*(long **)(param_1 + 0x28) = plVar8, plVar9 != (long *)0x0)) {
      if (plVar9[1] != 0) {
        plVar8 = plVar9 + 2;
        do {
          lVar14 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      plVar8 = *(long **)(param_1 + 0x28);
    }
    uVar17 = (ulong)*(uint *)(param_2 + 0x10);
    plVar9 = *(long **)(param_2 + 8);
    local_1a0 = (long *)0x0;
    local_198 = -0x8000000000000000;
    local_190 = (undefined8 *)((ulong)local_190._4_4_ << 0x20);
    if ((int)*(uint *)(param_2 + 0x10) < 1) {
      local_198 = -0x8000000000000000;
    }
    else {
      do {
        if (*plVar9 != 0) {
          FUN_03347200(plVar8,*plVar9,&local_1a0);
        }
        lVar14 = local_198;
        uVar17 = uVar17 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar17 != 0);
      uVar17 = (ulong)local_198._4_4_;
      local_198 = (ulong)local_198._4_4_ << 0x20;
      if ((-1 < lVar14) && (local_1a0 != (long *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1a0,uVar17 << 3);
      }
    }
    lVar14 = *(long *)(param_1 + 0x28);
  }
  if ((*(char *)(lVar14 + 0x78) == '\0') && (*(char *)(lVar14 + 0x79) == '\0')) goto LAB_0334b9c0;
  plVar8 = *(long **)(param_1 + 0x30);
  if (plVar8 != (long *)0x0) {
    if (-1 < (int)plVar8[3]) {
      lVar14 = plVar8[2];
      nn::os::LockMutex((MutexType *)(lVar14 + 0x188));
      *(undefined8 *)(*(long *)(plVar8[2] + 0x1a8) + (long)(int)plVar8[3] * 0x10) = 0;
      plVar9 = (long *)plVar8[2];
      plVar8[2] = 0;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar12 = plVar9 + 2;
        do {
          lVar16 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      *(undefined4 *)(plVar8 + 3) = 0xffffffff;
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x188));
    }
    plVar9 = (long *)plVar8[2];
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar12 = plVar9 + 2;
      do {
        lVar14 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[1] + 8))();
    }
    plVar9 = (long *)*plVar8;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar12 = plVar9 + 2;
      do {
        lVar14 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,plVar8,0);
  }
  puVar5 = PTR_DAT_047d1a08;
  local_1a0 = (long *)&DAT_00000020;
  puVar10 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_1a0,0);
  pcVar15 = *(code **)(puVar5 + 0x10);
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(puVar10,&DAT_03c41cd3);
  }
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 3) = 0xffffffff;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  FUN_03347d08(&local_1a0,param_4,&LAB_0334bb50,param_1);
  FUN_03347e14(*(long *)(param_1 + 0x30) + 0x10,&local_1a0);
  if (-1 < (int)local_198) {
    pMVar2 = (MutexType *)(local_1a0 + 0x31);
    nn::os::LockMutex(pMVar2);
    plVar8 = local_1a0;
    *(undefined8 *)(local_1a0[0x35] + (long)(int)local_198 * 0x10) = 0;
    local_1a0 = (long *)0x0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        lVar14 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    local_198 = CONCAT44(local_198._4_4_,0xffffffff);
    nn::os::UnlockMutex(pMVar2);
  }
  if ((local_1a0 != (long *)0x0) && (local_1a0[1] != 0)) {
    plVar8 = local_1a0 + 2;
    do {
      lVar14 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_1a0 + 0x18))();
    }
  }
  lVar14 = *(long *)(param_1 + 0x28);
  plVar8 = *(long **)(param_1 + 0x30);
  FUN_03347020(lVar14,0);
  if ((*(char *)(lVar14 + 0x79) == '\0') || (plVar8[1] != 0)) {
LAB_0334b734:
    puVar6 = PTR_DAT_047e66d0;
    if (*(char *)(lVar14 + 0x78) != '\0') {
      if (*(long *)PTR_DAT_047e66d0 == 0) {
        if (DAT_0488d828 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0334b9bc;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (long *)0x0;
          local_190 = &DAT_0488d7d8;
          uStack_188 = 1;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar7);
          local_178 = (long *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,
                       "Versioning is trying to create a patcher but there is no registered patcher creation function. Ensure you have linked against hkCompat and not excluded it from hkProductFeatures"
                       ,PTR_DAT_047d1b38);
          local_160 = 0x62;
          goto LAB_0334b928;
        }
        local_190 = &DAT_0488d7d8;
        uStack_188 = 1;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar7);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0]._0_1_ = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,
                     "Versioning is trying to create a patcher but there is no registered patcher creation function. Ensure you have linked against hkCompat and not excluded it from hkProductFeatures"
                     ,PTR_DAT_047d1b38);
        local_160 = 0x62;
LAB_0334bb10:
        local_168 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectVersionPatcher.cpp"
        ;
        if ((char)local_150[0] != '\0') {
          sVar13 = strlen((char *)local_150);
          *(undefined2 *)((long)local_150 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))
               = 10;
          FUN_0322f020(local_150);
        }
        goto LAB_0334b934;
      }
      if ((*(char *)(lVar14 + 0x79) != '\0') && (*(long *)PTR_DAT_047e6758 != 0)) {
        lVar11 = (**(code **)(*(long *)plVar8[1] + 0x20))();
      }
      plVar9 = (long *)*plVar8;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)puVar6)(lVar11,lVar14);
        plVar12 = (long *)*plVar8;
        if ((plVar12 != plVar9) && (*plVar8 = (long)plVar9, plVar12 != (long *)0x0)) {
          if (plVar12[1] != 0) {
            plVar9 = plVar12 + 2;
            do {
              lVar11 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))();
            }
          }
          plVar9 = (long *)*plVar8;
        }
      }
      param_2 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2,lVar14);
    }
    if (*(char *)(lVar14 + 0x79) != '\0') {
      param_2 = (**(code **)(*(long *)plVar8[1] + 0x10))((long *)plVar8[1],param_2,0);
    }
  }
  else {
    if (*(code **)PTR_DAT_047e6758 != (code *)0x0) {
      lVar16 = (**(code **)PTR_DAT_047e6758)(*(undefined8 *)(lVar14 + 0x68),lVar11);
      plVar9 = (long *)plVar8[1];
      plVar8[1] = lVar16;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      goto LAB_0334b734;
    }
    if (DAT_0488d828 == '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_0334bab4;
    }
    else {
      if (DAT_046aaf68 != '\0') {
LAB_0334bab4:
        local_190 = &DAT_0488d7d8;
        uStack_188 = 1;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar7);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0]._0_1_ = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,
                     "Versioning is trying to create a versionbundle but there is no registered patcher function. Ensure you have not excluded it from hkProductFeatures"
                     ,PTR_DAT_047d1b38);
        local_160 = 0x45;
        goto LAB_0334bb10;
      }
      local_1a0 = (long *)0x0;
      local_190 = &DAT_0488d7d8;
      uStack_188 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar7);
      local_178 = (long *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,
                   "Versioning is trying to create a versionbundle but there is no registered patcher function. Ensure you have not excluded it from hkProductFeatures"
                   ,PTR_DAT_047d1b38);
      local_160 = 0x45;
LAB_0334b928:
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectVersionPatcher.cpp"
      ;
      FUN_0322c8e0(&local_1a0);
LAB_0334b934:
      if (((ulong)local_178 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,(undefined1 *)((long)local_178 + -1),0);
      }
    }
LAB_0334b9bc:
    param_2 = 0;
  }
LAB_0334b9c0:
  nn::os::LockMutex((MutexType *)(param_4 + 0x38));
  iVar1 = *(int *)(param_4 + 0x84) + 1;
  *(int *)(param_4 + 0x84) = iVar1;
  if ((*(char *)(param_4 + 0x88) != '\0') && (*(int *)(param_4 + 0x80) == iVar1)) {
    nn::os::ReleaseSemaphore((SemaphoreType *)(param_4 + 0x58),1);
  }
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x38));
  return param_2;
}


