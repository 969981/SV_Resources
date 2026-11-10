/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033609b8; name: FUN_033609b8
 */


undefined4 FUN_033609b8(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  ulong extraout_x1;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  char *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  char local_148 [256];
  long local_48;
  
  local_48 = param_1;
  lVar2 = FUN_03360ff8(param_2,&local_48);
  if (lVar2 == 0) {
    uVar8 = 0;
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 4);
    uVar8 = ((int)lVar2 - (int)*(undefined8 *)(param_2 + 0x10)) * 0x20000000;
  }
  if (-1 < (int)(uVar5 | uVar8)) {
    return 0;
  }
  FUN_03361080(param_3,&local_48);
  if ((extraout_x1 & 1) != 0) {
    lVar2 = local_48;
    if (*(int *)(local_48 + 0x40) < 1) {
      uVar9 = 0;
    }
    else {
      lVar11 = 0;
      uVar10 = 0;
      do {
        lVar6 = *(long *)(*(long *)(lVar2 + 0x38) + lVar11 * 8);
        uVar9 = uVar10;
        if (lVar6 != 0) {
          iVar1 = FUN_033609b8(lVar6,param_2,param_3);
          uVar9 = 0x80040200;
          if (-1 < iVar1) {
            uVar9 = uVar10;
          }
          lVar2 = local_48;
        }
        lVar11 = lVar11 + 1;
        uVar10 = uVar9;
      } while (lVar11 < *(int *)(lVar2 + 0x40));
    }
    if (0 < *(int *)(lVar2 + 0x30)) {
      lVar11 = 0;
      uVar10 = uVar9;
      do {
        iVar1 = FUN_03360f44(*(undefined8 *)(*(long *)(lVar2 + 0x28) + lVar11 * 8),param_2,param_3);
        lVar11 = lVar11 + 1;
        uVar9 = 0x80040200;
        if (-1 < iVar1) {
          uVar9 = uVar10;
        }
        lVar2 = local_48;
        uVar10 = uVar9;
      } while (lVar11 < *(int *)(local_48 + 0x30));
    }
    local_198 = (char *)0x0;
    local_190 = -0x8000000000000000;
    local_188 = (undefined8 *)&DAT_03d7702c;
    local_180 = (ulong)local_180._4_4_ << 0x20;
    FUN_0336a218(lVar2,&local_198);
    FUN_03361080(param_2,&local_48);
    lVar2 = FUN_03360ff8(param_3,&local_48);
    if (lVar2 != 0) {
      FUN_0336133c(param_3,lVar2);
    }
    if ((local_188 != (undefined8 *)0x0) && (*(int *)((long)local_188 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_188,0);
      local_188 = (undefined8 *)&DAT_03d7702c;
      local_180 = local_180 & 0xffffffff00000000;
    }
    lVar2 = local_190;
    uVar7 = (ulong)local_190._4_4_;
    local_190 = (ulong)local_190._4_4_ << 0x20;
    if (lVar2 < 0) {
      return uVar9;
    }
    if (local_198 == (char *)0x0) {
      return uVar9;
    }
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_198,uVar7 << 3);
    return uVar9;
  }
  if (DAT_0488d8c8 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_198 = (char *)0x0;
    local_188 = &DAT_0488d878;
    local_180 = 1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_178 = nn::os::GetThreadId(pTVar3);
    local_170 = (char *)0x0;
    local_168 = 0;
    local_160 = (char *)0x0;
    local_158 = 0;
    uStack_150 = 0;
    FUN_0322c554(&local_198,"Loop in field or parents detected while trying to process {}/{}",
                 &DAT_047ad1e0,local_48 + 0x18,local_48 + 0x20);
    local_160 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
    ;
    local_158 = 0x5d9;
    local_180 = CONCAT44(0xa71bbc06,(undefined4)local_180);
    FUN_0322c8e0(&local_198);
    goto LAB_03360ab8;
  }
  local_188 = &DAT_0488d878;
  local_180 = 1;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_178 = nn::os::GetThreadId(pTVar3);
  local_148[0] = '\0';
  local_190 = 0x10000000000;
  local_168 = 0;
  local_160 = (char *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_198 = local_148;
  local_170 = local_148;
  FUN_0322c554(&local_198,"Loop in field or parents detected while trying to process {}/{}",
               &DAT_047ad1e0,local_48 + 0x18,local_48 + 0x20);
  local_160 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
  ;
  local_158 = 0x5d9;
  local_180 = CONCAT44(0xa71bbc06,(undefined4)local_180);
  if (local_148[0] != '\0') {
    sVar4 = strlen(local_148);
    (local_148 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_148 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_148);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_03360ab8:
  if (((ulong)local_170 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_170 + -1,0);
  }
  return 0x80040200;
}


