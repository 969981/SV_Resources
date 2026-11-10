/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b17694; name: FUN_00b17694
 */


void FUN_00b17694(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  
  plVar8 = param_3 + 2;
  bVar2 = *(byte *)(*param_3 + *plVar8);
  *plVar8 = *plVar8 + 1;
  if ((((bVar2 & 0xfe) != 0x84) && ((char)bVar2 < '\0')) && (bVar2 < 0xc0)) {
    iVar4 = 1;
    goto LAB_00b17758;
  }
  FUN_01e94e08(local_38,bVar2,param_2,param_3);
  iVar4 = local_38[0];
  if (((local_38[0] != 0) ||
      (FUN_01e643c8(local_40,param_2 + 4,param_3), iVar4 = local_40[0], local_40[0] != 0)) ||
     (FUN_01e643c8(local_48,param_2 + 8,param_3), iVar4 = local_48[0], local_48[0] != 0))
  goto LAB_00b17758;
  lVar5 = param_3[2];
  bVar2 = *(byte *)(*param_3 + lVar5);
  param_3[2] = lVar5 + 1;
  if (((bVar2 != 0x84) && ((char)bVar2 < '\0')) && (bVar2 < 0xc0)) {
LAB_00b17814:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  if (bVar2 == 0x84) {
    bVar2 = *(byte *)(*param_3 + lVar5 + 1);
    *plVar8 = lVar5 + 2;
  }
  *(byte *)(param_2 + 0xc) = bVar2;
  lVar5 = param_3[2];
  bVar2 = *(byte *)(*param_3 + lVar5);
  param_3[2] = lVar5 + 1;
  if (((bVar2 != 0x84) && ((char)bVar2 < '\0')) && (bVar2 < 0xc0)) goto LAB_00b17814;
  if (bVar2 == 0x84) {
    bVar2 = *(byte *)(*param_3 + lVar5 + 1);
    *plVar8 = lVar5 + 2;
  }
  *(byte *)(param_2 + 0xd) = bVar2;
  FUN_01e643c8(local_50,param_2 + 0x10,param_3);
  iVar4 = local_50[0];
  if ((local_50[0] != 0) ||
     (FUN_0192eda0(local_58,param_2 + 0x18,param_3), iVar4 = local_58[0], local_58[0] != 0))
  goto LAB_00b17758;
  lVar7 = *param_3;
  lVar5 = param_3[2];
  cVar3 = *(char *)(lVar7 + lVar5);
  param_3[2] = lVar5 + 1;
  if (cVar3 != -0x47) {
LAB_00b17b60:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  bVar2 = *(byte *)(lVar7 + lVar5 + 1);
  uVar6 = (ulong)bVar2;
  lVar1 = lVar5 + 2;
  *plVar8 = lVar1;
  if (0x83 < uVar6) goto LAB_00b17b60;
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar5 = lVar5 + 4;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar5 = lVar5 + 6;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar7 + lVar1);
    lVar5 = lVar5 + 10;
    break;
  default:
    goto switchD_00b178b4_default;
  }
  *plVar8 = lVar5;
switchD_00b178b4_default:
  if (uVar6 != 10) {
    iVar4 = 5;
    goto LAB_00b17758;
  }
  FUN_00b17c50(local_60,param_2 + 0x20,param_3);
  iVar4 = local_60[0];
  if ((local_60[0] != 0) ||
     (FUN_01e643c8(local_68,param_2 + 0x7c,param_3), iVar4 = local_68[0], local_68[0] != 0))
  goto LAB_00b17758;
  bVar2 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (1 < bVar2) {
    iVar4 = 1;
    goto LAB_00b17758;
  }
  *(bool *)(param_2 + 0x80) = bVar2 != 0;
  FUN_0192eda0(local_70,param_2 + 0x88,param_3);
  iVar4 = local_70[0];
  if (local_70[0] != 0) goto LAB_00b17758;
  lVar5 = param_3[2];
  bVar2 = *(byte *)(*param_3 + lVar5);
  param_3[2] = lVar5 + 1;
  if (((bVar2 != 0x84) && ((char)bVar2 < '\0')) && (bVar2 < 0xc0)) {
LAB_00b17b74:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  if (bVar2 == 0x84) {
    bVar2 = *(byte *)(*param_3 + lVar5 + 1);
    *plVar8 = lVar5 + 2;
  }
  *(byte *)(param_2 + 0x90) = bVar2;
  cVar3 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar3 != -0x47) goto LAB_00b17b74;
  FUN_00b17518(local_78,param_2 + 0xb0,param_3);
  iVar4 = local_78[0];
  if (local_78[0] != 0) goto LAB_00b17758;
  lVar7 = *param_3;
  lVar5 = param_3[2];
  cVar3 = *(char *)(lVar7 + lVar5);
  param_3[2] = lVar5 + 1;
  if (cVar3 != -0x47) {
LAB_00b17b7c:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  bVar2 = *(byte *)(lVar7 + lVar5 + 1);
  uVar6 = (ulong)bVar2;
  lVar1 = lVar5 + 2;
  *plVar8 = lVar1;
  if (0x83 < uVar6) goto LAB_00b17b7c;
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar5 = lVar5 + 4;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar5 = lVar5 + 6;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar7 + lVar1);
    lVar5 = lVar5 + 10;
    break;
  default:
    goto switchD_00b17a04_default;
  }
  *plVar8 = lVar5;
switchD_00b17a04_default:
  if (uVar6 != 10) {
    iVar4 = 5;
    goto LAB_00b17758;
  }
  FUN_00b17c50(local_80,param_2 + 0x94,param_3);
  iVar4 = local_80[0];
  if (local_80[0] != 0) goto LAB_00b17758;
  lVar7 = *param_3;
  lVar5 = param_3[2];
  cVar3 = *(char *)(lVar7 + lVar5);
  param_3[2] = lVar5 + 1;
  if (cVar3 != -0x47) {
LAB_00b17b90:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  bVar2 = *(byte *)(lVar7 + lVar5 + 1);
  uVar6 = (ulong)bVar2;
  lVar1 = lVar5 + 2;
  *plVar8 = lVar1;
  if (0x83 < uVar6) goto LAB_00b17b90;
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar5 = lVar5 + 4;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar5 = lVar5 + 6;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar7 + lVar1);
    lVar5 = lVar5 + 10;
    break;
  default:
    goto switchD_00b17a84_default;
  }
  *plVar8 = lVar5;
switchD_00b17a84_default:
  if (uVar6 != 10) {
    iVar4 = 5;
    goto LAB_00b17758;
  }
  FUN_00b17c50(local_88,param_2 + 0x3c,param_3);
  iVar4 = local_88[0];
  if ((local_88[0] != 0) ||
     (FUN_01e643c8(local_90,param_2 + 0x58,param_3), iVar4 = local_90[0], local_90[0] != 0))
  goto LAB_00b17758;
  lVar7 = *param_3;
  lVar5 = param_3[2];
  cVar3 = *(char *)(lVar7 + lVar5);
  param_3[2] = lVar5 + 1;
  if (cVar3 != -0x47) {
LAB_00b17bd0:
    iVar4 = 1;
    goto LAB_00b17758;
  }
  bVar2 = *(byte *)(lVar7 + lVar5 + 1);
  uVar6 = (ulong)bVar2;
  lVar1 = lVar5 + 2;
  *plVar8 = lVar1;
  if (0x83 < uVar6) goto LAB_00b17bd0;
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar5 = lVar5 + 4;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar5 = lVar5 + 6;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar7 + lVar1);
    lVar5 = lVar5 + 10;
    break;
  default:
    goto switchD_00b17b1c_default;
  }
  *plVar8 = lVar5;
switchD_00b17b1c_default:
  if (uVar6 == 10) {
    FUN_00b17c50(local_38,param_2 + 0x5c,param_3);
    iVar4 = local_38[0];
    if (local_38[0] == 0) {
      FUN_01e643c8(param_1,param_2 + 0x78,param_3);
      return;
    }
  }
  else {
    iVar4 = 5;
  }
LAB_00b17758:
  *param_1 = iVar4;
  return;
}


