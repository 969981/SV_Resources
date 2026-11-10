/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03387d04; name: FUN_03387d04
 */


undefined4 * FUN_03387d04(undefined4 *param_1,long *param_2,ulong param_3)

{
  MutexType *pMVar1;
  ulong *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ThreadType *pTVar7;
  undefined4 *puVar8;
  ulong uVar9;
  size_t sVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [264];
  
  lVar12 = *param_2;
  lVar16 = param_2[1];
  if ((ulong)(lVar16 - lVar12) % 0xc == 0) {
    lVar17 = param_2[2];
    *(long *)(param_1 + 0x14) = lVar17;
    *(long *)(param_1 + 0x16) = lVar17 + (long)(int)((ulong)(lVar16 - lVar12) / 0xc) * 0xc;
    if ((param_3 & 0x101) != 1) {
      return param_1;
    }
    lVar12 = *(long *)PTR_DAT_047e3fe8;
    pMVar1 = (MutexType *)(lVar12 + 0xc0);
    nn::os::LockMutex(pMVar1);
    iVar4 = param_1[6];
    if ((int)(param_1[0x79] & 0x7fffffff) < iVar4) {
      FUN_033985fc(param_1 + 0x76,(long)iVar4);
    }
    iVar11 = param_1[0x78];
    if (iVar11 < iVar4) {
      lVar16 = *(long *)(param_1 + 0x76);
      param_1[0x78] = iVar4;
      puVar13 = (undefined8 *)(lVar16 + (long)iVar11 * 8);
      do {
        puVar14 = puVar13 + 1;
        *puVar13 = 0xfffffffe;
        puVar13 = puVar14;
      } while (puVar14 != (undefined8 *)(lVar16 + (long)iVar4 * 8));
      iVar11 = param_1[0x78];
    }
    else if (iVar4 < iVar11) {
      param_1[0x78] = iVar4;
      iVar11 = iVar4;
    }
    if (iVar11 != 0) {
      lVar16 = *(long *)(param_1 + 0x14);
      if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar16) >> 2) * -0x55555555) {
        lVar17 = 1;
        do {
          uVar5 = *(uint *)(lVar16 + lVar17 * 0xc);
          uVar6 = uVar5 & 0xf0000000;
          if ((uVar6 == 0x10000000 || uVar6 == 0x30000000) || uVar6 == 0x20000000) {
            uVar15 = (ulong)uVar5 & 0xffffff;
            puVar2 = (ulong *)(*(long *)(param_1 + 0x76) + uVar15 * 8);
            uVar9 = (ulong)(uint)*puVar2;
            if ((int)(uint)*puVar2 < -1) {
              uVar9 = FUN_031db3f4(lVar12 + 0x18,
                                   *(undefined8 *)(*(long *)(param_1 + 4) + uVar15 * 8));
              *puVar2 = uVar9;
            }
            if ((-1 < (int)uVar9) && (iVar4 = *(int *)(lVar16 + lVar17 * 0xc + 8), 0 < iVar4)) {
              iVar11 = 0;
              lVar18 = *(long *)(lVar12 + 0x18) + (uVar9 & 0xffffffff) * 0x18;
              lVar16 = *(long *)(param_1 + 0x10) + (long)*(int *)(lVar16 + lVar17 * 0xc + 4);
              puVar19 = (uint *)(lVar18 + 0x10);
              uVar9 = (ulong)*puVar19;
              do {
                if (0 < (int)uVar9) {
                  lVar20 = 0;
                  lVar21 = 0;
                  do {
                    plVar3 = (long *)(*(long *)(lVar18 + 8) + lVar20);
                    lVar21 = lVar21 + 1;
                    lVar20 = lVar20 + 0x10;
                    *(long *)(*plVar3 + lVar16) = plVar3[1];
                    uVar9 = (ulong)(int)*puVar19;
                  } while (lVar21 < (long)uVar9);
                }
                iVar11 = iVar11 + 1;
                lVar16 = lVar16 + (int)*(uint *)((long)puVar2 + 4);
              } while (iVar11 != iVar4);
            }
          }
          lVar16 = *(long *)(param_1 + 0x14);
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar16) >> 2) * -0x55555555);
      }
      puVar8 = (undefined4 *)nn::os::UnlockMutex(pMVar1);
      return puVar8;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_033880c0;
LAB_03388190:
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar7);
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      local_168[0] = '\0';
      uStack_1b0 = 0x10000000000;
      local_1b8 = local_168;
      local_190 = local_168;
      FUN_0322c554(&local_1b8,
                   "No types found. Was this input created for inplace loading? (Save.withTarget())"
                   ,PTR_DAT_047d1b38);
      local_180 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_178 = 0xa45;
      if (local_168[0] != '\0') {
        sVar10 = strlen(local_168);
        (local_168 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
        (local_168 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
        printf("%s",local_168);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_03388190;
      local_1b8 = (char *)0x0;
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar7);
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_0322c554(&local_1b8,
                   "No types found. Was this input created for inplace loading? (Save.withTarget())"
                   ,PTR_DAT_047d1b38);
      local_180 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_178 = 0xa45;
      FUN_0322c8e0(&local_1b8);
    }
    if (((ulong)local_190 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
    }
LAB_033880c0:
    *param_1 = 0x80040200;
    puVar8 = (undefined4 *)nn::os::UnlockMutex(pMVar1);
    return puVar8;
  }
  if (DAT_0488dfa8 == '\0') {
    puVar8 = param_1;
    if (DAT_046aaf68 == '\0') goto LAB_03387e8c;
LAB_033880d8:
    local_1a8 = &DAT_0488df58;
    uStack_1a0 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar7);
    local_188 = 0;
    local_180 = (char *)0x0;
    local_178 = 0;
    uStack_170 = 0;
    local_168[0] = '\0';
    uStack_1b0 = 0x10000000000;
    local_1b8 = local_168;
    local_190 = local_168;
    puVar8 = (undefined4 *)
             FUN_0322c554(&local_1b8,"ITEMS section has the wrong size",PTR_DAT_047d1b38);
    local_180 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_178 = 0x9d3;
    uStack_1a0 = CONCAT44(0x66e1b3ab,(undefined4)uStack_1a0);
    if (local_168[0] != '\0') {
      sVar10 = strlen(local_168);
      (local_168 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
      (local_168 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
      printf("%s",local_168);
      uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar8 = (undefined4 *)(ulong)uVar6;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_033880d8;
    local_1b8 = (char *)0x0;
    local_1a8 = &DAT_0488df58;
    uStack_1a0 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar7);
    local_190 = (char *)0x0;
    local_188 = 0;
    local_180 = (char *)0x0;
    local_178 = 0;
    uStack_170 = 0;
    FUN_0322c554(&local_1b8,"ITEMS section has the wrong size",PTR_DAT_047d1b38);
    local_180 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_178 = 0x9d3;
    uStack_1a0 = CONCAT44(0x66e1b3ab,(undefined4)uStack_1a0);
    puVar8 = (undefined4 *)FUN_0322c8e0(&local_1b8);
  }
  if (((ulong)local_190 & 1) != 0) {
    puVar8 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  }
LAB_03387e8c:
  *param_1 = 0x80040200;
  return puVar8;
}


