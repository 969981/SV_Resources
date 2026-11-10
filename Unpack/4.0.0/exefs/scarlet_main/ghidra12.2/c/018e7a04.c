/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e7a04; name: FUN_018e7a04
 */


void FUN_018e7a04(long param_1,long param_2)

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
  long lVar11;
  uint *puVar12;
  uint uVar13;
  ushort *puVar14;
  short sVar15;
  int *piVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  
  lVar9 = *(long *)(param_1 + 0x70);
  plVar2 = (long *)(lVar9 + 0x20);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_018e7a44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_018e7a44;
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
LAB_018e7a44:
  if (*(char *)(lVar9 + 0x18) != '\0') {
    piVar16 = *(int **)(lVar9 + 0x10);
    iVar18 = *piVar16;
    lVar10 = 0;
    do {
      lVar11 = lVar10 + 4;
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar16 + lVar10 + 8) =
           *(ushort *)((long)piVar16 + lVar10 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
      *(ushort *)((long)piVar16 + lVar10 + 10) =
           *(ushort *)((long)piVar16 + lVar10 + 10) ^ (ushort)((uint)iVar18 >> 0x10);
      lVar10 = lVar11;
    } while (lVar11 != 0x140);
    puVar14 = *(ushort **)(lVar9 + 8);
    if (puVar14 != (ushort *)0x0) {
      iVar18 = **(int **)(lVar9 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      *puVar14 = *puVar14 ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[1] = puVar14[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      puVar14[2] = puVar14[2] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[3] = puVar14[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      puVar14[4] = puVar14[4] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[5] = puVar14[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar14[6] = puVar14[6] ^ (ushort)((uint)iVar18 >> 0x10);
      puVar14[7] = puVar14[7] ^ (ushort)((uint)(iVar18 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar11 = *(long *)(lVar9 + 0x10);
    *(undefined1 *)(lVar9 + 0x18) = 0;
    sVar15 = 0;
    lVar10 = 0xe;
    do {
      psVar3 = (short *)(lVar11 + lVar10);
      lVar10 = lVar10 + 8;
      sVar15 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar15;
    } while (lVar10 != 0x14e);
    if (*(short *)(lVar11 + 6) != sVar15) {
      *(ushort *)(lVar11 + 4) = *(ushort *)(lVar11 + 4) | 4;
    }
  }
  puVar12 = *(uint **)(lVar9 + 0x10);
  if (((byte)puVar12[1] >> 2 & 1) == 0) {
    puVar12 = puVar12 + (ulong)(byte)(&DAT_03d62e1b)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar12 = (uint *)&DAT_04842380;
  }
  if (*(char *)(param_2 + 0x54) == '\0') goto LAB_018e7d18;
  uVar13 = (uint)*(ushort *)(param_2 + 0x50);
  if (*(ushort *)(param_2 + 0x50) == 0) {
    iVar18 = 0;
  }
  else {
    puVar14 = *(ushort **)(param_2 + 0x30);
    iVar18 = 0;
    do {
      uVar5 = (ushort)*puVar12;
      *puVar14 = uVar5;
      if (uVar5 == 0) goto LAB_018e7d14;
      if (uVar5 == 0x10) {
        puVar20 = (uint *)((long)puVar12 + 2);
        uVar5 = *(ushort *)puVar20;
        uVar1 = uVar5 + 2;
        bVar8 = uVar13 < uVar1;
        uVar13 = uVar13 - uVar1;
        if (bVar8 || uVar13 == 0) {
          *puVar14 = 0;
          goto LAB_018e7d14;
        }
        uVar19 = uVar5 + 1;
        uVar4 = uVar19 & 7;
        puVar17 = puVar14 + 1;
        *puVar17 = uVar5;
        if (uVar4 != 0) {
          lVar10 = 0;
          do {
            lVar11 = lVar10;
            uVar19 = uVar19 - 1;
            uVar4 = uVar4 - 1;
            *(undefined2 *)((long)puVar14 + lVar11 + 4) =
                 *(undefined2 *)((long)puVar12 + lVar11 + 4);
            lVar10 = lVar11 + 2;
          } while (uVar4 != 0);
          puVar14 = (ushort *)((long)puVar14 + lVar11 + 4);
          puVar12 = (uint *)((long)puVar12 + lVar11 + 2);
          puVar20 = (uint *)((long)puVar12 + 2);
          puVar17 = puVar14;
        }
        if (6 < uVar5) {
          do {
            puVar17[1] = (ushort)puVar12[1];
            puVar17[2] = (ushort)puVar20[1];
            puVar17[3] = *(ushort *)((long)puVar20 + 6);
            puVar17[4] = (ushort)puVar20[2];
            puVar17[5] = *(ushort *)((long)puVar20 + 10);
            puVar17[6] = (ushort)puVar20[3];
            puVar12 = (uint *)((long)puVar20 + 0xe);
            puVar17[7] = *(ushort *)puVar12;
            puVar20 = puVar20 + 4;
            uVar19 = uVar19 - 8;
            puVar17 = puVar17 + 8;
            *puVar17 = (ushort)*puVar20;
            puVar14 = puVar17;
          } while (uVar19 != 0);
        }
        puVar12 = puVar20;
        iVar18 = uVar1 + iVar18;
      }
      else {
        puVar14 = puVar14 + 1;
        puVar12 = (uint *)((long)puVar12 + 2);
        iVar18 = iVar18 + 1;
        uVar13 = uVar13 - 1;
      }
    } while (uVar13 != 0);
    if (iVar18 != 0) {
      iVar18 = iVar18 + -1;
      puVar14[-1] = 0;
    }
  }
LAB_018e7d14:
  *(short *)(param_2 + 0x52) = (short)iVar18;
LAB_018e7d18:
  if ((*(char *)(lVar9 + 0x18) == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
    lVar10 = *(long *)(lVar9 + 0x10);
    if (lVar10 != 0) {
      sVar15 = 0;
      lVar11 = 0xe;
      do {
        psVar3 = (short *)(lVar10 + lVar11);
        lVar11 = lVar11 + 8;
        sVar15 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar15;
      } while (lVar11 != 0x14e);
      *(short *)(lVar10 + 6) = sVar15;
      piVar16 = *(int **)(lVar9 + 0x10);
      iVar18 = *piVar16;
      lVar10 = 0;
      do {
        lVar11 = lVar10 + 4;
        iVar6 = iVar18 * 0x41c64e6d + 0x6073;
        iVar18 = iVar6 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar16 + lVar10 + 8) =
             *(ushort *)((long)piVar16 + lVar10 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
        *(ushort *)((long)piVar16 + lVar10 + 10) =
             *(ushort *)((long)piVar16 + lVar10 + 10) ^ (ushort)((uint)iVar18 >> 0x10);
        lVar10 = lVar11;
      } while (lVar11 != 0x140);
    }
    puVar14 = *(ushort **)(lVar9 + 8);
    if ((puVar14 != (ushort *)0x0) && (*(int **)(lVar9 + 0x10) != (int *)0x0)) {
      iVar18 = **(int **)(lVar9 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      *puVar14 = *puVar14 ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[1] = puVar14[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      puVar14[2] = puVar14[2] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[3] = puVar14[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar18 * 0x41c64e6d + 0x6073;
      puVar14[4] = puVar14[4] ^ (ushort)((uint)iVar18 >> 0x10);
      iVar18 = iVar6 * 0x41c64e6d + 0x6073;
      puVar14[5] = puVar14[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar14[6] = puVar14[6] ^ (ushort)((uint)iVar18 >> 0x10);
      puVar14[7] = puVar14[7] ^ (ushort)((uint)(iVar18 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(lVar9 + 0x18) = 1;
  }
  *(undefined8 *)(lVar9 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
  return;
}


