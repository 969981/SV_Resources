/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336ae48; name: FUN_0336ae48
 */


/* WARNING: Removing unreachable block (ram,0x0336aefc) */

ulong FUN_0336ae48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  ulong *puVar7;
  code *pcVar8;
  int iVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
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
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_60 = &PTR_FUN_047ad5d0;
  uStack_58 = param_2;
  local_50 = param_1;
  local_48 = (**(code **)(*(long *)*param_1 + 0x40))();
  uVar3 = FUN_03364b58(&local_60,param_3,param_4);
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 6);
    uVar4 = uVar3;
    if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= (int)uVar2) {
      uVar4 = FUN_0336facc(param_1 + 5,(long)(int)uVar2 + 1);
    }
    puVar7 = (ulong *)param_1[5];
    if ((uVar2 != 0) && (0 < (int)uVar2)) {
      puVar13 = puVar7 + (int)(uVar2 - 1);
      if (uVar2 == 1) {
        puVar10 = puVar7 + 1;
      }
      else {
        iVar9 = -(uVar2 & 0xfffffffe);
        do {
          puVar10 = puVar13;
          uVar12 = *puVar10;
          iVar9 = iVar9 + 2;
          uVar11 = puVar10[-1];
          puVar10[-1] = 0;
          *puVar10 = uVar11;
          puVar10[1] = uVar12;
          puVar13 = puVar10 + -2;
        } while (iVar9 != 0);
        puVar10 = puVar10 + -1;
        if ((uVar2 & 1) == 0) goto LAB_0336b090;
      }
      *puVar10 = *puVar13;
      *puVar13 = 0;
    }
LAB_0336b090:
    *puVar7 = 0;
    *(int *)(param_1 + 6) = (int)((long)(int)uVar2 + 1);
    puVar13 = (ulong *)*puVar7;
    *puVar7 = uVar3;
    puVar1 = PTR_DAT_047d1a08;
    if (puVar13 == (ulong *)0x0) {
      return uVar4;
    }
    if ((*(uint *)((long)puVar13 + 0x1c) < 6 &&
         (1 << (ulong)(*(uint *)((long)puVar13 + 0x1c) & 0x1f) & 0x32U) != 0) &&
       (uVar3 = puVar13[2], uVar3 != 0)) {
      FUN_03364aa0(uVar3);
      (**(code **)(puVar1 + 8))(0,uVar3,0);
    }
    if ((puVar13[1] & 1) != 0) {
      (**(code **)(puVar1 + 8))(0,puVar13[1] - 1,0);
    }
    if ((*puVar13 & 1) != 0) {
      (**(code **)(puVar1 + 8))(0,*puVar13 - 1,0);
    }
    pcVar8 = *(code **)(puVar1 + 8);
    goto LAB_0336b134;
  }
  if (DAT_0488d990 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0;
    }
LAB_0336afa0:
    local_1a0 = &DAT_0488d940;
    uStack_198 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar5);
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    local_180 = 0;
    local_178 = (char *)0x0;
    uStack_1a8 = 0x10000000000;
    local_1b0 = local_160;
    local_188 = local_160;
    uVar3 = FUN_0322c554(&local_1b0,"Versioning was unable to create field {} in type {} ({})",
                         &DAT_047ad6f0,param_3,param_1 + 1,param_4);
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
    ;
    local_170 = 0x3f7;
    if (local_160[0] != '\0') {
      sVar6 = strlen(local_160);
      (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
      (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
      printf("%s",local_160);
      uVar2 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar3 = (ulong)uVar2;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_0336afa0;
    local_1b0 = (char *)0x0;
    local_1a0 = &DAT_0488d940;
    uStack_198 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar5);
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    FUN_0322c554(&local_1b0,"Versioning was unable to create field {} in type {} ({})",&DAT_047ad6f0
                 ,param_3,param_1 + 1,param_4);
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
    ;
    local_170 = 0x3f7;
    uVar3 = FUN_0322c8e0(&local_1b0);
  }
  if (((ulong)local_188 & 1) == 0) {
    return uVar3;
  }
  puVar13 = (ulong *)(local_188 + -1);
  pcVar8 = *(code **)(PTR_DAT_047d1a08 + 8);
LAB_0336b134:
  uVar3 = (*pcVar8)(0,puVar13,0);
  return uVar3;
}


