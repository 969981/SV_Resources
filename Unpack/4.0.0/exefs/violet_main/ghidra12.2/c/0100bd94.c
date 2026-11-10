/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100bd94; name: FUN_0100bd94
 */


undefined1 FUN_0100bd94(long param_1)

{
  short *psVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  ushort *puVar6;
  uint *puVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar9 = *(int **)(param_1 + 0x10);
    iVar10 = *piVar9;
    lVar11 = 0;
    do {
      lVar4 = lVar11 + 4;
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar9 + lVar11 + 8) =
           *(ushort *)((long)piVar9 + lVar11 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar9 + lVar11 + 10) =
           *(ushort *)((long)piVar9 + lVar11 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
      lVar11 = lVar4;
    } while (lVar4 != 0x140);
    puVar6 = *(ushort **)(param_1 + 8);
    if (puVar6 != (ushort *)0x0) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar6 = *puVar6 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[1] = puVar6[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[2] = puVar6[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[3] = puVar6[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[4] = puVar6[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[5] = puVar6[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar6[6] = puVar6[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar6[7] = puVar6[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar8 = 0;
    lVar11 = 0xe;
    do {
      psVar1 = (short *)(lVar4 + lVar11);
      lVar11 = lVar11 + 8;
      sVar8 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar8;
    } while (lVar11 != 0x14e);
    if (*(short *)(lVar4 + 6) != sVar8) {
      *(ushort *)(lVar4 + 4) = *(ushort *)(lVar4 + 4) | 4;
    }
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar7[1] >> 2 & 1) == 0) {
    puVar5 = puVar7 + (ulong)(byte)(&DAT_03d62e1a)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 2;
  }
  else {
    puVar5 = (uint *)&DAT_04842330;
  }
  uVar2 = *(undefined1 *)((long)puVar5 + 0x2d);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar7 != (uint *)0x0) {
      sVar8 = 0;
      lVar11 = 0xe;
      do {
        psVar1 = (short *)((long)puVar7 + lVar11);
        lVar11 = lVar11 + 8;
        sVar8 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar8;
      } while (lVar11 != 0x14e);
      *(short *)((long)puVar7 + 6) = sVar8;
      piVar9 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar9;
      lVar11 = 0;
      do {
        lVar4 = lVar11 + 4;
        iVar3 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar9 + lVar11 + 8) =
             *(ushort *)((long)piVar9 + lVar11 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar9 + lVar11 + 10) =
             *(ushort *)((long)piVar9 + lVar11 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar11 = lVar4;
      } while (lVar4 != 0x140);
    }
    puVar6 = *(ushort **)(param_1 + 8);
    if ((puVar6 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar6 = *puVar6 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[1] = puVar6[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[2] = puVar6[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[3] = puVar6[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar10 * 0x41c64e6d + 0x6073;
      puVar6[4] = puVar6[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar3 * 0x41c64e6d + 0x6073;
      puVar6[5] = puVar6[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar6[6] = puVar6[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar6[7] = puVar6[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return uVar2;
}


