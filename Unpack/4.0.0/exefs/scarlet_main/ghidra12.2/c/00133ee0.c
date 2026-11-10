/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133ee0; name: FUN_00133ee0
 */


void FUN_00133ee0(long *param_1,int *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  FUN_001380a0();
  if ((*param_2 == 0x10) && (iVar7 = param_2[2], iVar7 != -1)) {
    if (param_2[4] != 0xffffffff) {
      uVar8 = param_2[4];
      do {
        uVar6 = uVar8;
        uVar5 = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar6 * 4);
        iVar13 = (uVar5 >> 7) - 0xffffff;
        uVar8 = 0xffffffff;
        if (iVar13 != -1) {
          uVar8 = uVar6 + iVar13 + 1;
        }
      } while (uVar8 != 0xffffffff);
      if (iVar7 + ~uVar6 + 0xffffff >> 0x19 != 0) {
LAB_0013459c:
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"control structure too long");
      }
      *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar6 * 4) =
           (uVar5 & 0x7f | (iVar7 + ~uVar6) * 0x80) + 0x7fffff80;
      goto LAB_00133f8c;
    }
    param_2[4] = iVar7;
    iVar7 = param_2[4];
    iVar13 = param_2[5];
    if (iVar7 == iVar13) goto LAB_0013456c;
  }
  else {
LAB_00133f8c:
    iVar7 = param_2[4];
    iVar13 = param_2[5];
    if (iVar7 == iVar13) goto LAB_0013456c;
  }
  if (iVar7 != -1) {
    lVar12 = *param_1;
    do {
      puVar9 = (uint *)(*(long *)(lVar12 + 0x40) + (long)iVar7 * 4);
      if ((iVar7 < 1) ||
         (uVar8 = puVar9[-1], ((byte)(&DAT_03cb602b)[(ulong)uVar8 & 0x7f] >> 4 & 1) == 0)) {
        uVar8 = *puVar9;
      }
      if ((uVar8 & 0x7f) != 0x43) goto LAB_00134068;
      iVar14 = (*puVar9 >> 7) - 0xffffff;
      iVar11 = iVar7 + iVar14;
      iVar7 = -1;
      if (iVar14 != -1) {
        iVar7 = iVar11 + 1;
      }
    } while (iVar7 != -1);
  }
  iVar7 = -1;
  if (iVar13 != -1) {
    lVar12 = *param_1;
    do {
      puVar9 = (uint *)(*(long *)(lVar12 + 0x40) + (long)iVar13 * 4);
      if ((iVar13 < 1) ||
         (uVar8 = puVar9[-1], ((byte)(&DAT_03cb602b)[(ulong)uVar8 & 0x7f] >> 4 & 1) == 0)) {
        uVar8 = *puVar9;
      }
      if ((uVar8 & 0x7f) != 0x43) goto LAB_00134068;
      iVar14 = (*puVar9 >> 7) - 0xffffff;
      iVar11 = iVar13 + iVar14;
      iVar13 = -1;
      if (iVar14 != -1) {
        iVar13 = iVar11 + 1;
      }
    } while (iVar13 != -1);
  }
  iVar14 = -1;
  goto LAB_001341b8;
LAB_00134068:
  if (*param_2 == 0x10) {
    iVar13 = -1;
  }
  else {
    lVar1 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar12 + 0x40),
                         (int)param_1[4],lVar12 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar12 + 0x40) = lVar1;
    lVar2 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar2 + 1;
    *(undefined4 *)(lVar1 + (long)(int)lVar2 * 4) = 0x7fffff38;
    FUN_00133660(param_1,lVar12,*(undefined4 *)(param_1[2] + 8));
    iVar13 = (int)param_1[4] + -1;
    lVar12 = *param_1;
  }
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  lVar1 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar12 + 0x40),
                       (int)param_1[4],lVar12 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar12 + 0x40) = lVar1;
  lVar2 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar2 + 1;
  *(uint *)(lVar1 + (long)(int)lVar2 * 4) = param_3 << 7 | 6;
  FUN_00133660(param_1,lVar12,*(undefined4 *)(param_1[2] + 8));
  iVar7 = (int)param_1[4];
  *(int *)((long)param_1 + 0x24) = iVar7;
  lVar1 = *param_1;
  iVar14 = iVar7 + -1;
  lVar2 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar1 + 0x40),iVar7,
                       lVar1 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar1 + 0x40) = lVar2;
  lVar12 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar12 + 1;
  *(uint *)(lVar2 + (long)(int)lVar12 * 4) = param_3 << 7 | 7;
  FUN_00133660(param_1,lVar1,*(undefined4 *)(param_1[2] + 8));
  iVar7 = (int)param_1[4] + -1;
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  FUN_001334b0(param_1,iVar13);
LAB_001341b8:
  iVar13 = (int)param_1[4];
  *(int *)((long)param_1 + 0x24) = iVar13;
  uVar8 = param_2[5];
  uVar5 = (param_3 & 0xff) << 7;
  if (uVar8 != 0xffffffff) {
    if (param_3 == 0xff) {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
        uVar10 = *puVar9;
        iVar11 = (uVar10 >> 7) - 0xffffff;
        uVar6 = 0xffffffff;
        if (iVar11 != -1) {
          uVar6 = uVar8 + iVar11 + 1;
        }
        if ((int)uVar8 < 1) {
LAB_0013425c:
          puVar3 = puVar9;
          uVar4 = uVar10;
        }
        else {
          uVar4 = puVar9[-1];
          puVar3 = puVar9 + -1;
          if (((byte)(&DAT_03cb602b)[(ulong)uVar4 & 0x7f] >> 4 & 1) == 0) goto LAB_0013425c;
        }
        if ((uVar4 & 0x7f) == 0x43) {
          *puVar3 = uVar4 & 0x8000 | uVar4 >> 9 & 0x7f80 | 0x42;
          iVar11 = iVar13 + ~uVar8;
          if (iVar11 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
          uVar10 = *puVar9;
        }
        else {
          iVar11 = iVar14 + ~uVar8;
          if (iVar11 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
        }
        *puVar9 = (uVar10 & 0x7f | iVar11 << 7) + 0x7fffff80;
        uVar8 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
    else {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
        uVar10 = *puVar9;
        iVar11 = (uVar10 >> 7) - 0xffffff;
        uVar6 = 0xffffffff;
        if (iVar11 != -1) {
          uVar6 = uVar8 + iVar11 + 1;
        }
        if ((int)uVar8 < 1) {
LAB_0013431c:
          puVar3 = puVar9;
          uVar4 = uVar10;
        }
        else {
          uVar4 = puVar9[-1];
          puVar3 = puVar9 + -1;
          if (((byte)(&DAT_03cb602b)[(ulong)uVar4 & 0x7f] >> 4 & 1) == 0) goto LAB_0013431c;
        }
        if ((uVar4 & 0x7f) == 0x43) {
          uVar10 = uVar4 & 0x8000 | uVar4 >> 9 & 0x7f80 | 0x42;
          if (param_3 != (uVar4 >> 0x10 & 0xff)) {
            uVar10 = uVar4 & 0xffff807f | uVar5;
          }
          *puVar3 = uVar10;
          iVar11 = iVar13 + ~uVar8;
          if (iVar11 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
          uVar10 = *puVar9;
        }
        else {
          iVar11 = iVar14 + ~uVar8;
          if (iVar11 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
        }
        *puVar9 = (uVar10 & 0x7f | iVar11 << 7) + 0x7fffff80;
        uVar8 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar8 = param_2[4];
  if (uVar8 != 0xffffffff) {
    if (param_3 == 0xff) {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
        uVar6 = *puVar9;
        iVar14 = (uVar6 >> 7) - 0xffffff;
        uVar5 = 0xffffffff;
        if (iVar14 != -1) {
          uVar5 = uVar8 + iVar14 + 1;
        }
        if ((int)uVar8 < 1) {
LAB_0013441c:
          puVar3 = puVar9;
          uVar10 = uVar6;
        }
        else {
          uVar10 = puVar9[-1];
          puVar3 = puVar9 + -1;
          if (((byte)(&DAT_03cb602b)[(ulong)uVar10 & 0x7f] >> 4 & 1) == 0) goto LAB_0013441c;
        }
        if ((uVar10 & 0x7f) == 0x43) {
          *puVar3 = uVar10 & 0x8000 | uVar10 >> 9 & 0x7f80 | 0x42;
          iVar14 = iVar13 + ~uVar8;
          if (iVar14 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
          uVar6 = *puVar9;
        }
        else {
          iVar14 = iVar7 + ~uVar8;
          if (iVar14 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
        }
        *puVar9 = (uVar6 & 0x7f | iVar14 << 7) + 0x7fffff80;
        uVar8 = uVar5;
      } while (uVar5 != 0xffffffff);
    }
    else {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
        uVar10 = *puVar9;
        iVar14 = (uVar10 >> 7) - 0xffffff;
        uVar6 = 0xffffffff;
        if (iVar14 != -1) {
          uVar6 = uVar8 + iVar14 + 1;
        }
        if ((int)uVar8 < 1) {
LAB_001344f4:
          puVar3 = puVar9;
          uVar4 = uVar10;
        }
        else {
          uVar4 = puVar9[-1];
          puVar3 = puVar9 + -1;
          if (((byte)(&DAT_03cb602b)[(ulong)uVar4 & 0x7f] >> 4 & 1) == 0) goto LAB_001344f4;
        }
        if ((uVar4 & 0x7f) == 0x43) {
          uVar10 = uVar4 & 0x8000 | uVar4 >> 9 & 0x7f80 | 0x42;
          if (param_3 != (uVar4 >> 0x10 & 0xff)) {
            uVar10 = uVar4 & 0xffff807f | uVar5;
          }
          *puVar3 = uVar10;
          iVar14 = iVar13 + ~uVar8;
          if (iVar14 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar8 * 4);
          uVar10 = *puVar9;
        }
        else {
          iVar14 = iVar7 + ~uVar8;
          if (iVar14 + 0xffffffU >> 0x19 != 0) goto LAB_0013459c;
        }
        *puVar9 = (uVar10 & 0x7f | iVar14 << 7) + 0x7fffff80;
        uVar8 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
  }
LAB_0013456c:
  param_2[4] = -1;
  param_2[5] = -1;
  param_2[2] = param_3;
  *param_2 = 8;
  return;
}


