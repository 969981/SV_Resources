/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322a644; name: FUN_0322a644
 */


undefined8 * FUN_0322a644(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char local_a8 [128];
  undefined4 local_28;
  
  for (lVar12 = 0; param_1[lVar12] != '\0'; lVar12 = lVar12 + 4) {
    if (param_1[lVar12] == ':') goto LAB_0322a6bc;
    if (param_1[lVar12 + 1] == '\0') break;
    if (param_1[lVar12 + 1] == ':') {
      lVar12 = lVar12 + 1;
      goto LAB_0322a6bc;
    }
    if (param_1[lVar12 + 2] == '\0') break;
    if (param_1[lVar12 + 2] == ':') {
      lVar12 = lVar12 + 2;
      goto LAB_0322a6bc;
    }
    if ((lVar12 == 0x7ffffffc) || (param_1[lVar12 + 3] == '\0')) break;
    if (param_1[lVar12 + 3] == ':') {
      lVar12 = lVar12 + 3;
      goto LAB_0322a6bc;
    }
  }
  lVar12 = 0xffffffff;
LAB_0322a6bc:
  pcVar6 = strrchr(param_1,0x3a);
  iVar5 = (int)pcVar6 - (int)param_1;
  if (pcVar6 == (char *)0x0) {
    iVar5 = -1;
  }
  iVar11 = (int)lVar12;
  if (iVar11 == iVar5) {
    local_b8 = local_a8;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0x80000080;
    local_28 = 1;
    FUN_031c6afc(&local_b8,param_1,0xffffffff);
    lVar12 = (long)(int)local_b0;
    uVar2 = (int)local_b0 - 1;
    if (iVar11 + 1 < (int)uVar2) {
      uVar2 = iVar11 + 1;
    }
    if ((0 < (int)uVar2) && (local_b0._0_4_ = (int)local_b0 - uVar2, (int)local_b0 != 0)) {
      uVar9 = (long)(int)local_b0 & 3;
      if ((ulong)(lVar12 + (int)~uVar2) < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          pcVar6 = local_b8 + uVar10 + (ulong)uVar2 + 3;
          pcVar1 = local_b8 + uVar10 + 1;
          uVar10 = uVar10 + 4;
          pcVar1[-1] = pcVar6[-3];
          *pcVar1 = pcVar6[-2];
          pcVar1[1] = pcVar6[-1];
          pcVar1[2] = *pcVar6;
        } while (((long)(int)local_b0 & 0xfffffffffffffffcU) != uVar10);
      }
      if (uVar9 != 0) {
        lVar12 = -uVar9;
        pcVar6 = local_b8 + uVar10;
        do {
          bVar4 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          *pcVar6 = pcVar6[uVar2];
          pcVar6 = pcVar6 + 1;
        } while (bVar4);
      }
    }
    FUN_031c75a4(&local_b8);
    uVar2 = local_b0._4_4_;
    if (((*local_b8 == '/') && (local_b8[1] == '.')) && (local_b8[2] == '.')) {
      bVar4 = local_b8[3] == '/';
    }
    else {
      bVar4 = false;
    }
    local_b0 = (ulong)local_b0._4_4_ << 0x20;
    if (-1 < (int)uVar2) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    if ((!bVar4) &&
       (uVar7 = nn::fs::OpenFile((FileHandle *)&local_c0,param_1,1), puVar3 = PTR_DAT_047d1a08,
       (int)uVar7 == 0)) {
      local_b8 = (char *)0x38;
      puVar8 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(uVar7,&local_b8,0);
      if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
        (**(code **)(puVar3 + 0x10))(puVar8,"hkSeekableStreamReader");
      }
      puVar8[5] = 0;
      puVar8[1] = 0xffffffff;
      puVar8[2] = 1;
      *puVar8 = &PTR_LAB_046aacf0;
      *(bool *)(puVar8 + 4) = local_c0 != 0;
      if (local_c0 == 0) {
        return puVar8;
      }
      puVar8[3] = local_c0;
      iVar5 = nn::fs::GetFileSize(puVar8 + 6);
      if (iVar5 == 0) {
        return puVar8;
      }
      *(undefined1 *)(puVar8 + 4) = 0;
      return puVar8;
    }
  }
  return (undefined8 *)0x0;
}


