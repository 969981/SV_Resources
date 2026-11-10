/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293882c; name: FUN_0293882c
 */


void FUN_0293882c(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar4 + 0xc08);
  if (uVar3 < 0x60) {
    do {
      lVar6 = *(long *)(lVar4 + (ulong)uVar3 * 0x20 + 8);
      if (*(short *)(lVar6 + 8) == 0) {
        if (uVar3 < 0x5f) {
          *(undefined2 *)(lVar6 + 8) = 1;
          *(int *)(lVar4 + 0xc08) = *(int *)(lVar4 + 0xc08) + 1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(lVar4 + 0xc08) = uVar3;
    } while (uVar3 != 0x60);
  }
  lVar4 = *(long *)(lVar2 + 0x58);
  uVar3 = *(uint *)(lVar4 + 0x408);
  if (uVar3 < 0x1f) {
    *(uint *)(lVar4 + 0x408) = uVar3 + 1;
    lVar4 = *(long *)(lVar2 + 0x58);
    uVar3 = *(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar4 + (ulong)uVar3 * 0x20 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar2 = *(long *)(lVar4 + 0x38);
  uVar3 = *(uint *)(lVar2 + 0xc08);
  uVar7 = (ulong)uVar3;
  if (uVar3 < 0x61) {
    uVar3 = 0x60;
  }
  plVar5 = (long *)(lVar2 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar3 == uVar8) goto LAB_02938958;
    lVar6 = *plVar5;
    if (*(short *)(lVar6 + 8) == 0) goto LAB_02938928;
    plVar5 = plVar5 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar6 + 8) != 3);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02938928:
    lVar2 = *(long *)(lVar2 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 8) = 3;
      *(undefined4 *)(lVar2 + 0xc) = uVar1;
      *(undefined1 *)(lVar2 + 10) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x20) = lVar2;
    }
  }
LAB_02938958:
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xc2,8,1);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar2 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar4 + uVar7 * 0x20 + 8);
  lVar2 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar2 + 0xc08);
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar3 & 0xffff;
      plVar5 = (long *)(lVar2 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar5 + 8) == 0) break;
        *(undefined2 *)(*plVar5 + 8) = 0;
        plVar5 = plVar5 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar3 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar3 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar3 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar2 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


