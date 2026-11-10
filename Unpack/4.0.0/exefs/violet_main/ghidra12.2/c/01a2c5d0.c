/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2c5d0; name: FUN_01a2c5d0
 */


bool FUN_01a2c5d0(long param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar3 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(lVar4 + 0x38);
    uVar5 = *(uint *)(lVar6 + 0xc08);
    if (uVar5 < 0x60) {
      do {
        lVar8 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
        if (*(short *)(lVar8 + 8) == 0) {
          if (uVar5 < 0x5f) {
            *(undefined2 *)(lVar8 + 8) = 1;
            *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(lVar6 + 0xc08) = uVar5;
      } while (uVar5 != 0x60);
    }
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
    if (uVar5 < 0x1f) {
      *(uint *)(lVar6 + 0x408) = uVar5 + 1;
      lVar6 = *(long *)(lVar4 + 0x58);
      uVar5 = *(uint *)(lVar6 + 0x408);
    }
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    lVar4 = *(long *)(lVar6 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xc08);
    uVar3 = (ulong)uVar5;
    if (uVar5 < 0x61) {
      uVar5 = 0x60;
    }
    plVar7 = (long *)(lVar4 + uVar3 * 0x20 + 8);
    do {
      uVar9 = uVar3;
      if (uVar5 == uVar9) goto LAB_01a2c718;
      lVar8 = *plVar7;
      if (*(short *)(lVar8 + 8) == 0) goto LAB_01a2c6e8;
      plVar7 = plVar7 + 4;
      uVar3 = uVar9 + 1;
    } while (*(short *)(lVar8 + 8) != 2);
    if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01a2c6e8:
      lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
      if (lVar4 != 0) {
        *(undefined2 *)(lVar4 + 8) = 2;
        *(undefined4 *)(lVar4 + 0xc) = uVar2;
        *(undefined1 *)(lVar4 + 10) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar4;
      }
    }
LAB_01a2c718:
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(lVar4 + 0x38);
    uVar5 = *(uint *)(lVar6 + 0xc08);
    uVar3 = (ulong)uVar5;
    if (uVar5 < 0x61) {
      uVar5 = 0x60;
    }
    plVar7 = (long *)(lVar6 + uVar3 * 0x20 + 8);
    do {
      uVar9 = uVar3;
      if (uVar5 == uVar9) goto LAB_01a2c7a4;
      lVar8 = *plVar7;
      if (*(short *)(lVar8 + 8) == 0) goto LAB_01a2c76c;
      plVar7 = plVar7 + 4;
      uVar3 = uVar9 + 1;
    } while (*(short *)(lVar8 + 8) != 0x59);
    if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01a2c76c:
      lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
      if (lVar6 != 0) {
        *(undefined2 *)(lVar6 + 8) = 0x59;
        *(undefined8 *)(lVar6 + 0xc) = 0;
        *(undefined8 *)(lVar6 + 0x14) = 0;
        *(undefined4 *)(lVar6 + 0x1c) = 0;
        *(undefined1 *)(lVar6 + 10) = 1;
        *(long *)(*(long *)(lVar4 + 0x78) + 0x2d0) = lVar6;
        lVar4 = *(long *)(param_1 + 0x10);
      }
    }
LAB_01a2c7a4:
    FUN_0107b310(lVar4,0xb,8,1);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(*(long *)(lVar6 + 0x78) + 0x2d0);
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(lVar4 + 0xc) != 0;
    }
    lVar4 = *(long *)(lVar6 + 0x58);
    if (*(uint *)(lVar4 + 0x408) == 0) {
      uVar3 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
      *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
      lVar4 = *(long *)(lVar6 + 0x58);
      uVar3 = (ulong)*(uint *)(lVar4 + 0x408);
    }
    *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar4 + uVar3 * 0x20 + 8);
    lVar4 = *(long *)(lVar6 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xc08);
    if (uVar5 != 0) {
      if ((uVar5 & 0xffff) < 0x60) {
        uVar3 = (ulong)uVar5 & 0xffff;
        plVar7 = (long *)(lVar4 + uVar3 * 0x20 + 8);
        do {
          uVar3 = uVar3 + 1;
          if (*(short *)(*plVar7 + 8) == 0) break;
          *(undefined2 *)(*plVar7 + 8) = 0;
          plVar7 = plVar7 + 4;
        } while (((uint)uVar3 & 0xffff) != 0x60);
        uVar5 = *(uint *)(lVar4 + 0xc08);
      }
      *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
      *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
      uVar3 = (ulong)*(uint *)(lVar4 + 0xc08);
      do {
        if (uVar3 == 0) {
          return bVar1;
        }
        uVar3 = uVar3 - 1;
        *(int *)(lVar4 + 0xc08) = (int)uVar3;
      } while (*(short *)(*(long *)(lVar4 + (uVar3 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar4 + 0xc08) = (int)uVar3 + 1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


