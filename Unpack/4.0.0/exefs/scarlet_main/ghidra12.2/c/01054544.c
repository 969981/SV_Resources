/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01054544; name: FUN_01054544
 */


void FUN_01054544(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  ushort *puVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  short sVar17;
  ushort *puVar18;
  uint uVar19;
  uint *puVar20;
  
  plVar2 = (long *)(param_1 + 0x20);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0105457c;
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
            *plVar2 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0105457c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0105457c:
  puVar12 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar12[1] >> 2 & 1) != 0) {
    uVar9 = FUN_0100bd94(param_1);
    FUN_010549ec(param_2,0,uVar9);
    goto LAB_010549a4;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar15 = *puVar12;
    lVar10 = 0;
    do {
      lVar16 = lVar10 + 4;
      iVar11 = uVar15 * 0x41c64e6d + 0x6073;
      uVar15 = iVar11 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)puVar12 + lVar10 + 8) =
           *(ushort *)((long)puVar12 + lVar10 + 8) ^ (ushort)((uint)iVar11 >> 0x10);
      *(ushort *)((long)puVar12 + lVar10 + 10) =
           *(ushort *)((long)puVar12 + lVar10 + 10) ^ (ushort)(uVar15 >> 0x10);
      lVar10 = lVar16;
    } while (lVar16 != 0x140);
    puVar13 = *(ushort **)(param_1 + 8);
    if (puVar13 != (ushort *)0x0) {
      iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar11 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    puVar12 = *(uint **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar17 = 0;
    lVar10 = 0xe;
    do {
      psVar3 = (short *)((long)puVar12 + lVar10);
      lVar10 = lVar10 + 8;
      sVar17 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar17;
    } while (lVar10 != 0x14e);
    if (*(short *)((long)puVar12 + 6) != sVar17) {
      *(ushort *)(puVar12 + 1) = (ushort)puVar12[1] | 4;
      puVar12 = *(uint **)(param_1 + 0x10);
    }
  }
  if (((byte)puVar12[1] >> 2 & 1) == 0) {
    puVar12 = puVar12 + (ulong)(byte)(&DAT_03d62e19)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar12 = (uint *)&DAT_048422e0;
  }
  if (*(char *)(param_2 + 0x54) != '\0') {
    uVar15 = (uint)*(ushort *)(param_2 + 0x50);
    if (*(ushort *)(param_2 + 0x50) == 0) {
      iVar11 = 0;
    }
    else {
      puVar13 = *(ushort **)(param_2 + 0x30);
      iVar11 = 0;
      do {
        uVar5 = (ushort)*puVar12;
        *puVar13 = uVar5;
        if (uVar5 == 0) goto LAB_0105486c;
        if (uVar5 == 0x10) {
          puVar20 = (uint *)((long)puVar12 + 2);
          uVar5 = *(ushort *)puVar20;
          uVar1 = uVar5 + 2;
          bVar8 = uVar15 < uVar1;
          uVar15 = uVar15 - uVar1;
          if (bVar8 || uVar15 == 0) {
            *puVar13 = 0;
            goto LAB_0105486c;
          }
          uVar19 = uVar5 + 1;
          uVar4 = uVar19 & 7;
          puVar18 = puVar13 + 1;
          *puVar18 = uVar5;
          if (uVar4 != 0) {
            lVar10 = 0;
            do {
              lVar16 = lVar10;
              uVar19 = uVar19 - 1;
              uVar4 = uVar4 - 1;
              *(undefined2 *)((long)puVar13 + lVar16 + 4) =
                   *(undefined2 *)((long)puVar12 + lVar16 + 4);
              lVar10 = lVar16 + 2;
            } while (uVar4 != 0);
            puVar13 = (ushort *)((long)puVar13 + lVar16 + 4);
            puVar12 = (uint *)((long)puVar12 + lVar16 + 2);
            puVar20 = (uint *)((long)puVar12 + 2);
            puVar18 = puVar13;
          }
          if (6 < uVar5) {
            do {
              puVar18[1] = (ushort)puVar12[1];
              puVar18[2] = (ushort)puVar20[1];
              puVar18[3] = *(ushort *)((long)puVar20 + 6);
              puVar18[4] = (ushort)puVar20[2];
              puVar18[5] = *(ushort *)((long)puVar20 + 10);
              puVar18[6] = (ushort)puVar20[3];
              puVar12 = (uint *)((long)puVar20 + 0xe);
              puVar18[7] = *(ushort *)puVar12;
              puVar20 = puVar20 + 4;
              uVar19 = uVar19 - 8;
              puVar18 = puVar18 + 8;
              *puVar18 = (ushort)*puVar20;
              puVar13 = puVar18;
            } while (uVar19 != 0);
          }
          puVar12 = puVar20;
          iVar11 = uVar1 + iVar11;
        }
        else {
          puVar13 = puVar13 + 1;
          puVar12 = (uint *)((long)puVar12 + 2);
          iVar11 = iVar11 + 1;
          uVar15 = uVar15 - 1;
        }
      } while (uVar15 != 0);
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar13[-1] = 0;
      }
    }
LAB_0105486c:
    *(short *)(param_2 + 0x52) = (short)iVar11;
  }
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      sVar17 = 0;
      lVar16 = 0xe;
      do {
        psVar3 = (short *)(lVar10 + lVar16);
        lVar16 = lVar16 + 8;
        sVar17 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar17;
      } while (lVar16 != 0x14e);
      *(short *)(lVar10 + 6) = sVar17;
      piVar14 = *(int **)(param_1 + 0x10);
      iVar11 = *piVar14;
      lVar10 = 0;
      do {
        lVar16 = lVar10 + 4;
        iVar6 = iVar11 * 0x41c64e6d + 0x6073;
        iVar11 = iVar6 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar14 + lVar10 + 8) =
             *(ushort *)((long)piVar14 + lVar10 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
        *(ushort *)((long)piVar14 + lVar10 + 10) =
             *(ushort *)((long)piVar14 + lVar10 + 10) ^ (ushort)((uint)iVar11 >> 0x10);
        lVar10 = lVar16;
      } while (lVar16 != 0x140);
    }
    puVar13 = *(ushort **)(param_1 + 8);
    if ((puVar13 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar11 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar11 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
LAB_010549a4:
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


