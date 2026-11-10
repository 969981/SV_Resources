/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9da00; name: FUN_01e9da00
 */


void FUN_01e9da00(long param_1,ushort *param_2,uint param_3)

{
  long *plVar1;
  short *psVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  ushort *puVar12;
  int *piVar13;
  long lVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  uint *puVar19;
  ushort *puVar20;
  ushort local_5c [14];
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01e9da40;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01e9da40;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01e9da40:
  puVar11 = *(uint **)(param_1 + 0x10);
  if (0xc < param_3) {
    param_3 = 0xd;
  }
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar16 = *puVar11;
      lVar9 = 0;
      do {
        lVar14 = lVar9 + 4;
        iVar10 = uVar16 * 0x41c64e6d + 0x6073;
        uVar16 = iVar10 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)puVar11 + lVar9 + 8) =
             *(ushort *)((long)puVar11 + lVar9 + 8) ^ (ushort)((uint)iVar10 >> 0x10);
        *(ushort *)((long)puVar11 + lVar9 + 10) =
             *(ushort *)((long)puVar11 + lVar9 + 10) ^ (ushort)(uVar16 >> 0x10);
        lVar9 = lVar14;
      } while (lVar14 != 0x140);
      puVar12 = *(ushort **)(param_1 + 8);
      if (puVar12 != (ushort *)0x0) {
        iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        *puVar12 = *puVar12 ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
        puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar10 >> 0x10);
        puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      puVar11 = *(uint **)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar15 = 0;
      lVar9 = 0xe;
      do {
        psVar2 = (short *)((long)puVar11 + lVar9);
        lVar9 = lVar9 + 8;
        sVar15 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar15;
      } while (lVar9 != 0x14e);
      if (*(short *)((long)puVar11 + 6) != sVar15) {
        *(ushort *)(puVar11 + 1) = (ushort)puVar11[1] | 4;
        puVar11 = *(uint **)(param_1 + 0x10);
      }
    }
    if (((byte)puVar11[1] >> 2 & 1) == 0) {
      puVar11 = puVar11 + (ulong)(byte)(&DAT_03d62e19)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      puVar11 = (uint *)&DAT_048422e0;
    }
    if (param_3 != 0) {
      iVar10 = 0;
      do {
        uVar4 = (ushort)*puVar11;
        *param_2 = uVar4;
        if (uVar4 == 0) goto LAB_01e9de40;
        if (uVar4 == 0x10) {
          puVar19 = (uint *)((long)puVar11 + 2);
          uVar4 = *(ushort *)puVar19;
          uVar16 = uVar4 + 2;
          bVar7 = param_3 < uVar16;
          param_3 = param_3 - uVar16;
          if (bVar7 || param_3 == 0) {
            *param_2 = 0;
            goto LAB_01e9de40;
          }
          uVar17 = uVar4 + 1;
          uVar3 = uVar17 & 7;
          puVar12 = param_2 + 1;
          *puVar12 = uVar4;
          if (uVar3 != 0) {
            lVar9 = 0;
            do {
              lVar14 = lVar9;
              uVar17 = uVar17 - 1;
              uVar3 = uVar3 - 1;
              *(undefined2 *)((long)param_2 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar11 + lVar14 + 4);
              lVar9 = lVar14 + 2;
            } while (uVar3 != 0);
            puVar12 = (ushort *)((long)param_2 + lVar14 + 4);
            puVar11 = (uint *)((long)puVar11 + lVar14 + 2);
            puVar19 = (uint *)((long)puVar11 + 2);
            param_2 = puVar12;
          }
          if (6 < uVar4) {
            do {
              puVar12[1] = (ushort)puVar11[1];
              puVar12[2] = (ushort)puVar19[1];
              puVar12[3] = *(ushort *)((long)puVar19 + 6);
              puVar12[4] = (ushort)puVar19[2];
              puVar12[5] = *(ushort *)((long)puVar19 + 10);
              puVar12[6] = (ushort)puVar19[3];
              puVar11 = (uint *)((long)puVar19 + 0xe);
              puVar12[7] = *(ushort *)puVar11;
              puVar19 = puVar19 + 4;
              uVar17 = uVar17 - 8;
              puVar12 = puVar12 + 8;
              *puVar12 = (ushort)*puVar19;
              param_2 = puVar12;
            } while (uVar17 != 0);
          }
          puVar11 = puVar19;
          iVar10 = uVar16 + iVar10;
        }
        else {
          param_2 = param_2 + 1;
          puVar11 = (uint *)((long)puVar11 + 2);
          iVar10 = iVar10 + 1;
          param_3 = param_3 - 1;
        }
      } while (param_3 != 0);
      if (iVar10 != 0) {
        param_2[-1] = 0;
      }
    }
LAB_01e9de40:
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        sVar15 = 0;
        lVar14 = 0xe;
        do {
          psVar2 = (short *)(lVar9 + lVar14);
          lVar14 = lVar14 + 8;
          sVar15 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar15;
        } while (lVar14 != 0x14e);
        *(short *)(lVar9 + 6) = sVar15;
        piVar13 = *(int **)(param_1 + 0x10);
        iVar10 = *piVar13;
        lVar9 = 0;
        do {
          lVar14 = lVar9 + 4;
          iVar5 = iVar10 * 0x41c64e6d + 0x6073;
          iVar10 = iVar5 * 0x41c64e6d + 0x6073;
          *(ushort *)((long)piVar13 + lVar9 + 8) =
               *(ushort *)((long)piVar13 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
          *(ushort *)((long)piVar13 + lVar9 + 10) =
               *(ushort *)((long)piVar13 + lVar9 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
          lVar9 = lVar14;
        } while (lVar14 != 0x140);
      }
      puVar12 = *(ushort **)(param_1 + 8);
      if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
        iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        *puVar12 = *puVar12 ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
        puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar10 >> 0x10);
        puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  else {
    uVar8 = FUN_0100bd94(param_1);
    FUN_0100bbbc(local_5c,0,uVar8);
    if (param_3 != 0) {
      iVar10 = 0;
      puVar12 = local_5c;
      while( true ) {
        uVar4 = *puVar12;
        *param_2 = uVar4;
        if (uVar4 == 0) break;
        if (uVar4 == 0x10) {
          puVar18 = puVar12 + 1;
          uVar4 = *puVar18;
          uVar16 = uVar4 + 2;
          bVar7 = param_3 < uVar16;
          param_3 = param_3 - uVar16;
          if (bVar7 || param_3 == 0) {
            *param_2 = 0;
            break;
          }
          uVar17 = uVar4 + 1;
          uVar3 = uVar17 & 7;
          puVar20 = param_2 + 1;
          *puVar20 = uVar4;
          if (uVar3 != 0) {
            lVar9 = 0;
            do {
              lVar14 = lVar9;
              uVar17 = uVar17 - 1;
              uVar3 = uVar3 - 1;
              *(undefined2 *)((long)param_2 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar12 + lVar14 + 4);
              lVar9 = lVar14 + 2;
            } while (uVar3 != 0);
            puVar20 = (ushort *)((long)param_2 + lVar14 + 4);
            puVar12 = (ushort *)((long)puVar12 + lVar14 + 2);
            puVar18 = puVar12 + 1;
            param_2 = puVar20;
          }
          if (6 < uVar4) {
            do {
              puVar20[1] = puVar12[2];
              puVar20[2] = puVar18[2];
              puVar20[3] = puVar18[3];
              puVar20[4] = puVar18[4];
              puVar20[5] = puVar18[5];
              puVar20[6] = puVar18[6];
              puVar12 = puVar18 + 7;
              puVar20[7] = *puVar12;
              puVar18 = puVar18 + 8;
              uVar17 = uVar17 - 8;
              puVar20 = puVar20 + 8;
              *puVar20 = *puVar18;
              param_2 = puVar20;
            } while (uVar17 != 0);
          }
          puVar12 = puVar18;
          iVar10 = uVar16 + iVar10;
        }
        else {
          param_2 = param_2 + 1;
          puVar12 = puVar12 + 1;
          iVar10 = iVar10 + 1;
          param_3 = param_3 - 1;
        }
        if (param_3 == 0) {
          if (iVar10 != 0) {
            param_2[-1] = 0;
          }
          break;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


