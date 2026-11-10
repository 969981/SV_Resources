/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03227c08; name: FUN_03227c08
 */


ulong FUN_03227c08(ulong param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  char *local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130 [256];
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 - lVar1 == 0) goto LAB_03227d08;
  plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x40))();
  if (plVar4 != (long *)0x0) {
    param_1 = (**(code **)(*plVar4 + 0x50))(plVar4,-(lVar2 - lVar1 << 0x20) >> 0x20,1);
    goto LAB_03227d08;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
  if (DAT_048853a0 < 2) {
    param_1 = 0;
    if (DAT_046aaf68 == '\0') goto LAB_03227d08;
LAB_03227d28:
    local_170 = &DAT_04885350;
    uStack_168 = 2;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_160 = nn::os::GetThreadId(pTVar5);
    local_150 = 0;
    local_148 = (char *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    local_130[0] = '\0';
    uStack_178 = 0x10000000000;
    local_180 = local_130;
    local_158 = local_130;
    param_1 = FUN_0322c554(&local_180,
                           "Could not detach cleanly from stream because it is not seekable.",
                           PTR_DAT_047d1b38);
    local_148 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/System/Io/Detail/hkReadBuffer.cpp"
    ;
    local_140 = 0x50;
    if (local_130[0] != '\0') {
      sVar6 = strlen(local_130);
      (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
      (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
      printf("%s",local_130);
      uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
      param_1 = (ulong)uVar3;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03227d28;
    local_180 = (char *)0x0;
    local_170 = &DAT_04885350;
    uStack_168 = 2;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_160 = nn::os::GetThreadId(pTVar5);
    local_158 = (char *)0x0;
    local_150 = 0;
    local_148 = (char *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    FUN_0322c554(&local_180,"Could not detach cleanly from stream because it is not seekable.",
                 PTR_DAT_047d1b38);
    local_148 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/System/Io/Detail/hkReadBuffer.cpp"
    ;
    local_140 = 0x50;
    param_1 = FUN_0322c8e0(&local_180);
  }
  if (((ulong)local_158 & 1) != 0) {
    param_1 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
  }
LAB_03227d08:
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return param_1;
}


