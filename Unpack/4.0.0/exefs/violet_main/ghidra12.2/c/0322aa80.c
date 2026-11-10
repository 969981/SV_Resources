/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322aa80; name: FUN_0322aa80
 */


undefined8 * FUN_0322aa80(char *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ThreadType *pTVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char local_138 [256];
  undefined8 local_38;
  char *local_18;
  
  local_18 = param_1;
  uVar2 = nn::fs::OpenFile((FileHandle *)&local_38,param_1,6);
  if (((param_2 >> 1 & 1) == 0) || (uVar2 != 0)) {
    if ((uVar2 & 0x1ff) == 2) {
      if ((uVar2 & 0x3ffe00) == 0x200) {
        iVar3 = nn::fs::CreateFile(param_1,0);
        if (iVar3 != 0) {
          return (undefined8 *)0x0;
        }
        uVar2 = nn::fs::OpenFile((FileHandle *)&local_38,local_18,6);
        goto LAB_0322abb8;
      }
      if (299 < (uVar2 >> 9 & 0x1fff) - 0xc80) goto LAB_0322abb8;
      if ((byte)PTR_DAT_047e5fa8[0x50] < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_0322ac44;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_178 = PTR_DAT_047e5fa8;
          local_188 = (char *)0x0;
          local_170 = 2;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_168 = nn::os::GetThreadId(pTVar4);
          local_160 = (char *)0x0;
          local_158 = 0;
          local_150 = (char *)0x0;
          local_148 = 0;
          uStack_140 = 0;
          FUN_0322c554(&local_188,"Insufficient memory trying to open {}",&DAT_044e9758,&local_18);
          local_150 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Platform/Switch/Common/Base/hkNxStreamWriter.cpp"
          ;
          local_148 = 0x1f;
          FUN_0322c8e0(&local_188);
        }
        else {
LAB_0322ac44:
          local_178 = PTR_DAT_047e5fa8;
          local_170 = 2;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_168 = nn::os::GetThreadId(pTVar4);
          local_158 = 0;
          local_150 = (char *)0x0;
          local_148 = 0;
          uStack_140 = 0;
          local_138[0] = '\0';
          uStack_180 = 0x10000000000;
          local_188 = local_138;
          local_160 = local_138;
          FUN_0322c554(&local_188,"Insufficient memory trying to open {}",&DAT_044e9758,&local_18);
          local_150 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Platform/Switch/Common/Base/hkNxStreamWriter.cpp"
          ;
          local_148 = 0x1f;
          if (local_138[0] != '\0') {
            sVar6 = strlen(local_138);
            (local_138 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
            (local_138 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
            FUN_0322f020(local_138);
          }
        }
        if (((ulong)local_160 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_160 + -1,0);
        }
      }
    }
    else {
LAB_0322abb8:
      if (uVar2 == 0) goto LAB_0322abc4;
    }
    puVar5 = (undefined8 *)0x0;
  }
  else {
    nn::fs::SetFileSize(local_38,0);
LAB_0322abc4:
    puVar1 = PTR_DAT_047d1a08;
    local_188 = (char *)0x30;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_188,0);
    if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
      (**(code **)(puVar1 + 0x10))(puVar5,"hkStreamWriter");
    }
    *puVar5 = &PTR_LAB_046aad78;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    puVar5[3] = local_38;
    *(undefined1 *)(puVar5 + 4) = 1;
    puVar5[5] = 0;
  }
  return puVar5;
}


