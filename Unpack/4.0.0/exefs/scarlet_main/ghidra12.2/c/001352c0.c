/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001352c0; name: FUN_001352c0
 */


void FUN_001352c0(long *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  FUN_00133b50(param_1,param_3);
  if (param_2 < 2) {
    iVar3 = FUN_00135740(param_1,param_2 + 0xc,param_3,&DAT_03cb6220);
    if (iVar3 != 0) {
      return;
    }
LAB_00135320:
    iVar3 = FUN_001345b0(param_1,param_3);
    if ((*param_3 == 8) && (iVar5 = param_3[2], iVar4 = FUN_0012ea70(param_1), iVar4 <= iVar5)) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    lVar13 = *param_1;
    lVar6 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar13 + 0x40),
                         (int)param_1[4],lVar13 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar13 + 0x40) = lVar6;
    lVar11 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar11 + 1;
    *(uint *)(lVar6 + (long)(int)lVar11 * 4) = param_2 + 0x31 | iVar3 << 0x10;
    FUN_00133660(param_1,lVar13,*(undefined4 *)(param_1[2] + 8));
    param_3[2] = (int)param_1[4] + -1;
    *param_3 = 0x11;
    uVar9 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(*param_1 + 0x58) + -1);
    if (uVar9 == 0xffffff80) {
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
      cVar7 = -0x7f;
    }
    else {
      *(uint *)(param_1 + 5) = (int)param_1[5] - uVar9;
      cVar7 = *(char *)((long)param_1 + 0x45) + -1;
    }
    *(char *)((long)param_1 + 0x45) = cVar7;
    FUN_00133660(param_1,*param_1,param_4);
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return;
    }
    goto LAB_00135320;
  }
  switch(*param_3) {
  case 1:
  case 3:
    iVar3 = 2;
    break;
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar3 = 3;
    break;
  case 8:
switchD_00135420_caseD_8:
    iVar3 = param_3[2];
    iVar5 = FUN_0012ea70(param_1);
    if (iVar5 <= iVar3) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    goto LAB_001354d8;
  default:
    goto switchD_00135420_caseD_9;
  case 0x10:
    puVar1 = (uint *)(*(long *)(*param_1 + 0x40) + (long)param_3[2] * 4);
    if (param_3[2] < 1) {
LAB_00135708:
      uVar9 = *puVar1;
      puVar10 = puVar1;
    }
    else {
      puVar10 = puVar1 + -1;
      uVar9 = *puVar10;
      if (((byte)(&DAT_03cb602b)[(ulong)uVar9 & 0x7f] >> 4 & 1) == 0) goto LAB_00135708;
    }
    *puVar10 = uVar9 ^ 0x8000;
    iVar3 = param_3[4];
    iVar5 = param_3[5];
    param_3[4] = iVar5;
    param_3[5] = iVar3;
    goto joined_r0x00135728;
  case 0x11:
    bVar2 = *(byte *)((long)param_1 + 0x44);
    bVar8 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar8;
      bVar8 = *(char *)((long)param_1 + 0x44) + 1;
    }
    *(byte *)((long)param_1 + 0x44) = bVar8;
    FUN_001380a0(param_1,param_3,bVar8 - 1);
    if (*param_3 == 8) goto switchD_00135420_caseD_8;
LAB_001354d8:
    iVar3 = param_3[2];
    lVar13 = *param_1;
    lVar6 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar13 + 0x40),
                         (int)param_1[4],lVar13 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar13 + 0x40) = lVar6;
    lVar11 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar11 + 1;
    *(uint *)(lVar6 + (long)(int)lVar11 * 4) = iVar3 << 0x10 | 0x33;
    FUN_00133660(param_1,lVar13,*(undefined4 *)(param_1[2] + 8));
    param_3[2] = (int)param_1[4] + -1;
    iVar3 = 0x11;
  }
  *param_3 = iVar3;
switchD_00135420_caseD_9:
  iVar3 = param_3[4];
  iVar5 = param_3[5];
  param_3[4] = iVar5;
  param_3[5] = iVar3;
joined_r0x00135728:
  if (iVar3 != -1) {
    lVar11 = *param_1;
    lVar6 = *(long *)(lVar11 + 0x40);
    do {
      puVar1 = (uint *)(lVar6 + (long)iVar3 * 4);
      if (iVar3 < 1) {
LAB_001355bc:
        uVar9 = *puVar1;
        uVar12 = (ulong)uVar9;
        puVar10 = puVar1;
      }
      else {
        puVar10 = puVar1 + -1;
        uVar9 = *puVar10;
        uVar12 = (ulong)uVar9;
        if (((byte)(&DAT_03cb602b)[uVar12 & 0x7f] >> 4 & 1) == 0) goto LAB_001355bc;
      }
      if ((uVar9 & 0x7f) == 0x43) {
        *puVar10 = (uint)uVar12 & 0x8000 | (uint)(uVar12 >> 9) & 0x7f80 | 0x42;
        lVar11 = *param_1;
      }
      lVar6 = *(long *)(lVar11 + 0x40);
      iVar5 = (*(uint *)(lVar6 + (long)iVar3 * 4) >> 7) - 0xffffff;
      iVar4 = iVar3 + iVar5;
      iVar3 = -1;
      if (iVar5 != -1) {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 != -1);
    iVar5 = param_3[4];
  }
  if (iVar5 != -1) {
    lVar11 = *param_1;
    lVar6 = *(long *)(lVar11 + 0x40);
    do {
      puVar1 = (uint *)(lVar6 + (long)iVar5 * 4);
      if (iVar5 < 1) {
LAB_00135674:
        uVar9 = *puVar1;
        uVar12 = (ulong)uVar9;
        puVar10 = puVar1;
      }
      else {
        puVar10 = puVar1 + -1;
        uVar9 = *puVar10;
        uVar12 = (ulong)uVar9;
        if (((byte)(&DAT_03cb602b)[uVar12 & 0x7f] >> 4 & 1) == 0) goto LAB_00135674;
      }
      if ((uVar9 & 0x7f) == 0x43) {
        *puVar10 = (uint)uVar12 & 0x8000 | (uint)(uVar12 >> 9) & 0x7f80 | 0x42;
        lVar11 = *param_1;
      }
      lVar6 = *(long *)(lVar11 + 0x40);
      iVar3 = (*(uint *)(lVar6 + (long)iVar5 * 4) >> 7) - 0xffffff;
      iVar4 = iVar5 + iVar3;
      iVar5 = -1;
      if (iVar3 != -1) {
        iVar5 = iVar4 + 1;
      }
    } while (iVar5 != -1);
  }
  return;
}


