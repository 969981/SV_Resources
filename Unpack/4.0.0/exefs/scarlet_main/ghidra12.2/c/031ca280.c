/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca280; name: FUN_031ca280
 */


undefined4 FUN_031ca280(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  ThreadType *pTVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 local_68 [2];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  char *pcStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18 [2];
  
  local_18[0] = 0x80040257;
  if (param_1 == param_2) {
    if (DAT_04883320 != '\0') {
      local_68[0] = 0;
      local_58 = &DAT_048832d0;
      uStack_50 = 1;
      pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
      local_48 = nn::os::GetThreadId(pTVar2);
      pcVar4 = "s.isEmpty()";
      local_28 = 0x3a;
      puVar3 = PTR_DAT_047e5968;
LAB_031ca3fc:
      uStack_20 = 0;
      pcStack_30 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
      ;
      local_38 = 0;
      local_40 = 0;
      FUN_0322c554(local_68,"HK_RETURN_RES_IF({}) returning {}. ",puVar3,pcVar4,local_18);
      FUN_0322c554(local_68,&DAT_03c886bc,PTR_DAT_047d1b38);
      FUN_0322c8e0(local_68);
      if ((local_40 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_40 - 1,0);
      }
    }
  }
  else {
    uVar5 = 0;
    do {
      local_18[0] = 0x80040257;
      if (9 < *param_1 - 0x30) {
        if (DAT_04883320 == '\0') {
          return 0x80040257;
        }
        local_68[0] = 0;
        local_58 = &DAT_048832d0;
        uStack_50 = 1;
        pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
        local_48 = nn::os::GetThreadId(pTVar2);
        pcVar4 = "isDigit(c) == false";
        local_28 = 0x3e;
        puVar3 = PTR_DAT_047e5a10;
        goto LAB_031ca3fc;
      }
      uVar1 = ((uint)*param_1 + uVar5 * 10) - 0x30;
      local_18[0] = 0x80040257;
      if (uVar1 < uVar5) {
        if (DAT_04883320 == '\0') {
          return 0x80040257;
        }
        local_68[0] = 0;
        local_58 = &DAT_048832d0;
        uStack_50 = 1;
        pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
        local_48 = nn::os::GetThreadId(pTVar2);
        pcVar4 = "cur < prev";
        local_28 = 0x42;
        puVar3 = PTR_DAT_047e5a18;
        goto LAB_031ca3fc;
      }
      param_1 = param_1 + 1;
      uVar5 = uVar1;
    } while (param_2 != param_1);
    *param_3 = uVar1;
    local_18[0] = 0;
  }
  return local_18[0];
}


