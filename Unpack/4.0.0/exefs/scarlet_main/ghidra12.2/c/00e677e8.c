/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e677e8; name: FUN_00e677e8
 */


void FUN_00e677e8(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  ushort *puVar9;
  int *piVar10;
  int iVar11;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00e67818;
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
          if (cVar4 == '\0') goto LAB_00e67818;
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
LAB_00e67818:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar10 = *(int **)(param_1 + 0x10);
    iVar11 = *piVar10;
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 4;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar10 + lVar6 + 8) =
           *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar10 + lVar6 + 10) =
           *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar11 >> 0x10);
      lVar6 = lVar7;
    } while (lVar7 != 0x140);
    puVar9 = *(ushort **)(param_1 + 8);
    if (puVar9 != (ushort *)0x0) {
      iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      *puVar9 = *puVar9 ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar11 >> 0x10);
      puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar8 = 0;
    lVar6 = 0xe;
    do {
      psVar2 = (short *)(lVar7 + lVar6);
      lVar6 = lVar6 + 8;
      sVar8 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar8;
    } while (lVar6 != 0x14e);
    if (*(short *)(lVar7 + 6) != sVar8) {
      *(ushort *)(lVar7 + 4) = *(ushort *)(lVar7 + 4) | 4;
    }
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


