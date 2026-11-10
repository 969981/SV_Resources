/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033919a4; name: FUN_033919a4
 */


int * FUN_033919a4(int *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_350;
  undefined8 local_348;
  undefined1 *local_340;
  undefined8 local_338;
  undefined1 auStack_330 [384];
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_160 [256];
  
  if (((param_1[6] != 0) && (param_1[0x3e] == -1)) && (param_1[0x4a] != 1)) {
    return (int *)0x0;
  }
  piVar9 = param_1 + 2;
  FUN_0339187c(piVar9);
  local_348 = 0x7fffffffffffffff;
  local_340 = auStack_330;
  local_338 = -0x7ffffff000000000;
  local_350 = param_2;
  iVar3 = FUN_03398304(&local_350,0x54414730);
  if (iVar3 == 0x54414730) {
    bVar2 = false;
LAB_03391a60:
    plVar4 = (long *)param_2[7];
    if (plVar4 == (long *)0x0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(local_340 + (long)(int)local_338 * 0x18 + -0x14);
      lVar10 = param_2[5];
      lVar11 = param_2[2];
      lVar12 = *param_2;
      uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
      plVar4 = (long *)param_2[7];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x40))
                  (plVar4,param_2,((ulong)uVar1 & 0x3fffffff) + (lVar10 - lVar11) + lVar12 + -8);
      }
    }
    param_1[0x3e] = param_1[0x3e] + 1;
    FUN_03391d68(&local_350,param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x9a))
    ;
    if (-1 < *param_1) {
      lVar10 = (long)(int)local_338 + -1;
      if ((local_350[5] - local_350[2]) + *local_350 ==
          *(long *)(local_340 + lVar10 * 0x18 + 8) +
          ((ulong)*(uint *)(local_340 + lVar10 * 0x18 + 4) & 0x3fffffff)) {
        local_348 = *(undefined8 *)(local_340 + lVar10 * 0x18 + 0x10);
        local_338 = CONCAT44(local_338._4_4_,(int)lVar10);
      }
      else {
        *(byte *)(local_350 + 4) = *(byte *)(local_350 + 4) | 2;
      }
      if (bVar2) {
        param_1[0x4a] = 1;
      }
      plVar4 = (long *)param_2[7];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x40))(plVar4,param_2,uVar5);
      }
      goto LAB_03391c68;
    }
    plVar4 = (long *)param_2[7];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2,uVar5);
    }
  }
  else {
    iVar3 = FUN_03398304(&local_350,0x54434d30);
    if (iVar3 == 0x54434d30) {
      bVar2 = true;
      param_1[0x4a] = 2;
      goto LAB_03391a60;
    }
    if (DAT_0488dfa8 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_03391cbc;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_1a0 = &DAT_0488df58;
        uStack_198 = 2;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Input does not appear to be a tagfile",PTR_DAT_047d1b38);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        local_170 = 0x6df;
        FUN_0322c8e0(&local_1b0);
      }
      else {
LAB_03391cbc:
        local_1a0 = &DAT_0488df58;
        uStack_198 = 2;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_1b0 = local_160;
        local_188 = local_160;
        FUN_0322c554(&local_1b0,"Input does not appear to be a tagfile",PTR_DAT_047d1b38);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        local_170 = 0x6df;
        if (local_160[0] != '\0') {
          sVar7 = strlen(local_160);
          (local_160 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
          (local_160 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
          printf("%s",local_160);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_188 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
      }
    }
  }
  piVar9 = (int *)0x0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
LAB_03391c68:
  lVar10 = local_338;
  uVar8 = (ulong)local_338._4_4_;
  local_338 = (ulong)local_338._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_340 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_340,uVar8 * 0x18);
  }
  return piVar9;
}


