/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292fd90; name: FUN_0292fd90
 */


void FUN_0292fd90(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar3 = *(uint *)(lVar2 + 0xc08);
  if (uVar3 < 0x60) {
    do {
      lVar6 = *(long *)(lVar2 + (ulong)uVar3 * 0x20 + 8);
      if (*(short *)(lVar6 + 8) == 0) {
        if (uVar3 < 0x5f) {
          *(undefined2 *)(lVar6 + 8) = 1;
          *(int *)(lVar2 + 0xc08) = *(int *)(lVar2 + 0xc08) + 1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(lVar2 + 0xc08) = uVar3;
    } while (uVar3 != 0x60);
  }
  lVar2 = *(long *)(lVar1 + 0x58);
  uVar3 = *(uint *)(lVar2 + 0x408);
  if (uVar3 < 0x1f) {
    *(uint *)(lVar2 + 0x408) = uVar3 + 1;
    lVar2 = *(long *)(lVar1 + 0x58);
    uVar3 = *(uint *)(lVar2 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + (ulong)uVar3 * 0x20 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar3 = *(uint *)(lVar2 + 0xc08);
  uVar7 = (ulong)uVar3;
  if (uVar3 < 0x61) {
    uVar3 = 0x60;
  }
  plVar5 = (long *)(lVar2 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar3 == uVar8) goto LAB_0292feb4;
    lVar6 = *plVar5;
    if (*(short *)(lVar6 + 8) == 0) goto LAB_0292fe80;
    plVar5 = plVar5 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar6 + 8) != 2);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0292fe80:
    lVar2 = *(long *)(lVar2 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0xc) = *param_2;
      *(undefined2 *)(lVar2 + 8) = 2;
      *(undefined1 *)(lVar2 + 10) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(*(long *)(lVar1 + 0x78) + 0x18) = lVar2;
      lVar1 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0292feb4:
  if (param_2[1] == 1) {
    uVar3 = (uint)*(ushort *)(param_2 + 4);
  }
  else {
    uVar3 = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar4 = *(uint *)(lVar2 + 0xc08);
  uVar7 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar5 = (long *)(lVar2 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar4 == uVar8) goto LAB_0292ff48;
    lVar6 = *plVar5;
    if (*(short *)(lVar6 + 8) == 0) goto LAB_0292ff14;
    plVar5 = plVar5 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar6 + 8) != 0x12);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0292ff14:
    lVar2 = *(long *)(lVar2 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0xc) = uVar3;
      *(undefined2 *)(lVar2 + 8) = 0x12;
      *(undefined1 *)(lVar2 + 10) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(*(long *)(lVar1 + 0x78) + 0x98) = lVar2;
      lVar1 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0292ff48:
  FUN_0107b310(lVar1,0xe4,8,1);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x58);
  if (*(uint *)(lVar2 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar2 + (ulong)*(uint *)(lVar2 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar2 + 0x408) = *(int *)(lVar2 + 0x408) + -1;
    lVar2 = *(long *)(lVar1 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar2 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + uVar7 * 0x20 + 8);
  lVar1 = *(long *)(lVar1 + 0x38);
  uVar3 = *(uint *)(lVar1 + 0xc08);
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar3 & 0xffff;
      plVar5 = (long *)(lVar1 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar5 + 8) == 0) break;
        *(undefined2 *)(*plVar5 + 8) = 0;
        plVar5 = plVar5 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar3 = *(uint *)(lVar1 + 0xc08);
    }
    *(uint *)(lVar1 + 0xc08) = uVar3 - 1;
    *(undefined2 *)(*(long *)(lVar1 + (ulong)(uVar3 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar1 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar1 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar1 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar1 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


