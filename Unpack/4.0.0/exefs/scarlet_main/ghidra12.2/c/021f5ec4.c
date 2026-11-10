/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f5ec4; name: FUN_021f5ec4
 */


void FUN_021f5ec4(long param_1,long param_2)

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
  uint uVar12;
  ushort *puVar13;
  short sVar14;
  int *piVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  
  plVar2 = (long *)(param_1 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_021f5efc;
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
          if (cVar7 == '\0') goto LAB_021f5efc;
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
LAB_021f5efc:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar15 = *(int **)(param_1 + 0x10);
    iVar17 = *piVar15;
    lVar9 = 0;
    do {
      lVar10 = lVar9 + 4;
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar15 + lVar9 + 8) =
           *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
      *(ushort *)((long)piVar15 + lVar9 + 10) =
           *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar17 >> 0x10);
      lVar9 = lVar10;
    } while (lVar10 != 0x140);
    puVar13 = *(ushort **)(param_1 + 8);
    if (puVar13 != (ushort *)0x0) {
      iVar17 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar17 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar17 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar14 = 0;
    lVar9 = 0xe;
    do {
      psVar3 = (short *)(lVar10 + lVar9);
      lVar9 = lVar9 + 8;
      sVar14 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar14;
    } while (lVar9 != 0x14e);
    if (*(short *)(lVar10 + 6) != sVar14) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03d62e1a)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
  }
  else {
    puVar11 = (uint *)&DAT_04842330;
  }
  if (*(char *)(param_2 + 0x54) == '\0') goto LAB_021f61dc;
  uVar12 = (uint)*(ushort *)(param_2 + 0x50);
  if (*(ushort *)(param_2 + 0x50) == 0) {
    iVar17 = 0;
  }
  else {
    puVar13 = *(ushort **)(param_2 + 0x30);
    iVar17 = 0;
    do {
      uVar5 = (ushort)*puVar11;
      *puVar13 = uVar5;
      if (uVar5 == 0) goto LAB_021f61d8;
      if (uVar5 == 0x10) {
        puVar19 = (uint *)((long)puVar11 + 2);
        uVar5 = *(ushort *)puVar19;
        uVar1 = uVar5 + 2;
        bVar8 = uVar12 < uVar1;
        uVar12 = uVar12 - uVar1;
        if (bVar8 || uVar12 == 0) {
          *puVar13 = 0;
          goto LAB_021f61d8;
        }
        uVar18 = uVar5 + 1;
        uVar4 = uVar18 & 7;
        puVar16 = puVar13 + 1;
        *puVar16 = uVar5;
        if (uVar4 != 0) {
          lVar9 = 0;
          do {
            lVar10 = lVar9;
            uVar18 = uVar18 - 1;
            uVar4 = uVar4 - 1;
            *(undefined2 *)((long)puVar13 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar10 + 4);
            lVar9 = lVar10 + 2;
          } while (uVar4 != 0);
          puVar13 = (ushort *)((long)puVar13 + lVar10 + 4);
          puVar11 = (uint *)((long)puVar11 + lVar10 + 2);
          puVar19 = (uint *)((long)puVar11 + 2);
          puVar16 = puVar13;
        }
        if (6 < uVar5) {
          do {
            puVar16[1] = (ushort)puVar11[1];
            puVar16[2] = (ushort)puVar19[1];
            puVar16[3] = *(ushort *)((long)puVar19 + 6);
            puVar16[4] = (ushort)puVar19[2];
            puVar16[5] = *(ushort *)((long)puVar19 + 10);
            puVar16[6] = (ushort)puVar19[3];
            puVar11 = (uint *)((long)puVar19 + 0xe);
            puVar16[7] = *(ushort *)puVar11;
            puVar19 = puVar19 + 4;
            uVar18 = uVar18 - 8;
            puVar16 = puVar16 + 8;
            *puVar16 = (ushort)*puVar19;
            puVar13 = puVar16;
          } while (uVar18 != 0);
        }
        puVar11 = puVar19;
        iVar17 = uVar1 + iVar17;
      }
      else {
        puVar13 = puVar13 + 1;
        puVar11 = (uint *)((long)puVar11 + 2);
        iVar17 = iVar17 + 1;
        uVar12 = uVar12 - 1;
      }
    } while (uVar12 != 0);
    if (iVar17 != 0) {
      iVar17 = iVar17 + -1;
      puVar13[-1] = 0;
    }
  }
LAB_021f61d8:
  *(short *)(param_2 + 0x52) = (short)iVar17;
LAB_021f61dc:
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      sVar14 = 0;
      lVar10 = 0xe;
      do {
        psVar3 = (short *)(lVar9 + lVar10);
        lVar10 = lVar10 + 8;
        sVar14 = *psVar3 + psVar3[-1] + psVar3[-2] + psVar3[-3] + sVar14;
      } while (lVar10 != 0x14e);
      *(short *)(lVar9 + 6) = sVar14;
      piVar15 = *(int **)(param_1 + 0x10);
      iVar17 = *piVar15;
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 4;
        iVar6 = iVar17 * 0x41c64e6d + 0x6073;
        iVar17 = iVar6 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar15 + lVar9 + 8) =
             *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar6 >> 0x10);
        *(ushort *)((long)piVar15 + lVar9 + 10) =
             *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar17 >> 0x10);
        lVar9 = lVar10;
      } while (lVar10 != 0x140);
    }
    puVar13 = *(ushort **)(param_1 + 8);
    if ((puVar13 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar17 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar6 >> 0x10);
      iVar6 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar6 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar6 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar17 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar17 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


