/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01571a80; name: FUN_01571a80
 */


ulong FUN_01571a80(long param_1,short param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  ushort *__s1;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  ulong uVar8;
  uint *puVar9;
  ushort *__s2;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  uVar1 = -((*(int *)(param_1 + 0x20) - (int)lVar13) + *(int *)(param_1 + 0x28));
  uVar8 = (ulong)uVar1 & 3;
  if ((ulong)(lVar13 - *(long *)(param_1 + 0x38)) < uVar8) {
    FUN_0157184c(param_1,uVar8);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar8);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
  }
  else {
    puVar4 = (undefined1 *)(lVar13 - uVar8);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if ((uVar1 & 3) == 0) goto LAB_01571ae8;
  }
  *puVar4 = 0;
  if ((uVar8 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar8 != 2)) {
    uVar10 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar10) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
LAB_01571ae8:
  lVar13 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar13 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_0157184c(param_1,4);
    lVar13 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar13 + -4;
  *(undefined4 *)(lVar13 + -4) = 0;
  lVar13 = *(long *)(param_1 + 0x30);
  uVar8 = (*(long *)(param_1 + 0x20) - lVar13) + *(long *)(param_1 + 0x28);
  uVar7 = *(short *)(param_1 + 0x44) + 2;
  if (uVar7 < 5) {
    uVar7 = 4;
  }
  uVar10 = (ulong)uVar7;
  *(ushort *)(param_1 + 0x44) = uVar7;
  if ((ulong)(lVar13 - *(long *)(param_1 + 0x38)) < (ulong)uVar7) {
    FUN_0157184c(param_1,uVar10);
    lVar13 = *(long *)(param_1 + 0x30);
  }
  *(void **)(param_1 + 0x30) = (void *)(lVar13 - uVar10);
  memset((void *)(lVar13 - uVar10),0,uVar10);
  sVar2 = (short)uVar8;
  *(short *)(*(long *)(param_1 + 0x30) + 2) = sVar2 - param_2;
  **(undefined2 **)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x44);
  uVar10 = (ulong)*(uint *)(param_1 + 0x40);
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x40) != 0) {
    puVar6 = puVar5 + uVar10 * -2;
    *(short *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(puVar6 + 1)) = sVar2 - (short)*puVar6;
    puVar5 = *(undefined4 **)(param_1 + 0x38);
    if (puVar6 + 2 < puVar5) {
      *(short *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(puVar6 + 3)) =
           sVar2 - (short)puVar6[2];
      puVar5 = *(undefined4 **)(param_1 + 0x38);
      if (puVar6 + 4 < puVar5) {
        *(short *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(puVar6 + 5)) =
             sVar2 - (short)puVar6[4];
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        for (puVar6 = puVar6 + 6; puVar6 < puVar5; puVar6 = puVar6 + 2) {
          *(short *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(puVar6 + 1)) =
               sVar2 - (short)*puVar6;
          puVar5 = *(undefined4 **)(param_1 + 0x38);
        }
      }
    }
    uVar10 = (ulong)*(uint *)(param_1 + 0x40);
  }
  puVar9 = *(uint **)(param_1 + 0x28);
  __s2 = *(ushort **)(param_1 + 0x30);
  puVar12 = puVar5 + uVar10 * -2;
  lVar13 = *(long *)(param_1 + 0x20);
  uVar1 = ((int)lVar13 - (int)__s2) + (int)puVar9;
  *(uint **)(param_1 + 0x38) = puVar12;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  uVar11 = uVar1;
  if ((*(char *)(param_1 + 0x51) != '\0') && (puVar9 < puVar12)) {
    uVar7 = *__s2;
    puVar14 = puVar9;
    do {
      uVar11 = *puVar14;
      __s1 = (ushort *)((long)puVar9 + (lVar13 - (ulong)uVar11));
      if ((uVar7 == *__s1) && (iVar3 = memcmp(__s1,__s2,(ulong)uVar7), iVar3 == 0)) {
        __s2 = (ushort *)((long)__s2 + (ulong)(uVar1 - (int)uVar8));
        *(ushort **)(param_1 + 0x30) = __s2;
        goto LAB_01571c80;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar12);
    uVar11 = uVar1;
  }
LAB_01571c80:
  if (uVar11 == ((int)puVar9 + (int)lVar13) - (int)__s2) {
    if ((ulong)((long)__s2 - (long)puVar12) < 4) {
      FUN_0157184c(param_1,4);
      puVar12 = *(uint **)(param_1 + 0x38);
    }
    *puVar12 = uVar11;
    lVar13 = *(long *)(param_1 + 0x20);
    puVar9 = *(uint **)(param_1 + 0x28);
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 4;
  }
  *(uint *)((long)puVar9 + (lVar13 - (uVar8 & 0xffffffff))) = uVar11 - (int)uVar8;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar8 & 0xffffffff;
}


