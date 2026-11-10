/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9bac0; name: FUN_01d9bac0
 */


void FUN_01d9bac0(uint param_1)

{
  int iVar1;
  long lVar2;
  void *__src;
  size_t __n;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar2 = DAT_04835c00;
  iVar1 = DAT_04835bec;
  lVar5 = *(long *)(DAT_04835c08 + 0x28);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x50) == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x40) != 0) {
    return;
  }
  __src = *(void **)(DAT_04835c08 + 0x30);
  if (__src == (void *)0x0) {
    return;
  }
  if (param_1 < 6) {
    uVar4 = DAT_04835be8 * DAT_04835bec * 3;
    uVar6 = (ulong)uVar4 / 6;
    uVar7 = (uint)uVar6;
    switch(param_1) {
    case 0:
      *(int *)(DAT_04835c00 + 0x58) = DAT_04835be8;
      *(int *)(lVar2 + 0x5c) = iVar1;
      uVar4 = uVar4 / 6;
      if (0x78 < (uint)(uVar6 >> 9)) {
        uVar4 = 0xf200;
      }
      __n = (size_t)uVar4;
      *(uint *)(lVar2 + 0x60) = uVar4;
      puVar3 = (undefined8 *)(lVar2 + 0x68);
      break;
    case 1:
      *(int *)(DAT_04835c00 + 0x40) = DAT_04835be8;
      *(int *)(lVar2 + 0x44) = iVar1;
      if (0x4be < uVar7 >> 9) {
        uVar7 = 0x97e00;
      }
      __n = (size_t)uVar7;
      *(uint *)(lVar2 + 0x48) = uVar7;
      puVar3 = (undefined8 *)(lVar2 + 0x50);
      break;
    case 2:
      *(int *)(DAT_04835c00 + 0x88) = DAT_04835be8;
      *(int *)(lVar2 + 0x8c) = iVar1;
      if (0x78 < uVar7 >> 9) {
        uVar7 = 0xf200;
      }
      __n = (size_t)uVar7;
      *(uint *)(lVar2 + 0x90) = uVar7;
      puVar3 = (undefined8 *)(lVar2 + 0x98);
      break;
    case 3:
      *(int *)(DAT_04835c00 + 0x70) = DAT_04835be8;
      *(int *)(lVar2 + 0x74) = iVar1;
      if (0x4be < uVar7 >> 9) {
        uVar7 = 0x97e00;
      }
      __n = (size_t)uVar7;
      *(uint *)(lVar2 + 0x78) = uVar7;
      puVar3 = (undefined8 *)(lVar2 + 0x80);
      break;
    case 4:
      goto switchD_01d9bb38_caseD_4;
    case 5:
      if (0xfefff < uVar7) {
        uVar7 = 0xff000;
      }
      __n = (size_t)uVar7;
      *(int *)(DAT_04835c00 + 0xa0) = DAT_04835be8;
      *(int *)(lVar2 + 0xa4) = iVar1;
      puVar3 = (undefined8 *)(lVar2 + 0xb0);
      *(uint *)(lVar2 + 0xa8) = uVar7;
    }
    memcpy((void *)*puVar3,__src,__n);
  }
switchD_01d9bb38_caseD_4:
  DAT_04835c10 = 8;
  return;
}


