/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b7178c; name: FUN_02b7178c
 */


bool FUN_02b7178c(long param_1)

{
  long *plVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  uint *puVar12;
  short sVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b717bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b717bc:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar14 = *(int **)(param_1 + 0x10);
    iVar16 = *piVar14;
    lVar8 = 0;
    do {
      lVar10 = lVar8 + 4;
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar14 + lVar8 + 8) =
           *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar14 + lVar8 + 10) =
           *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
      lVar8 = lVar10;
    } while (lVar10 != 0x140);
    puVar11 = *(ushort **)(param_1 + 8);
    if (puVar11 != (ushort *)0x0) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar13 = 0;
    lVar8 = 0xe;
    do {
      psVar2 = (short *)(lVar10 + lVar8);
      lVar8 = lVar8 + 8;
      sVar13 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar13;
    } while (lVar8 != 0x14e);
    if (*(short *)(lVar10 + 6) != sVar13) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  puVar17 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar17[1] >> 2 & 1) == 0) {
    bVar3 = (&DAT_03d62e18)[((ulong)(*puVar17 >> 0xd) & 0x1f) * 4];
    uVar9 = puVar17[(ulong)bVar3 * 0x14 + 0xe] | puVar17[(ulong)bVar3 * 0x14 + 0xd] |
            puVar17[(ulong)bVar3 * 0x14 + 0x10];
    puVar15 = puVar17 + (ulong)bVar3 * 0x14 + 2;
    puVar12 = puVar17 + (ulong)bVar3 * 0x14 + 0xf;
    uVar18 = puVar17[(ulong)bVar3 * 0x14 + 0x11];
  }
  else {
    puVar15 = (uint *)&DAT_04842290;
    uVar9 = DAT_048422c0 | DAT_048422bc | DAT_048422c8;
    puVar12 = (uint *)&DAT_048422c4;
    uVar18 = DAT_048422cc;
  }
  uVar7 = *puVar12;
  cVar5 = *(char *)((long)puVar15 + 0x35);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar17 != (uint *)0x0) {
      sVar13 = 0;
      lVar8 = 0xe;
      do {
        psVar2 = (short *)((long)puVar17 + lVar8);
        lVar8 = lVar8 + 8;
        sVar13 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar13;
      } while (lVar8 != 0x14e);
      *(short *)((long)puVar17 + 6) = sVar13;
      piVar14 = *(int **)(param_1 + 0x10);
      iVar16 = *piVar14;
      lVar8 = 0;
      do {
        lVar10 = lVar8 + 4;
        iVar4 = iVar16 * 0x41c64e6d + 0x6073;
        iVar16 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar14 + lVar8 + 8) =
             *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar14 + lVar8 + 10) =
             *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
        lVar8 = lVar10;
      } while (lVar10 != 0x140);
    }
    puVar11 = *(ushort **)(param_1 + 8);
    if ((puVar11 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar16 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return (uVar9 != 0 || uVar18 != 0) || (cVar5 != '\0' || (char)uVar7 != '\0');
}


