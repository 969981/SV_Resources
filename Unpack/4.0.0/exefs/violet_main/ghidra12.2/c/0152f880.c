/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152f880; name: FUN_0152f880
 */


uint FUN_0152f880(long param_1)

{
  long *plVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ushort *puVar10;
  uint *puVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0152f8b0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0152f8b0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0152f8b0:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar13 = *(int **)(param_1 + 0x10);
    iVar14 = *piVar13;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar13 + lVar7 + 8) =
           *(ushort *)((long)piVar13 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar13 + lVar7 + 10) =
           *(ushort *)((long)piVar13 + lVar7 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x140);
    puVar10 = *(ushort **)(param_1 + 8);
    if (puVar10 != (ushort *)0x0) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar12 = 0;
    lVar7 = 0xe;
    do {
      psVar2 = (short *)(lVar8 + lVar7);
      lVar7 = lVar7 + 8;
      sVar12 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar12;
    } while (lVar7 != 0x14e);
    if (*(short *)(lVar8 + 6) != sVar12) {
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
    }
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar9[1] >> 2 & 1) == 0) {
    puVar11 = puVar9 + (ulong)(byte)(&DAT_03d62e1a)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x14 + 2
    ;
  }
  else {
    puVar11 = (uint *)&DAT_04842330;
  }
  uVar3 = puVar11[10];
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar9 != (uint *)0x0) {
      sVar12 = 0;
      lVar7 = 0xe;
      do {
        psVar2 = (short *)((long)puVar9 + lVar7);
        lVar7 = lVar7 + 8;
        sVar12 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar12;
      } while (lVar7 != 0x14e);
      *(short *)((long)puVar9 + 6) = sVar12;
      piVar13 = *(int **)(param_1 + 0x10);
      iVar14 = *piVar13;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar4 = iVar14 * 0x41c64e6d + 0x6073;
        iVar14 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar13 + lVar7 + 8) =
             *(ushort *)((long)piVar13 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar13 + lVar7 + 10) =
             *(ushort *)((long)piVar13 + lVar7 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x140);
    }
    puVar10 = *(ushort **)(param_1 + 8);
    if ((puVar10 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return uVar3;
}


