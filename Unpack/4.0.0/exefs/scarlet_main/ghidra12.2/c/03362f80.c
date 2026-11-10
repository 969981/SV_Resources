/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03362f80; name: FUN_03362f80
 */


undefined8 FUN_03362f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined2 *puVar7;
  long *plVar8;
  ThreadType *pTVar9;
  size_t sVar10;
  char *local_190;
  undefined8 uStack_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140 [256];
  
  FUN_031ca554(&local_190,*param_3,param_3[1]);
  pcVar6 = local_190;
  puVar7 = (undefined2 *)FUN_031e1c40(param_2,(ulong)local_190 & 0xfffffffffffffffe,0);
  if (((ulong)pcVar6 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,pcVar6 + -1,0);
  }
  if ((undefined2 *)0x1 < puVar7) {
    *(undefined8 *)
     (puVar7 + (ulong)(byte)(POPCOUNT((char)*puVar7) + POPCOUNT((char)((ushort)*puVar7 >> 8))) * 4 +
               8) = 0;
    puVar5 = PTR_DAT_047e6798;
    do {
      FUN_031dbdbc(&local_190,puVar7,puVar5);
      if (local_190 != (char *)0x0) {
        if (((ulong)local_180 & 1) != 0) {
          plVar8 = (long *)((ulong)local_180 & 0xfffffffffffffffe);
          plVar1 = plVar8 + 1;
          do {
            lVar4 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar4 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        FUN_031ca644(local_190,*param_3,param_3[1]);
        return 0;
      }
      if (((ulong)local_180 & 1) != 0) {
        plVar8 = (long *)((ulong)local_180 & 0xfffffffffffffffe);
        plVar1 = plVar8 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      puVar7 = *(undefined2 **)(puVar7 + 4);
    } while (puVar7 != (undefined2 *)0x0);
    return 0;
  }
  if (DAT_0488d8c8 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_190 = (char *)0x0;
    local_180 = &DAT_0488d878;
    uStack_178 = 1;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar9);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"Field {} not found applying patch {}",&DAT_047ad350,param_3,param_1);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
    ;
    local_150 = 0x98b;
    uStack_178 = CONCAT44(0xa71bbc07,(undefined4)uStack_178);
    FUN_0322c8e0(&local_190);
    goto LAB_03363100;
  }
  local_180 = &DAT_0488d878;
  uStack_178 = 1;
  pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
  local_170 = nn::os::GetThreadId(pTVar9);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_140[0] = '\0';
  local_150 = 0;
  uStack_148 = 0;
  uStack_188 = 0x10000000000;
  local_190 = local_140;
  local_168 = local_140;
  FUN_0322c554(&local_190,"Field {} not found applying patch {}",&DAT_047ad350,param_3,param_1);
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
  ;
  local_150 = 0x98b;
  uStack_178 = CONCAT44(0xa71bbc07,(undefined4)uStack_178);
  if (local_140[0] != '\0') {
    sVar10 = strlen(local_140);
    (local_140 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_03363100:
  if (((ulong)local_168 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return 0x80040200;
}


