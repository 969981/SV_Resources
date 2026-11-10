/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056d640; name: FUN_0056d640
 */


undefined8 FUN_0056d640(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  long *local_48;
  
  local_48 = (long *)FUN_01cf7e20();
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  sVar4 = strlen(param_2);
  if (sVar4 == 0) {
    return 0;
  }
  pcVar2 = param_2 + sVar4;
  if ((long)sVar4 < 1) {
LAB_0056d6bc:
    pcVar10 = pcVar2;
  }
  else {
    pcVar10 = param_2;
    if (*param_2 != '/') {
      pcVar8 = param_2;
      sVar6 = sVar4;
      do {
        sVar6 = sVar6 - 1;
        if (sVar6 == 0) goto LAB_0056d6bc;
        pcVar10 = pcVar8 + 1;
        pcVar9 = pcVar8 + 1;
        pcVar8 = pcVar10;
      } while (*pcVar9 != '/');
    }
  }
  if (pcVar2 == pcVar10) {
    return 0;
  }
  uVar11 = (long)pcVar10 - (long)param_2;
  if (uVar11 == 0xffffffffffffffff) {
    return 0;
  }
  uVar7 = sVar4;
  if (uVar11 <= sVar4) {
    uVar7 = uVar11;
  }
  sVar6 = 0xc;
  if (uVar7 < 0xd) {
    sVar6 = uVar7;
  }
  if (sVar6 == 0) {
    if (0xc < uVar7) {
      return 0;
    }
  }
  else {
    iVar3 = memcmp(param_2,"userSessions",sVar6);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      iVar5 = 1;
    }
    if ((0xc < uVar7) || (iVar3 != 0)) goto LAB_0056d728;
  }
  iVar5 = -(uint)(uVar7 < 0xc);
LAB_0056d728:
  if (iVar5 != 0) {
    return 0;
  }
  uVar7 = sVar4 - (uVar11 + 1);
  pcVar8 = param_2 + uVar11 + 1;
  if (uVar7 == 0) {
LAB_0056d7ac:
    pcVar9 = pcVar2;
  }
  else {
    pcVar9 = pcVar2;
    if ((0 < (long)pcVar2 - (long)pcVar8) && (pcVar9 = pcVar8, *pcVar8 != '/')) {
      param_2 = param_2 + (sVar4 - (long)pcVar10) + -2;
      pcVar10 = pcVar8;
      do {
        if (param_2 == (char *)0x0) goto LAB_0056d7ac;
        pcVar9 = pcVar10 + 1;
        pcVar1 = pcVar10 + 1;
        param_2 = param_2 + -1;
        pcVar10 = pcVar9;
      } while (*pcVar1 != '/');
    }
  }
  uVar11 = (long)pcVar9 - (long)pcVar8;
  if (pcVar2 == pcVar9) {
    uVar11 = 0xffffffffffffffff;
  }
  if (uVar11 <= uVar7) {
    uVar7 = uVar11;
  }
  FUN_0056d870(&local_60,pcVar8,uVar7);
  if (((long *)param_1[3] != local_48) &&
     (uVar11 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar11 & 1) == 0)) {
    FUN_01d0e1a8(param_1,&local_60);
    if ((local_60 & 1) == 0) {
      return 1;
    }
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))
              ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
    *(undefined2 *)param_1 = 0;
  }
  param_1[2] = local_50;
  param_1[1] = uStack_58;
  *param_1 = local_60;
  return 1;
}


