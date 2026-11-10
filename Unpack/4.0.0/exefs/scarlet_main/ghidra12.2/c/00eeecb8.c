/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eeecb8; name: FUN_00eeecb8
 */


void FUN_00eeecb8(long param_1,undefined1 param_2)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  ushort *puVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar7 = *(int **)(param_1 + 0x10);
    iVar8 = *piVar7;
    lVar9 = 0;
    do {
      lVar3 = lVar9 + 4;
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar7 + lVar9 + 8) =
           *(ushort *)((long)piVar7 + lVar9 + 8) ^ (ushort)((uint)iVar2 >> 0x10);
      *(ushort *)((long)piVar7 + lVar9 + 10) =
           *(ushort *)((long)piVar7 + lVar9 + 10) ^ (ushort)((uint)iVar8 >> 0x10);
      lVar9 = lVar3;
    } while (lVar3 != 0x140);
    puVar5 = *(ushort **)(param_1 + 8);
    if (puVar5 != (ushort *)0x0) {
      iVar8 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      *puVar5 = *puVar5 ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[1] = puVar5[1] ^ (ushort)((uint)iVar2 >> 0x10);
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      puVar5[2] = puVar5[2] ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[3] = puVar5[3] ^ (ushort)((uint)iVar2 >> 0x10);
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      puVar5[4] = puVar5[4] ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[5] = puVar5[5] ^ (ushort)((uint)iVar2 >> 0x10);
      puVar5[6] = puVar5[6] ^ (ushort)((uint)iVar8 >> 0x10);
      puVar5[7] = puVar5[7] ^ (ushort)((uint)(iVar8 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar6 = 0;
    lVar9 = 0xe;
    do {
      psVar1 = (short *)(lVar3 + lVar9);
      lVar9 = lVar9 + 8;
      sVar6 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar6;
    } while (lVar9 != 0x14e);
    if (*(short *)(lVar3 + 6) != sVar6) {
      *(ushort *)(lVar3 + 4) = *(ushort *)(lVar3 + 4) | 4;
    }
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar4[1] >> 2 & 1) == 0) {
    puVar4 = puVar4 + (ulong)(byte)(&DAT_03d62e19)[((ulong)(*puVar4 >> 0xd) & 0x1f) * 4] * 0x14 + 2;
  }
  else {
    puVar4 = (uint *)&DAT_04842430;
  }
  *(undefined1 *)((long)puVar4 + 0x3d) = param_2;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      sVar6 = 0;
      lVar3 = 0xe;
      do {
        psVar1 = (short *)(lVar9 + lVar3);
        lVar3 = lVar3 + 8;
        sVar6 = *psVar1 + psVar1[-1] + psVar1[-2] + psVar1[-3] + sVar6;
      } while (lVar3 != 0x14e);
      *(short *)(lVar9 + 6) = sVar6;
      piVar7 = *(int **)(param_1 + 0x10);
      iVar8 = *piVar7;
      lVar9 = 0;
      do {
        lVar3 = lVar9 + 4;
        iVar2 = iVar8 * 0x41c64e6d + 0x6073;
        iVar8 = iVar2 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar7 + lVar9 + 8) =
             *(ushort *)((long)piVar7 + lVar9 + 8) ^ (ushort)((uint)iVar2 >> 0x10);
        *(ushort *)((long)piVar7 + lVar9 + 10) =
             *(ushort *)((long)piVar7 + lVar9 + 10) ^ (ushort)((uint)iVar8 >> 0x10);
        lVar9 = lVar3;
      } while (lVar3 != 0x140);
    }
    puVar5 = *(ushort **)(param_1 + 8);
    if ((puVar5 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar8 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      *puVar5 = *puVar5 ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[1] = puVar5[1] ^ (ushort)((uint)iVar2 >> 0x10);
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      puVar5[2] = puVar5[2] ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[3] = puVar5[3] ^ (ushort)((uint)iVar2 >> 0x10);
      iVar2 = iVar8 * 0x41c64e6d + 0x6073;
      puVar5[4] = puVar5[4] ^ (ushort)((uint)iVar8 >> 0x10);
      iVar8 = iVar2 * 0x41c64e6d + 0x6073;
      puVar5[5] = puVar5[5] ^ (ushort)((uint)iVar2 >> 0x10);
      puVar5[6] = puVar5[6] ^ (ushort)((uint)iVar8 >> 0x10);
      puVar5[7] = puVar5[7] ^ (ushort)((uint)(iVar8 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


