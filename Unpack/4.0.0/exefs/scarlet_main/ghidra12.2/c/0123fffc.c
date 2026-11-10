/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fffc; name: FUN_0123fffc
 */


void FUN_0123fffc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar1 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar6 = *(long *)(lVar3 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar6 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar6 + 8) = 1;
          *(int *)(lVar3 + 0xc08) = *(int *)(lVar3 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar3 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar3 = *(long *)(lVar1 + 0x58);
  uVar4 = *(uint *)(lVar3 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar3 + 0x408) = uVar4 + 1;
    lVar3 = *(long *)(lVar1 + 0x58);
    uVar4 = *(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + (ulong)uVar4 * 0x20 + 8);
  FUN_0107b310(*(undefined8 *)(param_1 + 0x10),0xe6,8,1);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar1 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar2 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar1 + 0x58);
    uVar2 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + uVar2 * 0x20 + 8);
  lVar1 = *(long *)(lVar1 + 0x38);
  uVar4 = *(uint *)(lVar1 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar2 = (ulong)uVar4 & 0xffff;
      plVar5 = (long *)(lVar1 + uVar2 * 0x20 + 8);
      do {
        uVar2 = uVar2 + 1;
        if (*(short *)(*plVar5 + 8) == 0) break;
        *(undefined2 *)(*plVar5 + 8) = 0;
        plVar5 = plVar5 + 4;
      } while (((uint)uVar2 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar1 + 0xc08);
    }
    *(uint *)(lVar1 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar1 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar2 = (ulong)*(uint *)(lVar1 + 0xc08);
    do {
      if (uVar2 == 0) {
        return;
      }
      uVar2 = uVar2 - 1;
      *(int *)(lVar1 + 0xc08) = (int)uVar2;
    } while (*(short *)(*(long *)(lVar1 + (uVar2 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar1 + 0xc08) = (int)uVar2 + 1;
  }
  return;
}


