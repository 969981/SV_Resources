/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f14ea8; name: FUN_00f14ea8
 */


void FUN_00f14ea8(long param_1,void *param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  long lVar6;
  int *piVar7;
  short sVar8;
  int iVar9;
  long lVar10;
  
  if (param_2 != (void *)0x0) {
    memcpy(*(void **)(param_1 + 0x10),param_2,0x148);
  }
  if (param_3 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar2 = param_3[1];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = 1;
  iVar9 = *piVar7;
  lVar10 = 0;
  do {
    lVar6 = lVar10 + 4;
    iVar3 = iVar9 * 0x41c64e6d + 0x6073;
    iVar9 = iVar3 * 0x41c64e6d + 0x6073;
    *(ushort *)((long)piVar7 + lVar10 + 8) =
         *(ushort *)((long)piVar7 + lVar10 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
    *(ushort *)((long)piVar7 + lVar10 + 10) =
         *(ushort *)((long)piVar7 + lVar10 + 10) ^ (ushort)((uint)iVar9 >> 0x10);
    lVar10 = lVar6;
  } while (lVar6 != 0x140);
  puVar5 = *(ushort **)(param_1 + 8);
  if (puVar5 != (ushort *)0x0) {
    iVar9 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
    iVar3 = iVar9 * 0x41c64e6d + 0x6073;
    *puVar5 = *puVar5 ^ (ushort)((uint)iVar9 >> 0x10);
    iVar9 = iVar3 * 0x41c64e6d + 0x6073;
    puVar5[1] = puVar5[1] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar9 * 0x41c64e6d + 0x6073;
    puVar5[2] = puVar5[2] ^ (ushort)((uint)iVar9 >> 0x10);
    iVar9 = iVar3 * 0x41c64e6d + 0x6073;
    puVar5[3] = puVar5[3] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar9 * 0x41c64e6d + 0x6073;
    puVar5[4] = puVar5[4] ^ (ushort)((uint)iVar9 >> 0x10);
    iVar9 = iVar3 * 0x41c64e6d + 0x6073;
    puVar5[5] = puVar5[5] ^ (ushort)((uint)iVar3 >> 0x10);
    puVar5[6] = puVar5[6] ^ (ushort)((uint)iVar9 >> 0x10);
    puVar5[7] = puVar5[7] ^ (ushort)((uint)(iVar9 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  sVar8 = 0;
  lVar10 = 0xe;
  do {
    psVar1 = (short *)(lVar6 + lVar10);
    lVar10 = lVar10 + 8;
    sVar8 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar8;
  } while (lVar10 != 0x14e);
  if (((*(short *)(lVar6 + 6) == sVar8) ||
      (*(ushort *)(lVar6 + 4) = *(ushort *)(lVar6 + 4) | 4, *(char *)(param_1 + 0x18) == '\0')) &&
     (*(char *)(param_1 + 0x19) == '\0')) {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      sVar8 = 0;
      lVar6 = 0xe;
      do {
        psVar1 = (short *)(lVar10 + lVar6);
        lVar6 = lVar6 + 8;
        sVar8 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar8;
      } while (lVar6 != 0x14e);
      *(short *)(lVar10 + 6) = sVar8;
      piVar7 = *(int **)(param_1 + 0x10);
      iVar9 = *piVar7;
      lVar10 = 0;
      do {
        lVar6 = lVar10 + 4;
        iVar3 = iVar9 * 0x41c64e6d + 0x6073;
        iVar9 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar7 + lVar10 + 8) =
             *(ushort *)((long)piVar7 + lVar10 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar7 + lVar10 + 10) =
             *(ushort *)((long)piVar7 + lVar10 + 10) ^ (ushort)((uint)iVar9 >> 0x10);
        lVar10 = lVar6;
      } while (lVar6 != 0x140);
    }
    puVar5 = *(ushort **)(param_1 + 8);
    if ((puVar5 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar9 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar9 * 0x41c64e6d + 0x6073;
      *puVar5 = *puVar5 ^ (ushort)((uint)iVar9 >> 0x10);
      iVar9 = iVar3 * 0x41c64e6d + 0x6073;
      puVar5[1] = puVar5[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar9 * 0x41c64e6d + 0x6073;
      puVar5[2] = puVar5[2] ^ (ushort)((uint)iVar9 >> 0x10);
      iVar9 = iVar3 * 0x41c64e6d + 0x6073;
      puVar5[3] = puVar5[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar9 * 0x41c64e6d + 0x6073;
      puVar5[4] = puVar5[4] ^ (ushort)((uint)iVar9 >> 0x10);
      iVar9 = iVar3 * 0x41c64e6d + 0x6073;
      puVar5[5] = puVar5[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar5[6] = puVar5[6] ^ (ushort)((uint)iVar9 >> 0x10);
      puVar5[7] = puVar5[7] ^ (ushort)((uint)(iVar9 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


