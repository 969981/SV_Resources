/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056d9b0; name: FUN_0056d9b0
 */


undefined8 FUN_0056d9b0(ulong *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  long *local_38;
  
  local_38 = (long *)FUN_01cf7e20();
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  sVar4 = strlen(param_2);
  if (sVar4 == 0) {
    return 0;
  }
  if ((long)sVar4 < 1) {
LAB_0056da28:
    pcVar7 = param_2 + sVar4;
  }
  else {
    pcVar7 = param_2;
    if (*param_2 != '/') {
      pcVar8 = param_2;
      sVar6 = sVar4;
      do {
        sVar6 = sVar6 - 1;
        if (sVar6 == 0) goto LAB_0056da28;
        pcVar7 = pcVar8 + 1;
        pcVar1 = pcVar8 + 1;
        pcVar8 = pcVar7;
      } while (*pcVar1 != '/');
    }
  }
  if (param_2 + sVar4 == pcVar7) {
    return 0;
  }
  uVar9 = (long)pcVar7 - (long)param_2;
  if (uVar9 == 0xffffffffffffffff) {
    return 0;
  }
  uVar2 = sVar4;
  if (uVar9 <= sVar4) {
    uVar2 = uVar9;
  }
  sVar6 = 4;
  if (uVar2 < 5) {
    sVar6 = uVar2;
  }
  if (sVar6 == 0) {
    if (4 < uVar2) {
      return 0;
    }
  }
  else {
    iVar3 = memcmp(param_2,&DAT_03c4f382,sVar6);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      iVar5 = 1;
    }
    if ((4 < uVar2) || (iVar3 != 0)) goto LAB_0056da94;
  }
  iVar5 = -(uint)(uVar2 < 4);
LAB_0056da94:
  if (iVar5 != 0) {
    return 0;
  }
  FUN_0056d870(&local_50,param_2 + uVar9 + 1,sVar4 - (uVar9 + 1));
  if (((long *)param_1[3] != local_38) &&
     (uVar9 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar9 & 1) == 0)) {
    FUN_01d0e1a8(param_1,&local_50);
    if ((local_50 & 1) == 0) {
      return 1;
    }
    (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))
              ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
    *(undefined2 *)param_1 = 0;
  }
  param_1[2] = local_40;
  param_1[1] = uStack_48;
  *param_1 = local_50;
  return 1;
}


