/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01244194; name: FUN_01244194
 */


int FUN_01244194(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  uVar3 = (**(code **)(*param_2 + 400))(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar10 + 0xc08);
  if (uVar8 < 0x60) {
    do {
      lVar13 = *(long *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar10 = *(long *)(lVar7 + 0x58);
  uVar8 = *(uint *)(lVar10 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar8 + 1;
    lVar10 = *(long *)(lVar7 + 0x58);
    uVar8 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar7 = *(long *)(lVar10 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  uVar14 = (ulong)uVar8;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar6 = (long *)(lVar7 + uVar14 * 0x20 + 8);
  do {
    uVar11 = uVar14;
    if (uVar8 == uVar11) goto LAB_012442e4;
    lVar13 = *plVar6;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_012442b4;
    plVar6 = plVar6 + 4;
    uVar14 = uVar11 + 1;
  } while (*(short *)(lVar13 + 8) != 2);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_012442b4:
    lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 2;
      *(undefined4 *)(lVar7 + 0xc) = uVar4;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x18) = lVar7;
    }
  }
LAB_012442e4:
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x38);
  uVar1 = *(uint *)(lVar10 + 0xc08);
  uVar14 = (ulong)uVar1;
  uVar8 = uVar1;
  if (uVar1 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = -1;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == -1) goto LAB_01244384;
    sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01244344;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar2 != 0x32);
  if (uVar1 + (int)(lVar12 + 1) < 0x60) {
LAB_01244344:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar1 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x32;
      *(uint *)(lVar13 + 0xc) = uVar3 & 0xffff;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x198) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01244384:
  uVar3 = (uint)uVar14;
  uVar8 = uVar3;
  if (uVar3 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_01244414;
    sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_012443d8;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar2 != 0x59);
  if ((uVar3 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_012443d8:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar3 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x59;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0xc) = 1;
      *(undefined1 *)(lVar13 + 10) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x2d0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_01244414:
  uVar3 = (uint)uVar14;
  uVar8 = uVar3;
  if (uVar3 < 0x61) {
    uVar8 = 0x60;
  }
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar12 = lVar13;
    if ((uVar14 - uVar8) + lVar12 == 0) goto LAB_012444a4;
    sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
    if (sVar2 == 0) goto LAB_01244468;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar12 + 1;
  } while (sVar2 != 0x51);
  if ((uVar3 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_01244468:
    lVar13 = *(long *)(lVar10 + (ulong)(uVar3 + (int)lVar12) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x51;
      *(undefined1 *)(lVar13 + 10) = 0;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x290) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x38);
      uVar14 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_012444a4:
  uVar8 = (uint)uVar14;
  if (uVar8 < 0x61) {
    uVar8 = 0x60;
  }
  plVar6 = (long *)(lVar10 + uVar14 * 0x20 + 8);
  do {
    uVar11 = uVar14;
    if (uVar8 == uVar11) goto LAB_01244530;
    lVar13 = *plVar6;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_012444ec;
    plVar6 = plVar6 + 4;
    uVar14 = uVar11 + 1;
  } while (*(short *)(lVar13 + 8) != 0x38);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_012444ec:
    lVar10 = *(long *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x38;
      *(undefined8 *)(lVar10 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar10 + 0x14) = 0x20000;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined1 *)(lVar10 + 10) = 3;
      *(long *)(*(long *)(lVar7 + 0x78) + 0x1c8) = lVar10;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01244530:
  FUN_0107b310(lVar7,0x13,8,1);
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar7 = *(long *)(lVar10 + 0x198);
  iVar5 = 0;
  if (lVar7 != 0) {
    iVar5 = *(int *)(lVar7 + 0xc);
  }
  lVar7 = *(long *)(lVar10 + 0x1c8);
  iVar9 = 0;
  if (lVar7 != 0) {
    iVar9 = *(int *)(lVar7 + 0xc);
  }
  uVar8 = (uint)(iVar9 * iVar5) >> 0xc;
  if (0x800 < (iVar9 * iVar5 & 0xfffU)) {
    uVar8 = uVar8 + 1;
  }
  uVar14 = (ulong)uVar8;
  sVar2 = (**(code **)(*param_2 + 0x230))(param_2);
  if (((sVar2 == 1) &&
      (lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x2d0), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0xc) != 0)) {
    plVar6 = (long *)FUN_012521a0(param_1);
    iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6,&DAT_03d69ee0);
    uVar14 = (ulong)(iVar5 * uVar8) / 100;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  iVar5 = (int)uVar14;
  if (0x270 < (uint)(uVar14 >> 4)) {
    iVar5 = 10000;
  }
  if ((((param_3 & 1) != 0) && (lVar10 = *(long *)(*(long *)(lVar7 + 0x78) + 0x290), lVar10 != 0))
     && (*(int *)(lVar10 + 0xc) != 0)) {
    iVar5 = 10000 - iVar5;
  }
  lVar10 = *(long *)(lVar7 + 0x58);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar14 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar7 + 0x58);
    uVar14 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + uVar14 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar14 = (ulong)uVar8 & 0xffff;
      plVar6 = (long *)(lVar7 + uVar14 * 0x20 + 8);
      do {
        uVar14 = uVar14 + 1;
        if (*(short *)(*plVar6 + 8) == 0) break;
        *(undefined2 *)(*plVar6 + 8) = 0;
        plVar6 = plVar6 + 4;
      } while (((uint)uVar14 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar14 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar14 == 0) {
        return iVar5;
      }
      uVar14 = uVar14 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar14;
    } while (*(short *)(*(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar14 + 1;
  }
  return iVar5;
}


