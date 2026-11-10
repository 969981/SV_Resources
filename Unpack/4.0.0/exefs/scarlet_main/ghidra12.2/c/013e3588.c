/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e3588; name: FUN_013e3588
 */


void FUN_013e3588(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  long lVar9;
  int *piVar10;
  short sVar11;
  int iVar12;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_013e35b8;
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
          if (cVar4 == '\0') goto LAB_013e35b8;
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
LAB_013e35b8:
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x10),0,0x148);
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    puVar8 = (ushort *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar8 = *(ushort **)(param_1 + 8);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (lVar6 != 0) {
    sVar11 = 0;
    lVar9 = 0xe;
    do {
      psVar2 = (short *)(lVar6 + lVar9);
      lVar9 = lVar9 + 8;
      sVar11 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar11;
    } while (lVar9 != 0x14e);
    *(short *)(lVar6 + 6) = sVar11;
    piVar10 = *(int **)(param_1 + 0x10);
    iVar12 = *piVar10;
    lVar6 = 0;
    do {
      lVar9 = lVar6 + 4;
      iVar3 = iVar12 * 0x41c64e6d + 0x6073;
      iVar12 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar10 + lVar6 + 8) =
           *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar10 + lVar6 + 10) =
           *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
      lVar6 = lVar9;
    } while (lVar9 != 0x140);
    puVar8 = *(ushort **)(param_1 + 8);
  }
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
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


