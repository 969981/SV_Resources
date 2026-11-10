/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e5e30; name: FUN_031e5e30
 */


void FUN_031e5e30(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  char *pcVar11;
  
  puVar9 = param_1;
  while (uVar10 = *puVar9, ((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
    goto LAB_031e5f4c;
  }
  if ((puVar9 != (ulong *)0x0) &&
     (pcVar11 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2], pcVar11 != (char *)0x0)
     ) {
    pcVar6 = strchr(pcVar11,0x3c);
    if ((pcVar6 == (char *)0x0) || (iVar5 = (int)pcVar6 - (int)pcVar11, iVar5 < 0)) {
      sVar7 = strlen(pcVar11);
      iVar5 = (int)sVar7;
    }
    iVar4 = (int)param_2[1];
    iVar5 = (int)((long)iVar4 + -1) + iVar5;
    uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    iVar8 = uVar2 - 1;
    iVar3 = iVar5;
    if (iVar8 <= iVar5) {
      iVar3 = iVar8;
    }
    if ((int)param_2[0x12] != 0) {
      iVar3 = iVar5;
    }
    iVar5 = iVar3 + 1;
    iVar8 = iVar4;
    if ((int)uVar2 <= iVar3) {
      FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
      iVar8 = (int)param_2[1];
    }
    if (iVar8 <= iVar3 || iVar5 < iVar8) {
      *(int *)(param_2 + 1) = iVar5;
    }
    *(undefined1 *)(*param_2 + (long)iVar3) = 0;
    memmove((void *)(*param_2 + (long)iVar4 + -1),pcVar11,(long)((int)param_2[1] - iVar4));
    return;
  }
LAB_031e5f4c:
  iVar4 = (int)param_2[1];
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar5 = iVar4 + 7;
  iVar8 = uVar2 - 1;
  iVar3 = iVar5;
  if (iVar8 <= iVar5) {
    iVar3 = iVar8;
  }
  if ((int)param_2[0x12] != 0) {
    iVar3 = iVar5;
  }
  iVar5 = iVar3 + 1;
  iVar8 = iVar4;
  if ((int)uVar2 <= iVar3) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
    iVar8 = (int)param_2[1];
  }
  if (iVar8 <= iVar3 || iVar5 < iVar8) {
    *(int *)(param_2 + 1) = iVar5;
  }
  *(undefined1 *)(*param_2 + (long)iVar3) = 0;
  memcpy((void *)(*param_2 + (long)iVar4 + -1),"<Unnamed",(long)((int)param_2[1] - iVar4));
  for (; (*param_1 & 1) == 0; param_1 = (ulong *)param_1[1]) {
  }
  switch((uint)param_1[2] & 0x1f) {
  case 0:
    puVar9 = (ulong *)PTR_DAT_047e5c40;
    break;
  case 1:
    puVar9 = (ulong *)PTR_DAT_047e5b88;
    break;
  case 2:
    puVar9 = (ulong *)PTR_DAT_047e5c48;
    break;
  case 3:
    puVar9 = (ulong *)PTR_DAT_047e5c50;
    break;
  case 4:
    puVar9 = (ulong *)PTR_DAT_047e5c58;
    break;
  case 5:
    puVar9 = (ulong *)PTR_DAT_047e5c60;
    break;
  case 6:
    puVar9 = (ulong *)PTR_DAT_047e5c68;
    break;
  case 7:
    puVar9 = (ulong *)PTR_DAT_047e5c70;
    break;
  case 8:
    puVar9 = (ulong *)PTR_DAT_047e5c78;
    break;
  default:
    puVar9 = (ulong *)0x0;
  }
  while (uVar10 = *puVar9, ((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) ||
       (puVar1 = puVar9 + 1, puVar9 = (ulong *)*puVar1, (ulong *)*puVar1 == (ulong *)0x0))
    goto LAB_031e61fc;
  }
  if ((puVar9 != (ulong *)0x0) &&
     (pcVar11 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2], pcVar11 != (char *)0x0)
     ) {
    sVar7 = strlen(pcVar11);
    if (0xf < (int)sVar7) {
      iVar3 = (int)param_2[1];
      uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      iVar4 = uVar2 - 1;
      iVar5 = iVar3;
      if (iVar4 <= iVar3) {
        iVar5 = iVar4;
      }
      if ((int)param_2[0x12] != 0) {
        iVar5 = iVar3;
      }
      iVar4 = iVar5 + 1;
      iVar8 = iVar3;
      if ((int)uVar2 <= iVar5) {
        FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar4);
        iVar8 = (int)param_2[1];
      }
      if ((iVar8 <= iVar5) || (iVar4 < iVar8)) {
        *(int *)(param_2 + 1) = iVar4;
      }
      *(undefined1 *)(*param_2 + (long)iVar5) = 0;
      memcpy((void *)(*param_2 + (long)iVar3 + -1),&DAT_03bf391f,(long)((int)param_2[1] - iVar3));
      iVar3 = (int)param_2[1];
      iVar4 = (int)sVar7 + (int)((long)iVar3 + -1) + -0xf;
      uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      iVar8 = uVar2 - 1;
      iVar5 = iVar4;
      if (iVar8 <= iVar4) {
        iVar5 = iVar8;
      }
      if ((int)param_2[0x12] != 0) {
        iVar5 = iVar4;
      }
      iVar4 = iVar5 + 1;
      iVar8 = iVar3;
      if ((int)uVar2 <= iVar5) {
        FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar4);
        iVar8 = (int)param_2[1];
      }
      if (iVar8 <= iVar5 || iVar4 < iVar8) {
        *(int *)(param_2 + 1) = iVar4;
      }
      *(undefined1 *)(*param_2 + (long)iVar5) = 0;
      memmove((void *)(*param_2 + (long)iVar3 + -1),pcVar11 + 0xb,(long)((int)param_2[1] - iVar3));
    }
  }
LAB_031e61fc:
  iVar3 = (int)param_2[1];
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar4 = uVar2 - 1;
  iVar5 = iVar3;
  if (iVar4 <= iVar3) {
    iVar5 = iVar4;
  }
  if ((int)param_2[0x12] != 0) {
    iVar5 = iVar3;
  }
  iVar4 = iVar5 + 1;
  iVar8 = iVar3;
  if ((int)uVar2 <= iVar5) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar4);
    iVar8 = (int)param_2[1];
  }
  if (iVar8 <= iVar5 || iVar4 < iVar8) {
    *(int *)(param_2 + 1) = iVar4;
  }
  *(undefined1 *)(*param_2 + (long)iVar5) = 0;
  memcpy((void *)(*param_2 + (long)iVar3 + -1),&DAT_03c32803,(long)((int)param_2[1] - iVar3));
  return;
}


