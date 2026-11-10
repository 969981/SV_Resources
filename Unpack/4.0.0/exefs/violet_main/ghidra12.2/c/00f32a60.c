/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f32a60; name: FUN_00f32a60
 */


void FUN_00f32a60(long param_1,void *param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  short sVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  
  cVar3 = *(char *)(param_1 + 0x19);
  if ((cVar3 != '\0') && (*(undefined1 *)(param_1 + 0x19) = 0, *(char *)(param_1 + 0x18) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      sVar7 = 0;
      lVar5 = 0xe;
      do {
        psVar1 = (short *)(lVar9 + lVar5);
        lVar5 = lVar5 + 8;
        sVar7 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar7;
      } while (lVar5 != 0x14e);
      *(short *)(lVar9 + 6) = sVar7;
      piVar8 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar8;
      lVar9 = 0;
      do {
        lVar5 = lVar9 + 4;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar8 + lVar9 + 8) =
             *(ushort *)((long)piVar8 + lVar9 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar8 + lVar9 + 10) =
             *(ushort *)((long)piVar8 + lVar9 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar9 = lVar5;
      } while (lVar5 != 0x140);
    }
    puVar6 = *(ushort **)(param_1 + 8);
    if ((puVar6 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar6 = *puVar6 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar6[1] = puVar6[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[2] = puVar6[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar6[3] = puVar6[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[4] = puVar6[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar6[5] = puVar6[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar6[6] = puVar6[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar6[7] = puVar6[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,*(void **)(param_1 + 0x10),0x148);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = (*(undefined8 **)(param_1 + 8))[1];
    *param_3 = **(undefined8 **)(param_1 + 8);
    param_3[1] = uVar2;
  }
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      piVar8 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar8;
      lVar9 = 0;
      do {
        lVar5 = lVar9 + 4;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar8 + lVar9 + 8) =
             *(ushort *)((long)piVar8 + lVar9 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar8 + lVar9 + 10) =
             *(ushort *)((long)piVar8 + lVar9 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar9 = lVar5;
      } while (lVar5 != 0x140);
      puVar6 = *(ushort **)(param_1 + 8);
      if (puVar6 != (ushort *)0x0) {
        iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        *puVar6 = *puVar6 ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar6[1] = puVar6[1] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        puVar6[2] = puVar6[2] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar6[3] = puVar6[3] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        puVar6[4] = puVar6[4] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar6[5] = puVar6[5] ^ (ushort)((uint)iVar4 >> 0x10);
        puVar6[6] = puVar6[6] ^ (ushort)((uint)iVar10 >> 0x10);
        puVar6[7] = puVar6[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      lVar5 = *(long *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar7 = 0;
      lVar9 = 0xe;
      do {
        psVar1 = (short *)(lVar5 + lVar9);
        lVar9 = lVar9 + 8;
        sVar7 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar7;
      } while (lVar9 != 0x14e);
      if (*(short *)(lVar5 + 6) != sVar7) {
        *(ushort *)(lVar5 + 4) = *(ushort *)(lVar5 + 4) | 4;
      }
    }
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}


