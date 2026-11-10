/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01705888; name: FUN_01705888
 */


undefined4 FUN_01705888(long param_1,long *param_2,uint param_3,uint param_4,long *param_5)

{
  short sVar1;
  undefined4 uVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar9 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar8 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar8 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar6 + 1;
    lVar8 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar6;
  bVar4 = *(byte *)((long)param_5 + 0xa6);
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar3 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_017059cc;
    lVar9 = *plVar3;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01705998;
    plVar3 = plVar3 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 5);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01705998:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(uint *)(lVar8 + 0xc) = (uint)bVar4;
      *(undefined2 *)(lVar8 + 8) = 5;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x30) = lVar8;
      bVar4 = *(byte *)((long)param_5 + 0xa6);
    }
  }
LAB_017059cc:
  if ((bVar4 != 0) && (plVar3 = (long *)*param_5, plVar3 != (long *)0x0)) {
    uVar13 = 0;
    do {
      uVar6 = (int)uVar13 + 6;
      lVar8 = *(long *)(param_1 + 0x10);
      uVar2 = (**(code **)(*plVar3 + 0x98))();
      lVar5 = *(long *)(lVar8 + 0x38);
      uVar7 = *(uint *)(lVar5 + 0xc08);
      uVar11 = (ulong)uVar7;
      if (uVar7 < 0x61) {
        uVar7 = 0x60;
      }
      plVar3 = (long *)(lVar5 + uVar11 * 0x20 + 8);
      do {
        uVar12 = uVar11;
        if (uVar7 == uVar12) goto LAB_01705a7c;
        lVar9 = *plVar3;
        if (*(ushort *)(lVar9 + 8) == 0) goto LAB_01705a44;
        plVar3 = plVar3 + 4;
        uVar11 = uVar12 + 1;
      } while ((uint)*(ushort *)(lVar9 + 8) != (uVar6 & 0xffff));
      if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01705a44:
        lVar5 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar6;
          *(undefined4 *)(lVar5 + 0xc) = uVar2;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar6 & 0xffff) < 0x86) {
            *(long *)(*(long *)(lVar8 + 0x78) + (ulong)(ushort)uVar6 * 8 + 8) = lVar5;
          }
        }
      }
LAB_01705a7c:
      uVar13 = uVar13 + 1;
    } while ((uVar13 < *(byte *)((long)param_5 + 0xa6)) &&
            (plVar3 = (long *)param_5[uVar13], plVar3 != (long *)0x0));
  }
  lVar8 = *(long *)(param_1 + 0x10);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar3 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_01705b28;
    lVar9 = *plVar3;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01705af8;
    plVar3 = plVar3 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01705af8:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar2;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_01705b28:
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar9 = -1;
  do {
    lVar10 = lVar9;
    if ((uVar13 - uVar6) + lVar10 == -1) goto LAB_01705bcc;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01705b8c;
    uVar11 = uVar11 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 0x12);
  if (uVar7 + (int)(lVar10 + 1) < 0x60) {
LAB_01705b8c:
    lVar9 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x12;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x98) = lVar9;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01705bcc:
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if ((uVar13 - uVar6) + lVar10 == 0) goto LAB_01705c60;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01705c24;
    uVar11 = uVar11 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 0x18);
  if ((uVar7 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_01705c24:
    lVar9 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar10) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x18;
      *(uint *)(lVar9 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 200) = lVar9;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01705c60:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar3 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_01705cdc;
    lVar9 = *plVar3;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_01705ca8;
    plVar3 = plVar3 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar9 + 8) != 0x23);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01705ca8:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x23;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 1;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x120) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01705cdc:
  FUN_0107b310(lVar5,0x69,8,1);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar8 + 0x78) + 0x120);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar8 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar8 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar5 + uVar13 * 0x20 + 8);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar6 & 0xffff;
      plVar3 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar3 + 8) == 0) break;
        *(undefined2 *)(*plVar3 + 8) = 0;
        plVar3 = plVar3 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) {
        return uVar2;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
  return uVar2;
}


