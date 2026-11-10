/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e609a0; name: FUN_01e609a0
 */


long FUN_01e609a0(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int local_18 [2];
  
  cVar1 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar1 != -0x47) {
    *param_1 = 1;
    return param_2;
  }
  lVar9 = *param_3;
  lVar8 = param_3[2];
  lVar3 = lVar8 + 1;
  bVar2 = *(byte *)(lVar9 + lVar8);
  uVar6 = (ulong)bVar2;
  param_3[2] = lVar3;
  if (0x83 < uVar6) {
    iVar5 = 1;
    goto LAB_01e60a18;
  }
  switch(bVar2) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar9 + lVar3);
    lVar8 = lVar8 + 2;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar9 + lVar3);
    lVar8 = lVar8 + 3;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar9 + lVar3);
    lVar8 = lVar8 + 5;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar9 + lVar3);
    lVar8 = lVar8 + 9;
    break;
  default:
    goto switchD_01e60a34_default;
  }
  param_3[2] = lVar8;
switchD_01e60a34_default:
  if (uVar6 != 3) {
    iVar5 = 5;
LAB_01e60a18:
    *param_1 = iVar5;
    return 0xb9;
  }
  lVar3 = FUN_01e60b1c(local_18);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return lVar3;
  }
  lVar7 = *param_3;
  lVar9 = param_3[2];
  lVar8 = lVar9 + 1;
  bVar2 = *(byte *)(lVar7 + lVar9);
  param_3[2] = lVar8;
  if (0x81 < bVar2) {
    *param_1 = 1;
    return lVar3;
  }
  if (bVar2 == 0x80) {
    uVar4 = (ushort)*(byte *)(lVar7 + lVar8);
    lVar9 = lVar9 + 2;
  }
  else {
    if (bVar2 != 0x81) {
      *(ushort *)(param_2 + 0x914) = (ushort)bVar2;
      goto LAB_01e60ae8;
    }
    uVar4 = *(ushort *)(lVar7 + lVar8);
    lVar9 = lVar9 + 3;
  }
  param_3[2] = lVar9;
  *(ushort *)(param_2 + 0x914) = uVar4;
LAB_01e60ae8:
  *param_1 = 0;
  return lVar3;
}


