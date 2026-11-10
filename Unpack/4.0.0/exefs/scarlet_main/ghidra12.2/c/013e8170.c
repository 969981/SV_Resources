/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e8170; name: FUN_013e8170
 */


undefined2 FUN_013e8170(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  short sVar10;
  int *piVar11;
  int iVar12;
  undefined2 uVar13;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_013e81a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_013e81a0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_013e81a0:
  if (*(long *)(param_1 + 8) == 0) {
    uVar13 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x18) != '\0') {
      piVar11 = *(int **)(param_1 + 0x10);
      iVar12 = *piVar11;
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 4;
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar11 + lVar6 + 8) =
             *(ushort *)((long)piVar11 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar11 + lVar6 + 10) =
             *(ushort *)((long)piVar11 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
        lVar6 = lVar7;
      } while (lVar7 != 0x140);
      puVar8 = *(ushort **)(param_1 + 8);
      if (puVar8 != (ushort *)0x0) {
        iVar12 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        *puVar8 = *puVar8 ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[1] = puVar8[1] ^ (ushort)((uint)iVar3 >> 0x10);
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        puVar8[2] = puVar8[2] ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[3] = puVar8[3] ^ (ushort)((uint)iVar3 >> 0x10);
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        puVar8[4] = puVar8[4] ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[5] = puVar8[5] ^ (ushort)((uint)iVar3 >> 0x10);
        puVar8[6] = puVar8[6] ^ (ushort)((uint)iVar12 >> 0x10);
        puVar8[7] = puVar8[7] ^ (ushort)((uint)(iVar12 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar10 = 0;
      lVar6 = 0xe;
      do {
        psVar2 = (short *)(lVar7 + lVar6);
        lVar6 = lVar6 + 8;
        sVar10 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar10;
      } while (lVar6 != 0x14e);
      if (*(short *)(lVar7 + 6) != sVar10) {
        *(ushort *)(lVar7 + 4) = *(ushort *)(lVar7 + 4) | 4;
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar6 + 4) >> 2 & 1) == 0) {
      puVar9 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar9 = &DAT_04842280;
    }
    uVar13 = *(undefined2 *)((long)puVar9 + 6);
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      if (lVar6 != 0) {
        sVar10 = 0;
        lVar7 = 0xe;
        do {
          psVar2 = (short *)(lVar6 + lVar7);
          lVar7 = lVar7 + 8;
          sVar10 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar10;
        } while (lVar7 != 0x14e);
        *(short *)(lVar6 + 6) = sVar10;
        piVar11 = *(int **)(param_1 + 0x10);
        iVar12 = *piVar11;
        lVar6 = 0;
        do {
          lVar7 = lVar6 + 4;
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          *(ushort *)((long)piVar11 + lVar6 + 8) =
               *(ushort *)((long)piVar11 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
          *(ushort *)((long)piVar11 + lVar6 + 10) =
               *(ushort *)((long)piVar11 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
          lVar6 = lVar7;
        } while (lVar7 != 0x140);
      }
      puVar8 = *(ushort **)(param_1 + 8);
      if ((puVar8 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
        iVar12 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        *puVar8 = *puVar8 ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[1] = puVar8[1] ^ (ushort)((uint)iVar3 >> 0x10);
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        puVar8[2] = puVar8[2] ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[3] = puVar8[3] ^ (ushort)((uint)iVar3 >> 0x10);
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        puVar8[4] = puVar8[4] ^ (ushort)((uint)iVar12 >> 0x10);
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        puVar8[5] = puVar8[5] ^ (ushort)((uint)iVar3 >> 0x10);
        puVar8[6] = puVar8[6] ^ (ushort)((uint)iVar12 >> 0x10);
        puVar8[7] = puVar8[7] ^ (ushort)((uint)(iVar12 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return uVar13;
}


