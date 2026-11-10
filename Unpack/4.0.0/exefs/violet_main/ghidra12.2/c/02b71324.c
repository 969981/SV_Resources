/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b71324; name: FUN_02b71324
 */


void FUN_02b71324(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ushort *puVar15;
  short sVar16;
  int *piVar17;
  int iVar18;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02b71360;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02b71360:
  uVar12 = (param_2 & 0xffff) / 200;
  param_2 = param_2 + uVar12 * -200;
  uVar10 = (ulong)(param_2 >> 3 & 0x1f);
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar17 = *(int **)(param_1 + 0x10);
    iVar18 = *piVar17;
    lVar9 = 0;
    do {
      lVar13 = lVar9 + 4;
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar17 + lVar9 + 8) =
           *(ushort *)((long)piVar17 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
      *(ushort *)((long)piVar17 + lVar9 + 10) =
           *(ushort *)((long)piVar17 + lVar9 + 10) ^ (ushort)((uint)iVar18 >> 0x10);
      lVar9 = lVar13;
    } while (lVar13 != 0x140);
    puVar15 = *(ushort **)(param_1 + 8);
    if (puVar15 != (ushort *)0x0) {
      iVar18 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      *puVar15 = *puVar15 ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[1] = puVar15[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      puVar15[2] = puVar15[2] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[3] = puVar15[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      puVar15[4] = puVar15[4] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[5] = puVar15[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar15[6] = puVar15[6] ^ (ushort)((uint)iVar18 >> 0x10);
      puVar15[7] = puVar15[7] ^ (ushort)((uint)(iVar18 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar16 = 0;
    lVar9 = 0xe;
    do {
      psVar2 = (short *)(lVar13 + lVar9);
      lVar9 = lVar9 + 8;
      sVar16 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar16;
    } while (lVar9 != 0x14e);
    if (*(short *)(lVar13 + 6) != sVar16) {
      *(ushort *)(lVar13 + 4) = *(ushort *)(lVar13 + 4) | 4;
    }
  }
  uVar12 = uVar12 & 0xff;
  bVar8 = (byte)(1 << (ulong)(param_2 & 7));
  if (uVar12 == 1) {
    puVar11 = *(uint **)(param_1 + 0x10);
    if (((ushort)puVar11[1] >> 2 & 1) == 0) {
      if (0x67 < (param_2 & 0xff)) goto LAB_02b71720;
      puVar14 = puVar11 + (ulong)(byte)(&DAT_03d62e18)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      if (0x67 < (param_2 & 0xff)) goto LAB_02b71720;
      puVar14 = (uint *)&DAT_04842290;
    }
    bVar4 = *(byte *)((long)puVar14 + uVar10 + 0x43);
    bVar3 = bVar4 | bVar8;
    if ((param_3 & 1) == 0) {
      bVar3 = bVar4 & (bVar8 ^ 0xff);
    }
    if (((ushort)puVar11[1] >> 2 & 1) == 0) {
      puVar11 = puVar11 + (ulong)(byte)(&DAT_03d62e18)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      puVar11 = (uint *)&DAT_048423e0;
    }
    *(byte *)((long)puVar11 + uVar10 + 0x43) = bVar3;
  }
  else {
    if (uVar12 != 0) goto LAB_02b71720;
    puVar11 = *(uint **)(param_1 + 0x10);
    if (((ushort)puVar11[1] >> 2 & 1) == 0) {
      puVar14 = puVar11 + (ulong)(byte)(&DAT_03d62e1b)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      puVar14 = (uint *)&DAT_04842380;
    }
    bVar4 = *(byte *)((long)puVar14 + uVar10 + 0x37);
    bVar3 = bVar4 | bVar8;
    if ((param_3 & 1) == 0) {
      bVar3 = bVar4 & (bVar8 ^ 0xff);
    }
    if (((ushort)puVar11[1] >> 2 & 1) == 0) {
      puVar11 = puVar11 + (ulong)(byte)(&DAT_03d62e1b)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      puVar11 = (uint *)&DAT_048424d0;
    }
    *(byte *)((long)puVar11 + uVar10 + 0x37) = bVar3;
  }
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      sVar16 = 0;
      lVar13 = 0xe;
      do {
        psVar2 = (short *)(lVar9 + lVar13);
        lVar13 = lVar13 + 8;
        sVar16 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar16;
      } while (lVar13 != 0x14e);
      *(short *)(lVar9 + 6) = sVar16;
      piVar17 = *(int **)(param_1 + 0x10);
      iVar18 = *piVar17;
      lVar9 = 0;
      do {
        lVar13 = lVar9 + 4;
        iVar5 = iVar18 * 0x41c64e6d + 0x6073;
        iVar18 = iVar5 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar17 + lVar9 + 8) =
             *(ushort *)((long)piVar17 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
        *(ushort *)((long)piVar17 + lVar9 + 10) =
             *(ushort *)((long)piVar17 + lVar9 + 10) ^ (ushort)((uint)iVar18 >> 0x10);
        lVar9 = lVar13;
      } while (lVar13 != 0x140);
    }
    puVar15 = *(ushort **)(param_1 + 8);
    if ((puVar15 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar18 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      *puVar15 = *puVar15 ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[1] = puVar15[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      puVar15[2] = puVar15[2] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[3] = puVar15[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar18 * 0x41c64e6d + 0x6073;
      puVar15[4] = puVar15[4] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar5 * 0x41c64e6d + 0x6073;
      puVar15[5] = puVar15[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar15[6] = puVar15[6] ^ (ushort)((uint)iVar18 >> 0x10);
      puVar15[7] = puVar15[7] ^ (ushort)((uint)(iVar18 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
LAB_02b71720:
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


