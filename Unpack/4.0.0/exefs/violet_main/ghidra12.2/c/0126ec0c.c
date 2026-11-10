/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126ec0c; name: FUN_0126ec0c
 */


undefined1 FUN_0126ec0c(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar7 = *(long *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar7 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar7 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar5 = *(long *)(lVar3 + 0x58);
  uVar4 = *(uint *)(lVar5 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar4 + 1;
    lVar5 = *(long *)(lVar3 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  uVar8 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar6 = (long *)(lVar5 + uVar8 * 0x20 + 8);
  do {
    uVar9 = uVar8;
    if (uVar4 == uVar9) goto LAB_0126ed34;
    lVar7 = *plVar6;
    if (*(short *)(lVar7 + 8) == 0) goto LAB_0126ecfc;
    plVar6 = plVar6 + 4;
    uVar8 = uVar9 + 1;
  } while (*(short *)(lVar7 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_0126ecfc:
    lVar5 = *(long *)(lVar5 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x48;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x248) = lVar5;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0126ed34:
  bVar1 = true;
  FUN_0107b310(lVar3,0x9d,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar5 + 0x78) + 0x248);
  if (lVar3 != 0) {
    bVar1 = *(int *)(lVar3 + 0xc) == 0;
  }
  lVar3 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar5 + 0x58);
    uVar8 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar3 + uVar8 * 0x20 + 8);
  lVar3 = *(long *)(lVar5 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar4 & 0xffff;
      plVar6 = (long *)(lVar3 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar6 + 8) == 0) break;
        *(undefined2 *)(*plVar6 + 8) = 0;
        plVar6 = plVar6 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar8 == 0) goto LAB_0126ee3c;
      uVar8 = uVar8 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar3 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar8 + 1;
  }
LAB_0126ee3c:
  if (bVar1) {
    uVar2 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x70) + 0x19);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


