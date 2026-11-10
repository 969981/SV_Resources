/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00134820; name: FUN_00134820
 */


void FUN_00134820(long *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  switch(*param_2) {
  case 9:
    if ((*param_3 == 8) && (iVar4 = param_3[2], iVar5 = FUN_0012ea70(param_1), iVar5 <= iVar4)) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    FUN_00133ee0(param_1,param_3,*(undefined1 *)(param_2 + 2));
    return;
  case 10:
    iVar4 = FUN_001345b0(param_1,param_3);
    uVar9 = iVar4 << 7 | param_2[2] << 0x10 | 10;
    break;
  default:
    goto switchD_00134860_caseD_b;
  case 0xc:
    bVar1 = *(byte *)((long)param_2 + 10);
    sVar2 = *(short *)(param_2 + 2);
    iVar4 = FUN_00134700(param_1,param_3);
    if (iVar4 == 0) {
      FUN_001345b0(param_1,param_3);
      uVar7 = 0;
    }
    else {
      uVar7 = 0x8000;
    }
    uVar9 = (int)sVar2 << 0x10 | (uint)bVar1 << 7 | uVar7 | param_3[2] << 0x18 | 0x10;
    break;
  case 0xd:
    bVar1 = *(byte *)((long)param_2 + 10);
    sVar2 = *(short *)(param_2 + 2);
    iVar4 = FUN_00134700(param_1,param_3);
    if (iVar4 == 0) {
      FUN_001345b0(param_1,param_3);
      uVar7 = 0;
    }
    else {
      uVar7 = 0x8000;
    }
    uVar9 = (int)sVar2 << 0x10 | (uint)bVar1 << 7 | uVar7 | param_3[2] << 0x18 | 0xf;
    break;
  case 0xe:
    bVar1 = *(byte *)((long)param_2 + 10);
    sVar2 = *(short *)(param_2 + 2);
    iVar4 = FUN_00134700(param_1,param_3);
    if (iVar4 == 0) {
      FUN_001345b0(param_1,param_3);
      uVar7 = 0;
    }
    else {
      uVar7 = 0x8000;
    }
    iVar4 = param_3[2];
    uVar9 = 0x11;
    goto LAB_001349e4;
  case 0xf:
    bVar1 = *(byte *)((long)param_2 + 10);
    sVar2 = *(short *)(param_2 + 2);
    iVar4 = FUN_00134700(param_1,param_3);
    if (iVar4 == 0) {
      FUN_001345b0(param_1,param_3);
      uVar7 = 0;
    }
    else {
      uVar7 = 0x8000;
    }
    iVar4 = param_3[2];
    uVar9 = 0x12;
LAB_001349e4:
    uVar9 = (int)sVar2 << 0x10 | (uint)bVar1 << 7 | uVar7 | iVar4 << 0x18 | uVar9;
  }
  lVar8 = *param_1;
  lVar6 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar8 + 0x40),
                       (int)param_1[4],lVar8 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar8 + 0x40) = lVar6;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar3 + 1;
  *(uint *)(lVar6 + (long)(int)lVar3 * 4) = uVar9;
  FUN_00133660(param_1,lVar8,*(undefined4 *)(param_1[2] + 8));
switchD_00134860_caseD_b:
  if ((*param_3 == 8) && (iVar4 = param_3[2], iVar5 = FUN_0012ea70(param_1), iVar5 <= iVar4)) {
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
  }
  return;
}


