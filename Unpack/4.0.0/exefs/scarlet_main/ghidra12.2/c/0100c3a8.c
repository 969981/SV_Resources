/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100c3a8; name: FUN_0100c3a8
 */


void FUN_0100c3a8(long param_1,ushort *param_2)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ushort *puVar12;
  short sVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  
  plVar2 = (long *)(param_1 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0100c3e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0100c3e0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0100c3e0:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar15 = *(int **)(param_1 + 0x10);
    iVar16 = *piVar15;
    lVar9 = 0;
    do {
      lVar10 = lVar9 + 4;
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar15 + lVar9 + 8) =
           *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
      *(ushort *)((long)piVar15 + lVar9 + 10) =
           *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
      lVar9 = lVar10;
    } while (lVar10 != 0x140);
    puVar12 = *(ushort **)(param_1 + 8);
    if (puVar12 != (ushort *)0x0) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar13 = 0;
    lVar9 = 0xe;
    do {
      psVar3 = (short *)(lVar10 + lVar9);
      lVar9 = lVar9 + 8;
      sVar13 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar13;
    } while (lVar9 != 0x14e);
    if (*(short *)(lVar10 + 6) != sVar13) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03d62e19)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar11 = (uint *)&DAT_04842430;
  }
  iVar16 = 0;
  uVar14 = 0xd;
  do {
    uVar5 = *param_2;
    *(ushort *)puVar11 = uVar5;
    if (uVar5 == 0) goto LAB_0100c69c;
    if (uVar5 == 0x10) {
      puVar12 = param_2 + 1;
      uVar5 = *puVar12;
      uVar1 = uVar5 + 2;
      bVar8 = uVar14 < uVar1;
      uVar14 = uVar14 - uVar1;
      if (bVar8 || uVar14 == 0) {
        *(undefined2 *)puVar11 = 0;
        goto LAB_0100c69c;
      }
      uVar17 = uVar5 + 1;
      uVar4 = uVar17 & 7;
      puVar18 = (uint *)((long)puVar11 + 2);
      *(ushort *)puVar18 = uVar5;
      if (uVar4 != 0) {
        lVar9 = 0;
        do {
          lVar10 = lVar9;
          uVar17 = uVar17 - 1;
          uVar4 = uVar4 - 1;
          *(undefined2 *)((long)puVar11 + lVar10 + 4) = *(undefined2 *)((long)param_2 + lVar10 + 4);
          lVar9 = lVar10 + 2;
        } while (uVar4 != 0);
        puVar11 = (uint *)((long)puVar11 + lVar10 + 4);
        param_2 = (ushort *)((long)param_2 + lVar10 + 2);
        puVar12 = param_2 + 1;
        puVar18 = puVar11;
      }
      if (6 < uVar5) {
        do {
          *(ushort *)((long)puVar18 + 2) = param_2[2];
          *(ushort *)(puVar18 + 1) = puVar12[2];
          *(ushort *)((long)puVar18 + 6) = puVar12[3];
          *(ushort *)(puVar18 + 2) = puVar12[4];
          *(ushort *)((long)puVar18 + 10) = puVar12[5];
          *(ushort *)(puVar18 + 3) = puVar12[6];
          param_2 = puVar12 + 7;
          *(ushort *)((long)puVar18 + 0xe) = *param_2;
          puVar12 = puVar12 + 8;
          uVar17 = uVar17 - 8;
          puVar18 = puVar18 + 4;
          *(ushort *)puVar18 = *puVar12;
          puVar11 = puVar18;
        } while (uVar17 != 0);
      }
      iVar16 = uVar1 + iVar16;
    }
    else {
      puVar11 = (uint *)((long)puVar11 + 2);
      puVar12 = param_2 + 1;
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 - 1;
    }
    param_2 = puVar12;
  } while (uVar14 != 0);
  if (iVar16 != 0) {
    *(undefined2 *)((long)puVar11 + -2) = 0;
  }
LAB_0100c69c:
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      sVar13 = 0;
      lVar10 = 0xe;
      do {
        psVar3 = (short *)(lVar9 + lVar10);
        lVar10 = lVar10 + 8;
        sVar13 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar13;
      } while (lVar10 != 0x14e);
      *(short *)(lVar9 + 6) = sVar13;
      piVar15 = *(int **)(param_1 + 0x10);
      iVar16 = *piVar15;
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 4;
        iVar6 = iVar16 * 0x41c64e6d + 0x6073;
        iVar16 = iVar6 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar15 + lVar9 + 8) =
             *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
        *(ushort *)((long)piVar15 + lVar9 + 10) =
             *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
        lVar9 = lVar10;
      } while (lVar10 != 0x140);
    }
    puVar12 = *(ushort **)(param_1 + 8);
    if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar6 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


