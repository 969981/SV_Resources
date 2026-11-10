/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b20c8; name: FUN_031b20c8
 */


undefined8 FUN_031b20c8(undefined8 param_1,long *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  char *__n;
  void *pvVar6;
  ThreadType *pTVar7;
  size_t sVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *local_260;
  undefined8 uStack_258;
  undefined8 *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  char local_210 [256];
  undefined1 auStack_110 [12];
  int local_104;
  int iStack_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  char local_90;
  int local_8c;
  char local_87;
  char local_86;
  uint local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  char local_50;
  long *local_48;
  
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_80 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  local_48 = (long *)*param_2;
  *param_2 = 0;
  if (local_48 == (long *)0x0) {
    local_80 = (undefined1 *)param_2[1];
    local_78 = local_80 + param_2[2];
    local_70 = local_80;
  }
  else {
    (**(code **)(*local_48 + 0x10))(local_48,&local_80);
  }
  local_50 = '\x01';
  uVar9 = 0x80040200;
  iVar5 = FUN_031b12f0(&local_80,auStack_110);
  if (iVar5 < 0) goto LAB_031b245c;
  if (local_f4 == 0) {
    local_f4 = 1;
  }
  if (local_87 == '\0') {
    if (local_86 == '\0') {
      if (local_84 < 2) {
        local_84 = 1;
      }
      local_f8 = 1;
    }
    else {
      local_84 = 1;
    }
    iVar5 = 1;
  }
  else {
    iVar5 = 6;
    local_f8 = 1;
    local_84 = 1;
  }
  *param_3 = local_f4;
  param_3[1] = iVar5;
  param_3[2] = local_84;
  param_3[3] = iStack_100;
  param_3[4] = local_104;
  param_3[5] = local_f8;
  param_3[6] = local_8c;
  __n = (char *)FUN_031a8080(param_3);
  puVar3 = PTR_DAT_047d1a08;
  if (*(char **)(param_3 + 0x50) < __n) {
    local_260 = __n;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_260,0);
    pcVar10 = *(char **)(param_3 + 0x4e);
    if (__n <= *(char **)(param_3 + 0x4e)) {
      pcVar10 = __n;
    }
    memcpy(pvVar6,*(void **)(param_3 + 0x4c),(size_t)pcVar10);
    if ((char)param_3[0x52] == '\0') {
      (**(code **)(puVar3 + 8))(0,*(undefined8 *)(param_3 + 0x4c),0);
    }
    *(void **)(param_3 + 0x4c) = pvVar6;
    *(char **)(param_3 + 0x50) = __n;
    *(undefined1 *)(param_3 + 0x52) = 0;
  }
  *(char **)(param_3 + 0x4e) = __n;
  if (local_90 == '\0') {
LAB_031b2278:
    pvVar6 = *(void **)(param_3 + 0x4c);
    pcVar10 = local_78 + -(long)local_80;
    if ((long)__n <= (long)pcVar10) {
      memcpy(pvVar6,local_80,(size_t)__n);
      local_80 = local_80 + (long)__n;
      uVar9 = 0;
      goto LAB_031b245c;
    }
    if (local_48 == (long *)0x0) {
      memcpy(pvVar6,local_80,(size_t)pcVar10);
      local_80 = local_78;
    }
    else {
      pcVar10 = (char *)(**(code **)(*local_48 + 0x38))(local_48,&local_80,pvVar6,__n);
    }
    if (pcVar10 == __n) {
      uVar9 = 0;
      goto LAB_031b245c;
    }
    if (DAT_0487efb8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_031b245c;
    }
    else if (DAT_046aaf68 == '\0') {
      local_260 = (char *)0x0;
      local_250 = &DAT_0487ef68;
      uStack_248 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_240 = nn::os::GetThreadId(pTVar7);
      local_238 = (char *)0x0;
      local_230 = 0;
      local_228 = (char *)0x0;
      local_220 = 0;
      uStack_218 = 0;
      FUN_0322c554(&local_260,"Failed to read image data.",PTR_DAT_047d1b38);
      local_220 = 0x1b4;
      goto LAB_031b23c0;
    }
    local_250 = &DAT_0487ef68;
    uStack_248 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_240 = nn::os::GetThreadId(pTVar7);
    local_260 = local_210;
    local_230 = 0;
    local_228 = (char *)0x0;
    local_220 = 0;
    uStack_218 = 0;
    local_210[0] = '\0';
    uStack_258 = 0x10000000000;
    local_238 = local_260;
    FUN_0322c554(&local_260,"Failed to read image data.",PTR_DAT_047d1b38);
    local_220 = 0x1b4;
LAB_031b2524:
    local_228 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    if (local_210[0] != '\0') {
      sVar8 = strlen(local_210);
      (local_210 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[0] = '\n';
      (local_210 + (int)((int)sVar8 - (uint)((int)sVar8 == 0xff)))[1] = '\0';
      FUN_0322f020(local_210);
    }
  }
  else {
    uVar1 = param_3[3];
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar2 = 0;
    if ((byte)(&DAT_0487f132)[(ulong)(uint)param_3[6] * 0x38] != 0) {
      uVar2 = (uVar1 - 1) / (uint)(byte)(&DAT_0487f132)[(ulong)(uint)param_3[6] * 0x38];
    }
    if (local_fc == (uVar2 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)(uint)param_3[6] * 0x1c] >> 3
       ) goto LAB_031b2278;
    if (DAT_0487efb8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_031b245c;
LAB_031b23f8:
      local_250 = &DAT_0487ef68;
      uStack_248 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_240 = nn::os::GetThreadId(pTVar7);
      local_260 = local_210;
      local_230 = 0;
      local_228 = (char *)0x0;
      local_220 = 0;
      uStack_218 = 0;
      local_210[0] = '\0';
      uStack_258 = 0x10000000000;
      local_238 = local_260;
      FUN_0322c554(&local_260,
                   "The row pitch specified in the header doesn\'t match the expected pitch.",
                   PTR_DAT_047d1b38);
      local_220 = 0x1ac;
      goto LAB_031b2524;
    }
    if (DAT_046aaf68 != '\0') goto LAB_031b23f8;
    local_260 = (char *)0x0;
    local_250 = &DAT_0487ef68;
    uStack_248 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_240 = nn::os::GetThreadId(pTVar7);
    local_238 = (char *)0x0;
    local_230 = 0;
    local_228 = (char *)0x0;
    local_220 = 0;
    uStack_218 = 0;
    FUN_0322c554(&local_260,
                 "The row pitch specified in the header doesn\'t match the expected pitch.",
                 PTR_DAT_047d1b38);
    local_220 = 0x1ac;
LAB_031b23c0:
    local_228 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    FUN_0322c8e0(&local_260);
  }
  if (((ulong)local_238 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_238 + -1,0);
  }
LAB_031b245c:
  if (local_50 != '\0') {
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48,&local_80);
      plVar4 = local_48;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    local_50 = '\0';
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  return uVar9;
}


