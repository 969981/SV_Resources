/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdff3c; name: FUN_00fdff3c
 */


void FUN_00fdff3c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *__src;
  size_t __n;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  iVar5 = DAT_04835c28._4_4_;
  lVar4 = DAT_04835c00;
  if (DAT_04835c08 == 0) {
    return;
  }
  lVar7 = *(long *)(DAT_04835c08 + 0x28);
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(lVar7 + 0x50) == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x40) != 0) {
    return;
  }
  __src = *(void **)(DAT_04835c08 + 0x30);
  if (__src == (void *)0x0) {
    return;
  }
  uVar2 = (int)DAT_04835c28 * DAT_04835c28._4_4_ * 3;
  uVar8 = (ulong)uVar2 / 6;
  uVar3 = (uint)(uVar8 >> 9);
  uVar9 = (uint)uVar8;
  if (((uint)DAT_04835c38 & 0xfffffffd) == 0) {
    if (0x78 < uVar3) {
      uVar9 = 0xf200;
    }
  }
  else {
    uVar1 = 0xff000;
    if (uVar2 < 0x5fa006 || (uint)DAT_04835c38 != 5) {
      uVar1 = uVar9;
    }
    uVar2 = uVar9;
    if (0x4be < uVar3) {
      uVar2 = 0x97e00;
    }
    uVar9 = uVar1;
    if (((uint)DAT_04835c38 & 0xfffffffd) == 1) {
      uVar9 = uVar2;
    }
  }
  switch((uint)DAT_04835c38) {
  case 0:
    *(int *)(DAT_04835c00 + 0x58) = (int)DAT_04835c28;
    *(int *)(lVar4 + 0x5c) = iVar5;
    if (0x78 < uVar9 >> 9) {
      uVar9 = 0xf200;
    }
    __n = (size_t)uVar9;
    *(uint *)(lVar4 + 0x60) = uVar9;
    puVar6 = (undefined8 *)(lVar4 + 0x68);
    break;
  case 1:
    *(int *)(DAT_04835c00 + 0x40) = (int)DAT_04835c28;
    *(int *)(lVar4 + 0x44) = iVar5;
    if (0x4be < uVar9 >> 9) {
      uVar9 = 0x97e00;
    }
    __n = (size_t)uVar9;
    *(uint *)(lVar4 + 0x48) = uVar9;
    puVar6 = (undefined8 *)(lVar4 + 0x50);
    break;
  case 2:
    *(int *)(DAT_04835c00 + 0x88) = (int)DAT_04835c28;
    *(int *)(lVar4 + 0x8c) = iVar5;
    if (0x78 < uVar9 >> 9) {
      uVar9 = 0xf200;
    }
    __n = (size_t)uVar9;
    *(uint *)(lVar4 + 0x90) = uVar9;
    puVar6 = (undefined8 *)(lVar4 + 0x98);
    break;
  case 3:
    *(int *)(DAT_04835c00 + 0x70) = (int)DAT_04835c28;
    *(int *)(lVar4 + 0x74) = iVar5;
    if (0x4be < uVar9 >> 9) {
      uVar9 = 0x97e00;
    }
    __n = (size_t)uVar9;
    *(uint *)(lVar4 + 0x78) = uVar9;
    puVar6 = (undefined8 *)(lVar4 + 0x80);
    break;
  default:
    goto switchD_00fe0004_caseD_4;
  case 5:
    if (0xfefff < uVar9) {
      uVar9 = 0xff000;
    }
    __n = (size_t)uVar9;
    *(int *)(DAT_04835c00 + 0xa0) = (int)DAT_04835c28;
    *(int *)(lVar4 + 0xa4) = iVar5;
    puVar6 = (undefined8 *)(lVar4 + 0xb0);
    *(uint *)(lVar4 + 0xa8) = uVar9;
  }
  memcpy((void *)*puVar6,__src,__n);
switchD_00fe0004_caseD_4:
  DAT_04835c10 = 8;
  return;
}


