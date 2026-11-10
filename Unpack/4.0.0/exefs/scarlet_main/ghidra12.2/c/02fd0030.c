/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd0030; name: FUN_02fd0030
 */


void FUN_02fd0030(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  
  lVar5 = *(long *)(*(long *)(param_3 + 8) + 0x4a8);
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(bool *)(param_1 + 0xe1) = *(int *)(lVar5 + 0x1c) == 2;
  lVar6 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar6 + 0x4b0);
  *(undefined8 *)(param_1 + 0xa0) = **(undefined8 **)(param_3 + 0x4e0);
  *(undefined8 **)(param_1 + 0xa8) = param_2;
  *(long *)(param_1 + 0x38) = lVar6 + 0x530;
  lVar5 = 0;
  if (*(char *)(*(long *)(lVar6 + 0x500) + 0xaa0) != '\0') {
    lVar5 = *(long *)(lVar6 + 0x500) + 0xab0;
  }
  *(long *)(param_1 + 0x30) = lVar5;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar6 + 0x150);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 0x20);
  uVar13 = *(undefined8 *)(lVar6 + 0x4e0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar6 + 0x4e8);
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  uVar13 = *(undefined8 *)(lVar6 + 0x4f0);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar6 + 0x4f8);
  *(undefined8 *)(param_1 + 0x70) = uVar13;
  iVar9 = *(int *)(param_2 + 1);
  lVar5 = (long)iVar9;
  if ((int)(*(uint *)(param_1 + 0xd4) & 0x7fffffff) < iVar9) {
    FUN_02fd32e0(param_1 + 200,lVar5);
  }
  iVar4 = *(int *)(param_1 + 0xd0);
  lVar6 = (long)iVar4;
  if (iVar4 < iVar9) {
    lVar10 = *(long *)(param_1 + 200);
    puVar8 = (undefined8 *)(lVar10 + lVar6 * 0x710);
    *(int *)(param_1 + 0xd0) = iVar9;
    do {
      *puVar8 = 0;
      puVar8[2] = puVar8 + 6;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined4 *)((long)puVar8 + 0x1c) = 0x80000018;
      puVar8[0x20] = 0;
      puVar8[0x22] = puVar8 + 0x26;
      *(undefined4 *)(puVar8 + 0x23) = 0;
      *(undefined4 *)((long)puVar8 + 0x11c) = 0x80000018;
      puVar8[0x40] = 0;
      puVar8[0x42] = puVar8 + 0x46;
      *(undefined4 *)(puVar8 + 0x43) = 0;
      *(undefined4 *)((long)puVar8 + 0x21c) = 0x80000018;
      puVar8[0x60] = 0;
      puVar8[0x62] = puVar8 + 0x66;
      *(undefined4 *)(puVar8 + 99) = 0;
      *(undefined4 *)((long)puVar8 + 0x31c) = 0x80000018;
      puVar8[0x80] = 0;
      puVar8[0x82] = puVar8 + 0x86;
      *(undefined4 *)(puVar8 + 0x83) = 0;
      *(undefined4 *)((long)puVar8 + 0x41c) = 0x80000018;
      puVar8[0xa0] = 0;
      puVar8[0xa2] = puVar8 + 0xa6;
      *(undefined4 *)(puVar8 + 0xa3) = 0;
      *(undefined4 *)((long)puVar8 + 0x51c) = 0x80000018;
      puVar8[0xc0] = 0;
      puVar8[0xc2] = puVar8 + 0xc6;
      *(undefined4 *)(puVar8 + 0xc3) = 0;
      *(undefined4 *)((long)puVar8 + 0x61c) = 0x80000018;
      *(undefined1 *)(puVar8 + 0xe0) = 0;
      puVar8 = puVar8 + 0xe2;
    } while (puVar8 != (undefined8 *)(lVar10 + lVar5 * 0x710));
  }
  else if (iVar9 < iVar4) {
    *(int *)(param_1 + 0xd0) = iVar9;
    lVar5 = lVar6 * -0x710 + lVar5 * 0x710;
    lVar6 = lVar6 * 0x710 + *(long *)(param_1 + 200);
    do {
      lVar6 = lVar6 + -0x710;
      FUN_02fd2cc0(lVar6);
      lVar5 = lVar5 + 0x710;
    } while (lVar5 != 0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)*param_2 + 8) + 0x4b0);
  iVar9 = *(int *)(lVar5 + 0x20);
  *(undefined8 *)(param_1 + 0xe8) = *param_5;
  *(undefined8 *)(param_1 + 0xf8) = *param_5;
  *(undefined8 *)(param_1 + 0xf0) = param_5[0xa4];
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar9) {
    FUN_02fd2a54((undefined8 *)(param_1 + 0xb0));
  }
  iVar9 = *(int *)(lVar5 + 0x1c);
  if (0 < iVar9) {
    iVar4 = 0;
    iVar7 = 0x10000;
    do {
      if (iVar4 < iVar9) {
        iVar11 = 0;
        iVar12 = iVar7;
        do {
          iVar1 = iVar4 + ((iVar12 >> 0x10) * (iVar12 + -0x10000 >> 0x10) >> 1);
          iVar2 = *(int *)(param_5[0xa4] + (long)iVar1 * 0x10 + 0xc) +
                  *(int *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 0x10 + 0xc);
          if (0 < iVar2) {
            iVar9 = *(int *)(param_1 + 0xb8);
            *(int *)(param_1 + 0xb8) = iVar9 + 1;
            piVar3 = (int *)(*(long *)(param_1 + 0xb0) + (long)iVar9 * 8);
            *(short *)(piVar3 + 1) = (short)iVar1;
            iVar9 = iVar4;
            if (iVar11 != 0) {
              iVar9 = -1;
            }
            *(char *)((long)piVar3 + 6) = (char)iVar9;
            *piVar3 = iVar2 * 10;
            iVar9 = *(int *)(lVar5 + 0x1c);
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x10000;
        } while (iVar4 + iVar11 < iVar9);
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x10000;
    } while (iVar4 < iVar9);
  }
  iVar9 = *(int *)(param_1 + 0xb8) + -1;
  if (iVar9 == 0 || *(int *)(param_1 + 0xb8) < 1) {
    return;
  }
  FUN_02fd2bd0(*(undefined8 *)(param_1 + 0xb0),0,iVar9);
  return;
}


