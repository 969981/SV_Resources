/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f37f0; name: FUN_021f37f0
 */


void FUN_021f37f0(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  uint *puVar10;
  short sVar11;
  int *piVar12;
  int iVar13;
  
  lVar6 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(lVar6 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_021f3828;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x28));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_021f3828;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_021f3828:
  if (*(char *)(lVar6 + 0x18) != '\0') {
    piVar12 = *(int **)(lVar6 + 0x10);
    iVar13 = *piVar12;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar12 + lVar7 + 8) =
           *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar12 + lVar7 + 10) =
           *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x140);
    puVar9 = *(ushort **)(lVar6 + 8);
    if (puVar9 != (ushort *)0x0) {
      iVar13 = **(int **)(lVar6 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar9 = *puVar9 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(lVar6 + 0x10);
    *(undefined1 *)(lVar6 + 0x18) = 0;
    sVar11 = 0;
    lVar7 = 0xe;
    do {
      psVar2 = (short *)(lVar8 + lVar7);
      lVar7 = lVar7 + 8;
      sVar11 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar11;
    } while (lVar7 != 0x14e);
    if (*(short *)(lVar8 + 6) != sVar11) {
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
    }
  }
  puVar10 = *(uint **)(lVar6 + 0x10);
  if (((byte)puVar10[1] >> 2 & 1) == 0) {
    puVar10 = puVar10 + (ulong)(byte)(&DAT_03d62e1b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar10 = (uint *)&DAT_048424d0;
  }
  *(undefined1 *)((long)puVar10 + 0x4f) = 0;
  *(undefined8 *)((long)puVar10 + 0x47) = 0;
  *(undefined8 *)((long)puVar10 + 0x3f) = 0;
  *(undefined8 *)((long)puVar10 + 0x37) = 0;
  puVar10 = *(uint **)(lVar6 + 0x10);
  if (((byte)puVar10[1] >> 2 & 1) == 0) {
    puVar10 = puVar10 + (ulong)(byte)(&DAT_03d62e18)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar10 = (uint *)&DAT_048423e0;
  }
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  *(undefined8 *)((long)puVar10 + 0x43) = 0;
  if ((*(char *)(lVar6 + 0x18) == '\0') && (*(char *)(lVar6 + 0x19) == '\0')) {
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      sVar11 = 0;
      lVar8 = 0xe;
      do {
        psVar2 = (short *)(lVar7 + lVar8);
        lVar8 = lVar8 + 8;
        sVar11 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar11;
      } while (lVar8 != 0x14e);
      *(short *)(lVar7 + 6) = sVar11;
      piVar12 = *(int **)(lVar6 + 0x10);
      iVar13 = *piVar12;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar3 = iVar13 * 0x41c64e6d + 0x6073;
        iVar13 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar12 + lVar7 + 8) =
             *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar12 + lVar7 + 10) =
             *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x140);
    }
    puVar9 = *(ushort **)(lVar6 + 8);
    if ((puVar9 != (ushort *)0x0) && (*(int **)(lVar6 + 0x10) != (int *)0x0)) {
      iVar13 = **(int **)(lVar6 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar9 = *puVar9 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
  }
  *(undefined8 *)(lVar6 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x28));
  return;
}


