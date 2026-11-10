/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818df0; name: FUN_00818df0
 */


undefined8 FUN_00818df0(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *__s;
  
  switch(*(undefined1 *)*param_2) {
  case 0:
    return 0;
  case 1:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_03bd1d93;
    goto LAB_0081904c;
  case 2:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03be62d5;
    break;
  case 3:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03c07d11;
    break;
  case 4:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_03be652f;
LAB_0081904c:
    FUN_00819180(param_3,puVar4,uVar1);
    goto LAB_0081915c;
  case 5:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03c8a62c;
    break;
  case 6:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03c62bc7;
    break;
  case 7:
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if ((iVar2 < 0) && (*(int *)((long)param_1 + 0x1c) = iVar2 + 0x10, iVar2 < -0xf)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    FUN_00819180(*puVar8,param_3,&DAT_03c911a1);
    goto LAB_0081915c;
  case 8:
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if ((iVar2 < 0) && (*(int *)((long)param_1 + 0x1c) = iVar2 + 0x10, iVar2 < -0xf)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)(*param_1 + 0xfU & 0xfffffffffffffff0);
      *param_1 = (long)(puVar8 + 2);
    }
    FUN_00819180(*puVar8,param_3,&DAT_03c97bf4);
    goto LAB_0081915c;
  case 9:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    __s = (byte *)*puVar8;
    sVar3 = strlen((char *)__s);
    goto LAB_00819134;
  case 10:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    pbVar7 = (byte *)*puVar8;
    sVar3 = *(size_t *)(pbVar7 + 8);
    __s = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      __s = pbVar7 + 1;
      sVar3 = (ulong)(*pbVar7 >> 1);
    }
LAB_00819134:
    FUN_0021d540(param_3,__s,sVar3);
    goto LAB_0081915c;
  case 0xb:
    iVar2 = (int)param_1[3];
    if ((iVar2 < 0) && (*(int *)(param_1 + 3) = iVar2 + 8, iVar2 < -7)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)iVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_03c5a85c;
    break;
  default:
    FUN_0021d540(param_3,"[Invalid CheckArgType]",0x16);
    return 0;
  }
  FUN_00819180(param_3,puVar4,uVar5);
LAB_0081915c:
  *param_2 = *param_2 + 1;
  return 1;
}


