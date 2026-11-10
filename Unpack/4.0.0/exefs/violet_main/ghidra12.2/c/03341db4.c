/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03341db4; name: FUN_03341db4
 */


void FUN_03341db4(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  FILE *__stream;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  char local_188 [256];
  undefined *local_88;
  char local_80;
  long local_78;
  MutexType *local_70;
  
  puVar2 = PTR_DAT_047e61d8;
  if (param_1 != (ulong *)0x0) {
    FUN_03345f54(&local_88,*(undefined8 *)PTR_DAT_047e61d8);
    puVar1 = PTR_DAT_047d1b38;
    lVar4 = *(long *)puVar2;
    __stream = *(FILE **)PTR_stdout_047cb860;
    *(int *)(lVar4 + 0x1b8) = *(int *)(lVar4 + 0x1b8) + 1;
    do {
      iVar3 = FUN_033483e4(lVar4,param_1[1],&local_88);
      if (iVar3 < 0) {
        if (DAT_0488d728 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_03341ef4;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1d8 = (char *)0x0;
            local_1c8 = &DAT_0488d6d8;
            uStack_1c0 = 2;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar5);
            local_1b0 = (char *)0x0;
            local_1a8 = 0;
            local_190 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            FUN_0322c554(&local_1d8,"Unable to unregister patch list",puVar1);
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkPatchesRegNode.cpp"
            ;
            local_198 = 0x34;
            FUN_0322c8e0(&local_1d8);
          }
          else {
LAB_03341ef4:
            local_1d8 = (char *)0x0;
            local_1c8 = &DAT_0488d6d8;
            uStack_1c0 = 2;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar5);
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_190 = 0;
            local_188[0] = '\0';
            uStack_1d0 = 0x10000000000;
            local_1d8 = local_188;
            local_1b0 = local_188;
            FUN_0322c554(&local_1d8,"Unable to unregister patch list",puVar1);
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkPatchesRegNode.cpp"
            ;
            local_198 = 0x34;
            if (local_188[0] != '\0') {
              sVar6 = strlen(local_188);
              (local_188 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
              (local_188 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
              printf("%s",local_188);
              fflush(__stream);
            }
          }
          if (((ulong)local_1b0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1b0 + -1,0);
          }
        }
      }
      param_1 = (ulong *)(*param_1 & 0xfffffffffffffffc);
      lVar4 = *(long *)puVar2;
    } while (param_1 != (ulong *)0x0);
    iVar3 = *(int *)(lVar4 + 0x1b8) + -1;
    *(int *)(lVar4 + 0x1b8) = iVar3;
    if ((iVar3 == 0) && (*(char *)(lVar4 + 0x1bc) != '\0')) {
      *(undefined1 *)(lVar4 + 0x1bc) = 0;
      FUN_033431ec();
    }
    local_88 = PTR_DAT_047e6738 + 0x10;
    if (((local_80 != '\0') && (*(int *)(local_78 + 0xb0) == 0)) && (*(int *)(local_78 + 0xa0) != 0)
       ) {
      FUN_033431ec();
    }
    if (local_70 != (MutexType *)0x0) {
      nn::os::UnlockMutex(local_70);
    }
  }
  return;
}


