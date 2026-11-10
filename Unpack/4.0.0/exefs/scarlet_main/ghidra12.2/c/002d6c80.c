/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d6c80; name: FUN_002d6c80
 */


undefined8
FUN_002d6c80(char *param_1,long *param_2,long *param_3,int param_4,int param_5,long *param_6,
            char *param_7,long param_8)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  byte bVar11;
  undefined1 auStack_68 [8];
  long local_60;
  long lStack_58;
  long local_48;
  
  *param_7 = '\0';
  lStack_58 = param_3[1];
  local_60 = *param_3;
  if (local_60 == 0) {
    lStack_58 = param_2[1];
    local_60 = *param_2;
  }
  cVar2 = *param_1;
  cVar3 = param_1[1];
  cVar1 = cVar2;
  cVar4 = cVar3;
  if (param_1[2] != '\0') {
    cVar1 = cVar3;
    cVar4 = cVar2;
  }
  if ((cVar1 != '\0') && (local_60 != *param_2)) {
    return 0;
  }
  if ((cVar4 != '\0') && (local_60 + lStack_58 != *param_2 + param_2[1])) {
    return 0;
  }
  bVar5 = param_5 == 2;
  if (bVar5) {
LAB_002d6d50:
    bVar11 = 1;
    param_5 = 1;
  }
  else {
    if (param_5 == 3) {
      bVar6 = param_8 == 0;
      bVar11 = 0;
      goto LAB_002d6d78;
    }
    if (cVar3 != '\0') goto LAB_002d6d50;
    bVar11 = 0;
  }
  if (param_6 == (long *)0x0) {
    bVar6 = (bool)(bVar11 ^ 1);
    if (bVar11 == 0) {
      param_5 = 1;
    }
  }
  else {
    bVar6 = false;
  }
LAB_002d6d78:
  uVar7 = FUN_002d6b7c(param_1,param_5);
  uVar8 = FUN_002d698c(uVar7,param_2,&local_60,param_4 == 1 || (bVar5 || cVar2 != '\0'),bVar6,
                       param_1[2] == '\0',param_7,&local_48,param_8);
  if (*param_7 != '\0') {
    pcVar9 = (code *)FUN_002cde30();
    (*pcVar9)(auStack_68);
    return 0;
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (bVar11 != 0) {
    lVar10 = *param_2 + param_2[1];
    if (param_1[2] != '\0') {
      lVar10 = *param_2;
    }
    if (local_48 != lVar10) {
      return 0;
    }
  }
  if (param_6 != (long *)0x0) {
    if (param_1[2] == '\0') {
      lVar10 = *param_2;
    }
    else {
      lVar10 = local_48;
      local_48 = *param_2 + param_2[1];
    }
    *param_6 = lVar10;
    param_6[1] = local_48 - lVar10;
  }
  return 1;
}


