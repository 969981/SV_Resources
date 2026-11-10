/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef6b04; name: FUN_00ef6b04
 */


void FUN_00ef6b04(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ushort *puVar10;
  short sVar11;
  int *piVar12;
  int iVar13;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00ef6b3c;
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
          if (cVar5 == '\0') goto LAB_00ef6b3c;
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
LAB_00ef6b3c:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar12 = *(int **)(param_1 + 0x10);
    iVar13 = *piVar12;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar12 + lVar7 + 8) =
           *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar12 + lVar7 + 10) =
           *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x140);
    puVar10 = *(ushort **)(param_1 + 8);
    if (puVar10 != (ushort *)0x0) {
      iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
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
  puVar9 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar9[1] >> 2 & 1) == 0) {
    puVar9 = puVar9 + (ulong)(byte)(&DAT_03d62e18)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x14 + 2;
  }
  else {
    puVar9 = (uint *)&DAT_048423e0;
  }
  uVar3 = 2;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  *(ushort *)((long)puVar9 + 0xe) = *(ushort *)((long)puVar9 + 0xe) & 0xfffd | uVar3;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      sVar11 = 0;
      lVar8 = 0xe;
      do {
        psVar2 = (short *)(lVar7 + lVar8);
        lVar8 = lVar8 + 8;
        sVar11 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar11;
      } while (lVar8 != 0x14e);
      *(short *)(lVar7 + 6) = sVar11;
      piVar12 = *(int **)(param_1 + 0x10);
      iVar13 = *piVar12;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar12 + lVar7 + 8) =
             *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar12 + lVar7 + 10) =
             *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x140);
    }
    puVar10 = *(ushort **)(param_1 + 8);
    if ((puVar10 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


